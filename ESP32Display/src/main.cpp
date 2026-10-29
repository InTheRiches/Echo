#include <Arduino.h>
#include <Arduino_GFX_Library.h>
#include <ArduinoJson.h>
#include <Wire.h>
#include <math.h>
#include <string.h>

#ifndef ECHO_BOARD_REV
#define ECHO_BOARD_REV 2
#endif

// Waveshare ESP32-S3-Touch-AMOLED-2.41 pin map. The display is portrait-native
// (450x600); the RM690B0 driver rotates it to the 600x450 landscape UI.
static constexpr int PIN_I2C_SDA = 47;
static constexpr int PIN_I2C_SCL = 48;
static constexpr int PIN_LCD_CS = 9;
static constexpr int PIN_LCD_CLK = 10;
static constexpr int PIN_LCD_D0 = 11;
static constexpr int PIN_LCD_D1 = 12;
static constexpr int PIN_LCD_D2 = 13;
static constexpr int PIN_LCD_D3 = 14;
static constexpr uint8_t ADDR_FT6336 = 0x38;
static constexpr uint8_t ADDR_TCA9554 = 0x20;
static constexpr uint16_t SCREEN_W = 600;
static constexpr uint16_t SCREEN_H = 450;
static constexpr uint32_t SERIAL_BAUD = 115200;
static constexpr uint32_t TELEMETRY_TIMEOUT_MS = 2000;
static constexpr uint32_t RENDER_PERIOD_MS = 250;
static constexpr size_t RX_LINE_CAPACITY = 1024;
static constexpr uint8_t MAX_JOINTS = 12;

// Neutral grayscale tuned for high contrast on the AMOLED.
static constexpr uint16_t C_BG = 0x0000;
static constexpr uint16_t C_PANEL = 0x1082;
static constexpr uint16_t C_PANEL_ALT = 0x2104;
static constexpr uint16_t C_LINE = 0x4208;
static constexpr uint16_t C_TEXT = 0xFFFF;
static constexpr uint16_t C_MUTED = 0xC618;
static constexpr uint16_t C_DIM = 0x8410;
static constexpr uint16_t C_CYAN = 0xFFFF;
static constexpr uint16_t C_BLUE = 0xC618;
static constexpr uint16_t C_GREEN = 0xFFFF;
static constexpr uint16_t C_AMBER = 0xC618;
static constexpr uint16_t C_RED = 0xFFFF;

struct JointSample {
  char name[32] = {};
  float degrees = 0.0f;
};

struct Telemetry {
  char robotState[28] = "NO ROS DATA";
  char activeModel[40] = "NOT REPORTED";
  float batteryPct = 0.0f;
  float cpuPct = 0.0f;
  float rollDeg = 0.0f;
  float pitchDeg = 0.0f;
  float jointAgeMs = 0.0f;
  bool hasBattery = false;
  bool hasCpu = false;
  bool hasImu = false;
  bool hasJointAge = false;
  bool hasAiEnabled = false;
  bool aiEnabled = false;
  bool hasSpeakers = false;
  bool speakersEnabled = false;
  bool hasMicrophone = false;
  bool microphoneEnabled = false;
  JointSample joints[MAX_JOINTS];
  uint8_t jointCount = 0;
  uint32_t lastRxMs = 0;
  uint32_t frameCount = 0;
};

enum class Page : uint8_t { Overview, Controls, Settings };

static Arduino_DataBus *qspi = nullptr;
static Arduino_RM690B0 *panel = nullptr;
static Arduino_GFX *gfx = nullptr;
static Telemetry telemetry;
static Page currentPage = Page::Overview;
static char rxLine[RX_LINE_CAPACITY];
static size_t rxLength = 0;
static bool rxDropping = false;
static bool lastTouchDown = false;
static bool boardResetReady = false;
static bool displayReady = false;
static bool screenDirty = true;
static char toastText[48] = {};
static uint32_t toastUntilMs = 0;
static uint32_t lastRenderMs = 0;
static uint8_t tcaOutput = 0x03;

static void copyText(char *destination, size_t capacity, const char *source) {
  if (capacity == 0) return;
  if (source == nullptr) source = "";
  strncpy(destination, source, capacity - 1);
  destination[capacity - 1] = '\0';
}

static bool writeTcaRegister(uint8_t reg, uint8_t value) {
  Wire.beginTransmission(ADDR_TCA9554);
  Wire.write(reg);
  Wire.write(value);
  return Wire.endTransmission() == 0;
}

static bool setTcaOutput(uint8_t bit, bool high) {
  if (high) tcaOutput |= static_cast<uint8_t>(1u << bit);
  else tcaOutput &= static_cast<uint8_t>(~(1u << bit));
  return writeTcaRegister(0x01, tcaOutput);
}

static bool pulseTcaReset(uint8_t bit) {
  if (!setTcaOutput(bit, false)) return false;
  delay(30);
  if (!setTcaOutput(bit, true)) return false;
  delay(120);
  return true;
}

static bool initBoardResets() {
  Wire.begin(PIN_I2C_SDA, PIN_I2C_SCL, 400000);
  delay(20);

#if ECHO_BOARD_REV == 2
  Wire.beginTransmission(ADDR_TCA9554);
  if (Wire.endTransmission() != 0) return false;
  // EXIO0 is OLED reset and EXIO1 is FT6336 reset on the Rev2 board.
  if (!writeTcaRegister(0x01, 0x03)) return false;
  if (!writeTcaRegister(0x03, 0xFC)) return false;
  delay(10);
  const bool lcdOk = pulseTcaReset(0);
  const bool touchOk = pulseTcaReset(1);
  return lcdOk && touchOk;
#elif ECHO_BOARD_REV == 1
  // Rev1 routes these reset signals directly instead of through EXIO.
  pinMode(21, OUTPUT);
  digitalWrite(21, LOW);
  delay(30);
  digitalWrite(21, HIGH);
  delay(120);
  pinMode(3, OUTPUT);
  digitalWrite(3, LOW);
  delay(30);
  digitalWrite(3, HIGH);
  delay(120);
  return true;
#else
#error "Set ECHO_BOARD_REV to 1 or 2 for the board in use."
#endif
}

static float jointDegrees(const char *name, bool *found = nullptr) {
  for (uint8_t i = 0; i < telemetry.jointCount; ++i) {
    if (strcmp(telemetry.joints[i].name, name) == 0) {
      if (found) *found = true;
      return telemetry.joints[i].degrees;
    }
  }
  if (found) *found = false;
  return 0.0f;
}

static bool readOptionalFloat(JsonVariantConst value, float &result) {
  if (value.isNull()) return false;
  const double parsed = value.as<double>();
  if (!isfinite(parsed)) return false;
  result = static_cast<float>(parsed);
  return true;
}

static bool readOptionalBool(JsonVariantConst value, bool &result) {
  if (value.isNull()) return false;
  result = value.as<bool>();
  return true;
}

static void acceptTelemetry(const char *line) {
  JsonDocument document;
  const DeserializationError error = deserializeJson(
      document, line, DeserializationOption::NestingLimit(5));
  if (error || strcmp(document["type"] | "", "telemetry") != 0) return;

  copyText(telemetry.robotState, sizeof(telemetry.robotState),
           document["robot_state"] | "UNKNOWN");
  copyText(telemetry.activeModel, sizeof(telemetry.activeModel),
           document["active_model"] | "NOT REPORTED");

  telemetry.hasBattery = readOptionalFloat(document["battery_pct"], telemetry.batteryPct);
  telemetry.hasCpu = readOptionalFloat(document["cpu_pct"], telemetry.cpuPct);
  telemetry.hasImu = readOptionalFloat(document["imu_roll_deg"], telemetry.rollDeg);
  if (telemetry.hasImu) {
    float pitch = 0.0f;
    telemetry.hasImu = readOptionalFloat(document["imu_pitch_deg"], pitch);
    telemetry.pitchDeg = pitch;
  }
  telemetry.hasJointAge = readOptionalFloat(document["joint_age_ms"], telemetry.jointAgeMs);
  telemetry.hasAiEnabled = readOptionalBool(document["ai_enabled"], telemetry.aiEnabled);
  telemetry.hasSpeakers = readOptionalBool(document["speakers_enabled"], telemetry.speakersEnabled);
  telemetry.hasMicrophone = readOptionalBool(document["microphone_enabled"], telemetry.microphoneEnabled);

  telemetry.jointCount = 0;
  const JsonArrayConst names = document["joint_names"].as<JsonArrayConst>();
  const JsonArrayConst positions = document["joint_positions_deg"].as<JsonArrayConst>();
  const size_t count = names.size() < positions.size() ? names.size() : positions.size();
  for (size_t i = 0; i < count && telemetry.jointCount < MAX_JOINTS; ++i) {
    const char *name = names[i] | "";
    float degrees = 0.0f;
    if (name[0] == '\0' || !readOptionalFloat(positions[i], degrees)) continue;
    JointSample &sample = telemetry.joints[telemetry.jointCount++];
    copyText(sample.name, sizeof(sample.name), name);
    sample.degrees = degrees;
  }

  telemetry.lastRxMs = millis();
  ++telemetry.frameCount;
  screenDirty = true;
}

static void pollUsbTelemetry() {
  while (Serial.available() > 0) {
    const int incoming = Serial.read();
    if (incoming < 0) break;
    const char value = static_cast<char>(incoming);
    if (value == '\r') continue;
    if (value == '\n') {
      if (!rxDropping && rxLength > 0) {
        rxLine[rxLength] = '\0';
        acceptTelemetry(rxLine);
      }
      rxLength = 0;
      rxDropping = false;
      continue;
    }
    if (rxDropping) continue;
    if (rxLength + 1 >= sizeof(rxLine)) {
      rxLength = 0;
      rxDropping = true;
      continue;
    }
    rxLine[rxLength++] = value;
  }
}

static bool readTouch(uint16_t &screenX, uint16_t &screenY) {
  Wire.beginTransmission(ADDR_FT6336);
  Wire.write(0x02);  // TD_STATUS, followed by first contact X/Y
  if (Wire.endTransmission(false) != 0) return false;
  if (Wire.requestFrom(ADDR_FT6336, static_cast<uint8_t>(5)) != 5) return false;

  const uint8_t points = Wire.read() & 0x0F;
  const uint8_t xHigh = Wire.read();
  const uint8_t xLow = Wire.read();
  const uint8_t yHigh = Wire.read();
  const uint8_t yLow = Wire.read();
  if (points == 0) return false;

  const uint16_t rawX = static_cast<uint16_t>(((xHigh & 0x0F) << 8) | xLow);
  const uint16_t rawY = static_cast<uint16_t>(((yHigh & 0x0F) << 8) | yLow);

  // FT6336 reports portrait coordinates. Match Waveshare's landscape mapping:
  // swap axes, then mirror the new Y axis.
  screenX = rawY < SCREEN_W ? rawY : SCREEN_W - 1;
  screenY = rawX < SCREEN_H ? SCREEN_H - 1 - rawX : 0;
  return true;
}

static void showToast(const char *message) {
  copyText(toastText, sizeof(toastText), message);
  toastUntilMs = millis() + 1500;
  screenDirty = true;
}

static void handleTouch(uint16_t x, uint16_t y) {
  // The whole top-left header is a back target on subpages, in addition to
  // the Overview tab. This gives the controls page an obvious, forgiving exit.
  if (currentPage != Page::Overview && x < 230 && y < 80) {
    currentPage = Page::Overview;
    screenDirty = true;
    return;
  }

  if (y < 72) {
    if (x >= 210 && x < 350) currentPage = Page::Overview;
    else if (x >= 350 && x < 455) currentPage = Page::Controls;
    else if (x >= 455 && x < 550) currentPage = Page::Settings;
    else return;
    screenDirty = true;
    return;
  }

  if (currentPage == Page::Overview && y >= 382) {
    showToast("Preview only - no command sent");
  } else if (currentPage == Page::Controls && y >= 335) {
    showToast("Power controls are not connected");
  } else if (currentPage == Page::Controls) {
    showToast("Control option is a visual preview");
  }
}

static void pollTouch() {
  static uint32_t lastPollMs = 0;
  const uint32_t now = millis();
  if (now - lastPollMs < 35) return;
  lastPollMs = now;

  uint16_t x = 0;
  uint16_t y = 0;
  const bool down = readTouch(x, y);
  if (down && !lastTouchDown) handleTouch(x, y);
  lastTouchDown = down;
}

static void drawText(int16_t x, int16_t y, const char *text, uint16_t color,
                     uint8_t size = 1) {
  gfx->setTextSize(size);
  gfx->setTextColor(color);
  gfx->setCursor(x, y);
  gfx->print(text);
}

static void drawCenteredText(int16_t centerX, int16_t y, const char *text,
                             uint16_t color, uint8_t size = 1) {
  const int16_t width = static_cast<int16_t>(strlen(text) * 6 * size);
  drawText(centerX - width / 2, y, text, color, size);
}

static void drawPanel(int16_t x, int16_t y, int16_t w, int16_t h,
                      uint16_t fill = C_PANEL) {
  gfx->fillRoundRect(x, y, w, h, 12, fill);
  gfx->drawRoundRect(x, y, w, h, 12, C_LINE);
}

static void drawTag(int16_t x, int16_t y, int16_t w, const char *label,
                    uint16_t color) {
  gfx->fillRoundRect(x, y, w, 22, 10, C_PANEL_ALT);
  gfx->drawRoundRect(x, y, w, 22, 10, C_LINE);
  gfx->fillCircle(x + 10, y + 11, 3, color);
  drawText(x + 18, y + 7, label, color, 1);
}

static bool usbLinkLive() {
  return telemetry.lastRxMs != 0 && millis() - telemetry.lastRxMs < TELEMETRY_TIMEOUT_MS;
}

static bool jointDataLive() {
  return usbLinkLive() && telemetry.jointCount > 0 &&
         (!telemetry.hasJointAge || telemetry.jointAgeMs <= TELEMETRY_TIMEOUT_MS);
}

static void drawTopBar() {
  gfx->fillRect(0, 0, SCREEN_W, 56, C_BG);
  gfx->drawFastHLine(0, 55, SCREEN_W, C_LINE);
  gfx->fillCircle(23, 24, 9, C_CYAN);
  gfx->fillCircle(23, 24, 4, C_BG);
  if (currentPage == Page::Overview) {
    drawText(40, 13, "ECHO", C_TEXT, 2);
    drawText(94, 20, "ACCESS PANEL", C_MUTED, 1);
  } else {
    drawText(40, 19, "< OVERVIEW", C_TEXT, 1);
    drawText(132, 20, "ACCESS PANEL", C_MUTED, 1);
  }

  const uint16_t active = C_TEXT;
  drawText(257, 21, "OVERVIEW", currentPage == Page::Overview ? active : C_MUTED);
  drawText(365, 21, "CONTROLS", currentPage == Page::Controls ? active : C_MUTED);
  drawText(465, 21, "SETTINGS", currentPage == Page::Settings ? active : C_MUTED);
  if (currentPage == Page::Overview) gfx->drawFastHLine(254, 43, 76, C_CYAN);
  if (currentPage == Page::Controls) gfx->drawFastHLine(361, 43, 78, C_CYAN);
  if (currentPage == Page::Settings) gfx->drawFastHLine(461, 43, 75, C_CYAN);

  const bool live = usbLinkLive();
  gfx->fillCircle(557, 19, 4, live ? C_GREEN : C_AMBER);
  drawText(544, 28, live ? "LIVE" : "WAIT", live ? C_GREEN : C_AMBER);
}

static void drawPageHeading(const char *title, const char *subtitle) {
  drawText(20, 70, title, C_TEXT, 2);
  drawText(21, 93, subtitle, C_MUTED, 1);
}

static uint16_t stateColor() {
  if (!usbLinkLive()) return C_AMBER;
  if (telemetry.hasJointAge && telemetry.jointAgeMs > 2000.0f) return C_AMBER;
  if (strstr(telemetry.robotState, "FAULT") || strstr(telemetry.robotState, "ERROR")) return C_RED;
  return C_GREEN;
}

static void drawPoseJoint(int16_t x, int16_t y, bool available) {
  gfx->fillCircle(x, y, 8, available ? C_CYAN : C_DIM);
  gfx->fillCircle(x, y, 3, C_BG);
}

static void drawThickSegment(float x1, float y1, float x2, float y2,
                             uint16_t color, uint8_t weight = 5) {
  const float dx = x2 - x1;
  const float dy = y2 - y1;
  const float length = sqrtf(dx * dx + dy * dy);
  if (length < 1.0f) return;
  const float px = -dy / length;
  const float py = dx / length;
  const int8_t half = static_cast<int8_t>(weight / 2);
  for (int8_t offset = -half; offset <= half; ++offset) {
    gfx->drawLine(static_cast<int16_t>(lroundf(x1 + px * offset)),
                  static_cast<int16_t>(lroundf(y1 + py * offset)),
                  static_cast<int16_t>(lroundf(x2 + px * offset)),
                  static_cast<int16_t>(lroundf(y2 + py * offset)), color);
  }
}

static void drawOneLeg(int16_t hipX, bool left, const char *hipName,
                       const char *kneeName, const char *ankleName) {
  bool hipFound = false;
  bool kneeFound = false;
  bool ankleFound = false;
  const float mirror = left ? -1.0f : 1.0f;
  const float hipDeg = jointDegrees(hipName, &hipFound);
  const float kneeDeg = jointDegrees(kneeName, &kneeFound);
  const float ankleDeg = jointDegrees(ankleName, &ankleFound);
  const float hipAngle = constrain(hipDeg, -48.0f, 48.0f) * 0.0174532925f * mirror;
  const float kneeAngle = constrain(kneeDeg, -75.0f, 75.0f) * 0.0174532925f * mirror;
  const float ankleAngle = constrain(ankleDeg, -50.0f, 50.0f) * 0.0174532925f * mirror;

  const float hipY = 246.0f;
  const float upper = 48.0f;
  const float lower = 49.0f;
  const float thighAngle = hipAngle;
  const float shinAngle = hipAngle - kneeAngle;
  const float kneeX = hipX + sinf(thighAngle) * upper;
  const float kneeY = hipY + cosf(thighAngle) * upper;
  const float ankleX = kneeX + sinf(shinAngle) * lower;
  const float ankleY = kneeY + cosf(shinAngle) * lower;
  const float footAngle = shinAngle + ankleAngle;
  const float footEndX = ankleX + cosf(footAngle) * 18.0f;
  const float footEndY = ankleY - sinf(footAngle) * 18.0f;
  const bool live = jointDataLive();

  drawThickSegment(hipX, hipY, kneeX, kneeY, live ? C_BLUE : C_DIM, 8);
  drawThickSegment(kneeX, kneeY, ankleX, ankleY, live ? C_CYAN : C_DIM, 7);
  drawThickSegment(ankleX, ankleY, footEndX, footEndY, live ? C_BLUE : C_DIM, 6);
  drawPoseJoint(hipX, hipY, hipFound && live);
  drawPoseJoint(static_cast<int16_t>(kneeX), static_cast<int16_t>(kneeY), kneeFound && live);
  drawPoseJoint(static_cast<int16_t>(ankleX), static_cast<int16_t>(ankleY), ankleFound && live);

  char value[20];
  snprintf(value, sizeof(value), "%+.0f", kneeFound ? kneeDeg : 0.0f);
  const int16_t labelX = left ? static_cast<int16_t>(kneeX - 44) : static_cast<int16_t>(kneeX + 13);
  drawText(labelX, static_cast<int16_t>(kneeY - 4), value,
           kneeFound && live ? C_TEXT : C_DIM, 1);
}

static void drawRobotPanel() {
  drawPanel(18, 108, 348, 265);
  drawText(32, 122, "POSTURE VIEW", C_TEXT);
  drawText(32, 140, "LIVE JOINT STATE", C_MUTED);
  gfx->drawFastHLine(32, 157, 320, C_LINE);

  // Quiet technical grid behind the robot silhouette.
  for (int16_t x = 56; x < 350; x += 30) gfx->drawFastVLine(x, 166, 186, 0x1128);
  for (int16_t y = 176; y < 356; y += 30) gfx->drawFastHLine(32, y, 320, 0x1128);
  gfx->drawFastHLine(52, 355, 280, C_LINE);

  // Head, torso, fixed arms: all segments are schematic, not a dynamics model.
  gfx->fillRoundRect(169, 166, 38, 34, 12, C_PANEL_ALT);
  gfx->drawRoundRect(169, 166, 38, 34, 12, C_BLUE);
  gfx->drawRoundRect(177, 176, 22, 8, 3, C_CYAN);
  drawThickSegment(188, 199, 188, 210, C_BLUE, 7);
  gfx->fillRoundRect(158, 207, 60, 40, 10, C_PANEL_ALT);
  gfx->drawRoundRect(158, 207, 60, 40, 10, C_BLUE);
  gfx->drawFastHLine(168, 220, 40, C_LINE);
  gfx->fillCircle(188, 231, 3, C_CYAN);
  drawThickSegment(160, 214, 139, 239, C_BLUE, 6);
  drawThickSegment(216, 214, 237, 239, C_BLUE, 6);
  drawPoseJoint(139, 239, usbLinkLive());
  drawPoseJoint(237, 239, usbLinkLive());

  drawThickSegment(169, 244, 207, 244, C_BLUE, 8);
  drawOneLeg(171, true, "hip_pitch_left", "knee_pitch_left", "ankle_pitch_left");
  drawOneLeg(205, false, "hip_pitch_right", "knee_pitch_right", "ankle_pitch_right");

  drawText(42, 343, "LEFT", C_MUTED);
  drawText(300, 343, "RIGHT", C_MUTED);
  if (!jointDataLive()) {
    gfx->fillRoundRect(113, 275, 150, 36, 9, C_BG);
    gfx->drawRoundRect(113, 275, 150, 36, 9, C_LINE);
    drawCenteredText(188, 289, "WAITING FOR JOINTS", C_AMBER);
  }
}

static void drawMetricRow(int16_t x, int16_t y, const char *label,
                          const char *value, uint16_t valueColor = C_TEXT) {
  drawText(x, y, label, C_MUTED);
  drawText(x + 92, y, value, valueColor);
}

static void drawSummaryPanel() {
  drawPanel(378, 108, 204, 265);
  drawText(393, 122, "SYSTEM STATUS", C_TEXT);
  drawTag(393, 143, 174, usbLinkLive() ? "USB TELEMETRY" : "USB DISCONNECTED",
          usbLinkLive() ? C_GREEN : C_AMBER);

  const uint16_t color = stateColor();
  char state[32];
  if (!usbLinkLive()) copyText(state, sizeof(state), "NO LINK");
  else if (telemetry.hasJointAge && telemetry.jointAgeMs > 2000.0f)
    copyText(state, sizeof(state), "JOINTS STALE");
  else copyText(state, sizeof(state), telemetry.robotState);
  drawMetricRow(393, 178, "ROBOT", state, color);

  drawText(393, 202, "ACTIVE MODEL", C_MUTED);
  char model[26];
  copyText(model, sizeof(model), telemetry.activeModel);
  drawText(393, 218, model, C_TEXT);

  drawText(393, 243, "BALANCE  R / P", C_MUTED);
  char balance[28];
  if (telemetry.hasImu) snprintf(balance, sizeof(balance), "%+.1f / %+.1f deg",
                                 telemetry.rollDeg, telemetry.pitchDeg);
  else copyText(balance, sizeof(balance), "NO IMU DATA");
  drawText(393, 259, balance, telemetry.hasImu ? C_TEXT : C_DIM);

  drawText(393, 285, "JETSON LOAD", C_MUTED);
  char cpu[18];
  if (telemetry.hasCpu) snprintf(cpu, sizeof(cpu), "%.0f%%", constrain(telemetry.cpuPct, 0.0f, 100.0f));
  else copyText(cpu, sizeof(cpu), "--");
  drawText(535, 285, cpu, C_TEXT);
  gfx->fillRoundRect(393, 301, 174, 7, 3, C_LINE);
  if (telemetry.hasCpu) {
    const int16_t width = static_cast<int16_t>(174.0f * constrain(telemetry.cpuPct, 0.0f, 100.0f) / 100.0f);
    gfx->fillRoundRect(393, 301, width > 4 ? width : 4, 7, 3, C_CYAN);
  }

  drawText(393, 324, "BATTERY", C_MUTED);
  char battery[18];
  if (telemetry.hasBattery) snprintf(battery, sizeof(battery), "%.0f%%", constrain(telemetry.batteryPct, 0.0f, 100.0f));
  else copyText(battery, sizeof(battery), "--");
  drawText(535, 324, battery, C_TEXT);
  gfx->fillRoundRect(393, 341, 174, 7, 3, C_LINE);
  if (telemetry.hasBattery) {
    const int16_t width = static_cast<int16_t>(174.0f * constrain(telemetry.batteryPct, 0.0f, 100.0f) / 100.0f);
    gfx->fillRoundRect(393, 341, width > 4 ? width : 4, 7, 3,
                       telemetry.batteryPct < 20 ? C_AMBER : C_GREEN);
  }
}

static void drawPreviewButton(int16_t x, int16_t y, int16_t w,
                              const char *title, uint16_t accent) {
  gfx->fillRoundRect(x, y, w, 48, 9, C_PANEL);
  gfx->drawRoundRect(x, y, w, 48, 9, C_LINE);
  gfx->fillCircle(x + 12, y + 15, 3, accent);
  drawText(x + 20, y + 10, title, C_TEXT);
  drawText(x + 20, y + 28, "PREVIEW ONLY", C_DIM);
}

static void drawOverview() {
  drawPageHeading("ROBOT OVERVIEW", "Echo telemetry and posture monitor");
  drawTag(457, 72, 125, usbLinkLive() ? "CONNECTED" : "WAITING",
          usbLinkLive() ? C_GREEN : C_AMBER);
  drawRobotPanel();
  drawSummaryPanel();

  drawPreviewButton(18, 389, 105, "SPEAKERS", C_BLUE);
  drawPreviewButton(130, 389, 92, "MICROPHONE", C_BLUE);
  drawPreviewButton(229, 389, 104, "SHUTDOWN", C_RED);
  drawPreviewButton(340, 389, 99, "POWER UP", C_GREEN);
  drawPreviewButton(446, 389, 136, "AI MODEL", C_AMBER);
}

static void drawToggleRow(int16_t x, int16_t y, int16_t w, const char *title,
                          const char *description, const char *state) {
  gfx->fillRoundRect(x, y, w, 58, 9, C_PANEL_ALT);
  gfx->drawRoundRect(x, y, w, 58, 9, C_LINE);
  gfx->fillCircle(x + 17, y + 19, 4, C_DIM);
  drawText(x + 30, y + 10, title, C_TEXT);
  drawText(x + 30, y + 30, description, C_MUTED);
  gfx->drawRoundRect(x + w - 58, y + 15, 45, 26, 12, C_DIM);
  drawText(x + w - 55, y + 23, state, C_DIM);
}

static void drawControls() {
  drawPageHeading("SYSTEM CONTROLS", "Actions are shown for layout review; this panel is read-only");
  drawPanel(18, 108, 348, 266);
  drawText(34, 123, "AUDIO", C_TEXT);
  drawText(34, 141, "Robot-side options", C_MUTED);

  char speakers[20];
  if (telemetry.hasSpeakers) copyText(speakers, sizeof(speakers), telemetry.speakersEnabled ? "ON" : "OFF");
  else copyText(speakers, sizeof(speakers), "--");
  char microphone[20];
  if (telemetry.hasMicrophone) copyText(microphone, sizeof(microphone), telemetry.microphoneEnabled ? "ON" : "OFF");
  else copyText(microphone, sizeof(microphone), "--");
  drawToggleRow(32, 170, 320, "Disable speakers", "State reported by Jetson", speakers);
  drawToggleRow(32, 239, 320, "Disable microphone", "State reported by Jetson", microphone);

  drawPanel(378, 108, 204, 266);
  drawText(394, 123, "AI MODEL", C_TEXT);
  drawText(394, 141, "Current selection", C_MUTED);
  drawText(394, 169, telemetry.activeModel, C_TEXT);
  if (telemetry.hasAiEnabled)
    drawTag(394, 191, 152, telemetry.aiEnabled ? "AI ENABLED" : "AI DISABLED",
            telemetry.aiEnabled ? C_GREEN : C_AMBER);
  else
    drawTag(394, 191, 152, "STATE NOT REPORTED", C_DIM);
  drawText(394, 228, "MODEL OPTIONS", C_MUTED);
  gfx->fillRoundRect(394, 248, 170, 35, 8, C_PANEL_ALT);
  gfx->drawRoundRect(394, 248, 170, 35, 8, C_LINE);
  drawText(406, 260, "Llama / Qwen / other", C_DIM);
  drawText(394, 294, "Selection is not connected", C_DIM);
  drawText(394, 310, "to a ROS command yet.", C_DIM);

  drawPanel(18, 389, 564, 48);
  gfx->fillRoundRect(31, 399, 245, 28, 7, C_PANEL_ALT);
  gfx->drawRoundRect(31, 399, 245, 28, 7, C_LINE);
  drawText(42, 409, "SHUTDOWN", C_DIM);
  gfx->fillRoundRect(287, 399, 245, 28, 7, C_PANEL_ALT);
  gfx->drawRoundRect(287, 399, 245, 28, 7, C_LINE);
  drawText(299, 409, "POWER UP", C_DIM);
  drawText(540, 409, "UI", C_AMBER);
}

static void drawSettingRow(int16_t x, int16_t y, int16_t w,
                           const char *label, const char *value,
                           const char *note) {
  gfx->drawFastHLine(x, y + 54, w, C_LINE);
  drawText(x, y + 4, label, C_TEXT);
  drawText(x, y + 22, note, C_MUTED);
  drawText(x + w - static_cast<int16_t>(strlen(value) * 6) - 2,
           y + 11, value, C_CYAN);
}

static void drawSettings() {
  drawPageHeading("DEVICE SETTINGS", "Local display preferences and connection details");
  drawPanel(18, 108, 348, 266);
  drawText(34, 123, "DISPLAY", C_TEXT);
  drawSettingRow(34, 151, 316, "Brightness", "82%", "Panel command preview");
  drawSettingRow(34, 207, 316, "Orientation", "LANDSCAPE", "600 x 450 pixels");
  drawSettingRow(34, 263, 316, "Refresh", "4 Hz", "Incoming telemetry rate");
  drawSettingRow(34, 319, 316, "Theme", "DARK", "High-contrast AMOLED palette");

  drawPanel(378, 108, 204, 266);
  drawText(394, 123, "CONNECTION", C_TEXT);
  drawTag(394, 148, 170, usbLinkLive() ? "USB ACTIVE" : "USB WAITING",
          usbLinkLive() ? C_GREEN : C_AMBER);
  drawMetricRow(394, 184, "PROTOCOL", "JSON / USB");
  drawMetricRow(394, 209, "SOURCE", "JETSON ROS 2");
  drawMetricRow(394, 234, "BOARD", "ESP32-S3");
  char revision[12];
  snprintf(revision, sizeof(revision), "REV %d", ECHO_BOARD_REV);
  drawMetricRow(394, 259, "HARDWARE", revision);
  char frames[20];
  snprintf(frames, sizeof(frames), "%lu", static_cast<unsigned long>(telemetry.frameCount));
  drawMetricRow(394, 284, "FRAMES", frames);
  char age[20];
  if (telemetry.lastRxMs != 0)
    snprintf(age, sizeof(age), "%lu ms", static_cast<unsigned long>(millis() - telemetry.lastRxMs));
  else copyText(age, sizeof(age), "--");
  drawMetricRow(394, 309, "LAST RX", age);
  drawText(394, 344, boardResetReady ? "RESET IO: READY" : "RESET IO: FAILED",
           boardResetReady ? C_GREEN : C_AMBER);
}

static void drawToast() {
  if (millis() >= toastUntilMs || toastText[0] == '\0') return;
  gfx->fillRoundRect(170, 355, 260, 26, 8, C_PANEL_ALT);
  gfx->drawRoundRect(170, 355, 260, 26, 8, C_LINE);
  drawCenteredText(300, 364, toastText, C_AMBER);
}

static void renderScreen() {
  if (!displayReady) return;
  gfx->fillScreen(C_BG);
  drawTopBar();
  switch (currentPage) {
    case Page::Overview: drawOverview(); break;
    case Page::Controls: drawControls(); break;
    case Page::Settings: drawSettings(); break;
  }
  drawToast();
  gfx->flush();
  lastRenderMs = millis();
  screenDirty = false;
}

void setup() {
  Serial.begin(SERIAL_BAUD);
  delay(100);

  boardResetReady = initBoardResets();
  qspi = new Arduino_ESP32QSPI(PIN_LCD_CS, PIN_LCD_CLK, PIN_LCD_D0,
                               PIN_LCD_D1, PIN_LCD_D2, PIN_LCD_D3);
  // RM690B0 uses a 450x600 native surface with a 16-pixel column offset.
  panel = new Arduino_RM690B0(qspi, GFX_NOT_DEFINED, 1, 450, 600,
                              16, 0, 16, 0);
  gfx = new Arduino_Canvas(SCREEN_W, SCREEN_H, panel);
  displayReady = gfx->begin();
  if (displayReady) {
    gfx->setTextWrap(false);
    panel->setBrightness(215);
    screenDirty = true;
    renderScreen();
  }
}

void loop() {
  pollUsbTelemetry();
  pollTouch();

  const uint32_t now = millis();
  const bool toastExpired = toastText[0] != '\0' && now >= toastUntilMs;
  if (toastExpired) toastText[0] = '\0';
  if (now - lastRenderMs >= RENDER_PERIOD_MS) screenDirty = true;
  if (screenDirty) renderScreen();
  delay(2);
}

