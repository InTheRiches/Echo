# Echo rear access panel

Firmware and a small ROS 2 serial bridge for the Waveshare ESP32-S3-Touch-AMOLED-2.41. The screen shows a live, simplified biped posture from `sensor_msgs/JointState`, system telemetry when available, a settings page, and a controls preview.

The speaker, microphone, AI model, shutdown, and power-up controls are intentionally display-only. The ESP32 never sends a command to ROS or the robot. Page navigation and preview notices are local UI behavior.

## Hardware and board revision

The board has a 450x600 portrait-native RM690B0 AMOLED, FT6336 touch controller, 16 MB flash, and 8 MB PSRAM. This project rotates the screen to 600x450 landscape. Waveshare documents V1 and V2 as electrically different; the current build selects Rev1 in `platformio.ini`.

- Uncased boards marked `Rev2.0` and cased boards marked `V2` use Rev2. Set `-DECHO_BOARD_REV=2` in `platformio.ini`.
- Boards without those V2 markings use Rev1. Set `-DECHO_BOARD_REV=1`. The current `platformio.ini` selects Rev1.
- The reset pins and TCA9554 use differ by revision. Do not flash until the PCB revision is identified.

This project uses Arduino_GFX's RM690B0 driver and an RGB565 canvas in PSRAM. The display pin map, reset handling, orientation, and 16-pixel column offset are isolated near the top of `src/main.cpp` for adjustment if a board revision needs different panel offsets.

## Build and flash

Install PlatformIO, then from this directory:

```sh
pio run
pio run --target upload
```

Use the board's native USB connection and enable USB CDC on boot (already set in `platformio.ini`). The USB serial connection is reserved for newline-delimited telemetry; firmware does not print logs on that channel.

## Jetson ROS 2 bridge

Copy `jetson_ros/echo_panel_bridge` into a ROS 2 workspace's `src/` directory, install `python3-serial`, and build it with `colcon`:

```sh
sudo apt install python3-serial
cd ~/echo_ws
colcon build --packages-select echo_panel_bridge
source install/setup.bash
ros2 run echo_panel_bridge panel_bridge --ros-args -p serial_port:=/dev/ttyACM0
```

The default required ROS input is `/joint_states` (`sensor_msgs/JointState`, positions in radians). The bridge converts joint positions to degrees and publishes a compact snapshot at 4 Hz. It matches Echo's current names, including `hip_pitch_left/right`, `knee_pitch_left/right`, and `ankle_pitch_left/right`.

Optional topics can be supplied at launch. Each optional topic must use the indicated standard message type:

```sh
ros2 run echo_panel_bridge panel_bridge --ros-args \
  -p serial_port:=/dev/ttyACM0 \
  -p robot_state_topic:=/echo/state \
  -p active_model_topic:=/echo/active_model \
  -p ai_enabled_topic:=/echo/ai_enabled \
  -p battery_topic:=/power/battery_state \
  -p imu_topic:=/imu/data \
  -p speakers_enabled_topic:=/echo/speakers_enabled \
  -p microphone_enabled_topic:=/echo/microphone_enabled
```

`robot_state_topic` and `active_model_topic` use `std_msgs/String`; `ai_enabled_topic` and the audio state topics use `std_msgs/Bool`; `battery_topic` uses `sensor_msgs/BatteryState`; `imu_topic` uses `sensor_msgs/Imu`. CPU percentage is read from `/diagnostics` when a diagnostic value key contains CPU plus `load` or `usage`. Empty optional topic names are ignored. You can omit the optional topics until Echo publishes them.

For Jetson USB permissions, add the user that runs ROS to the system's serial-device group (commonly `dialout`), reconnect the board, and use its stable `/dev/serial/by-id/...` path if available.

## USB telemetry format

The bridge writes one JSON object followed by `\n` per update. A representative line is:

```json
{"type":"telemetry","robot_state":"READY","active_model":"NOT REPORTED","ai_enabled":null,"battery_pct":null,"cpu_pct":null,"imu_roll_deg":null,"imu_pitch_deg":null,"speakers_enabled":null,"microphone_enabled":null,"joint_age_ms":12,"joint_names":["hip_pitch_left","knee_pitch_left"],"joint_positions_deg":[1.2,-3.4]}
```

The physical link is USB CDC over the ESP32-S3 native USB pins. Data travels Jetson to ESP32 only; incoming serial is parsed as telemetry, and there is no command or acknowledgement path.

## UI

- **Overview** shows the articulated two-dimensional posture, joint values, USB freshness, robot state, model, IMU, battery, and Jetson CPU when available.
- **Controls** shows audio, AI-model, shutdown, and power-up options with a preview-only treatment.
- **Settings** shows display and connection information.
- Touch switches pages. On Controls or Settings, the top-left `OVERVIEW` area is also a large back target. Touching preview controls only displays a notice.
- The palette is black and grayscale. Text uses Arduino_GFX's bitmap font with integer scaling for sharp pixel edges; this renderer does not provide true anti-aliased text.

The posture graphic is a lightweight joint-angle visualization, not a camera stream or a physics simulation. The Jetson ROS node supplies the joint data; the ESP32 draws the live pose locally.

## Hardware notes

- Rev2 uses GPIO 47/48 for I2C, GPIO 9-14 for display QSPI, TCA9554 address `0x20` for display/touch reset, and FT6336 address `0x38`.
- Rev1 uses the same I2C and QSPI signal pins but routes the display reset to GPIO 21 and touch reset to GPIO 3.
- If the image is shifted or touch is mirrored on a particular board, tune the RM690B0 offsets or the portrait-to-landscape conversion in `src/main.cpp`.
- The firmware and Jetson bridge are source-complete, but need a hardware flash and a check against the actual board revision and Jetson device path before they can be considered commissioned.
