#!/usr/bin/env python3
"""One-way ROS 2 telemetry publisher for the Echo rear access panel."""

import json
import math
import time
from typing import Optional

import rclpy
import serial
from diagnostic_msgs.msg import DiagnosticArray
from rclpy.node import Node
from sensor_msgs.msg import BatteryState, Imu, JointState
from std_msgs.msg import Bool, String


def finite(value: float) -> Optional[float]:
    return float(value) if math.isfinite(value) else None


def imu_roll_pitch(message: Imu):
    q = message.orientation
    norm_sq = q.x * q.x + q.y * q.y + q.z * q.z + q.w * q.w
    if norm_sq < 1e-8 or not math.isfinite(norm_sq):
        return None, None
    inv_norm = 1.0 / math.sqrt(norm_sq)
    x, y, z, w = q.x * inv_norm, q.y * inv_norm, q.z * inv_norm, q.w * inv_norm
    roll = math.atan2(2.0 * (w * x + y * z), 1.0 - 2.0 * (x * x + y * y))
    pitch_term = max(-1.0, min(1.0, 2.0 * (w * y - z * x)))
    pitch = math.asin(pitch_term)
    return math.degrees(roll), math.degrees(pitch)


class EchoPanelBridge(Node):
    """Serializes a compact, read-only snapshot at 4 Hz."""

    def __init__(self):
        super().__init__("echo_panel_bridge")
        self.declare_parameter("serial_port", "/dev/ttyACM0")
        self.declare_parameter("baud_rate", 115200)
        self.declare_parameter("publish_hz", 4.0)
        self.declare_parameter("joint_states_topic", "/joint_states")
        self.declare_parameter("robot_state_topic", "")
        self.declare_parameter("active_model_topic", "")
        self.declare_parameter("ai_enabled_topic", "")
        self.declare_parameter("battery_topic", "")
        self.declare_parameter("imu_topic", "")
        self.declare_parameter("diagnostics_topic", "/diagnostics")
        self.declare_parameter("speakers_enabled_topic", "")
        self.declare_parameter("microphone_enabled_topic", "")

        self._port = str(self.get_parameter("serial_port").value)
        self._baud = int(self.get_parameter("baud_rate").value)
        publish_hz = max(1.0, min(10.0, float(self.get_parameter("publish_hz").value)))
        self._serial = None
        self._last_connect_attempt = 0.0
        self._last_error_log = 0.0

        self._joint_names = []
        self._joint_positions_deg = []
        self._last_joint_time = None
        self._robot_state = "UNKNOWN"
        self._active_model = "NOT REPORTED"
        self._ai_enabled = None
        self._battery_pct = None
        self._roll_deg = None
        self._pitch_deg = None
        self._cpu_pct = None
        self._speakers_enabled = None
        self._microphone_enabled = None

        self.create_subscription(
            JointState,
            str(self.get_parameter("joint_states_topic").value),
            self._on_joint_state,
            10,
        )
        self._subscribe_if_configured("robot_state_topic", String, self._on_state)
        self._subscribe_if_configured("active_model_topic", String, self._on_model)
        self._subscribe_if_configured("ai_enabled_topic", Bool, self._on_ai_enabled)
        self._subscribe_if_configured("battery_topic", BatteryState, self._on_battery)
        self._subscribe_if_configured("imu_topic", Imu, self._on_imu)
        self._subscribe_if_configured(
            "speakers_enabled_topic", Bool, self._on_speakers_enabled
        )
        self._subscribe_if_configured(
            "microphone_enabled_topic", Bool, self._on_microphone_enabled
        )
        self._subscribe_if_configured(
            "diagnostics_topic", DiagnosticArray, self._on_diagnostics
        )

        self.create_timer(1.0 / publish_hz, self._publish_snapshot)
        self.get_logger().info(
            f"Read-only panel bridge ready; waiting for ESP32 on {self._port}"
        )

    def _subscribe_if_configured(self, parameter, message_type, callback):
        topic = str(self.get_parameter(parameter).value).strip()
        if topic:
            self.create_subscription(message_type, topic, callback, 10)

    def _on_joint_state(self, message: JointState):
        pairs = []
        for name, position in zip(message.name, message.position):
            if not math.isfinite(position):
                continue
            pairs.append((name, round(math.degrees(position), 1)))
        self._joint_names = [pair[0] for pair in pairs[:12]]
        self._joint_positions_deg = [pair[1] for pair in pairs[:12]]
        self._last_joint_time = time.monotonic()

    def _on_state(self, message: String):
        self._robot_state = message.data[:27] or "UNKNOWN"

    def _on_model(self, message: String):
        self._active_model = message.data[:39] or "NOT REPORTED"

    def _on_ai_enabled(self, message: Bool):
        self._ai_enabled = bool(message.data)

    def _on_battery(self, message: BatteryState):
        value = finite(message.percentage)
        self._battery_pct = None if value is None or value < 0 else max(0.0, min(100.0, value * 100.0))

    def _on_imu(self, message: Imu):
        self._roll_deg, self._pitch_deg = imu_roll_pitch(message)

    def _on_speakers_enabled(self, message: Bool):
        self._speakers_enabled = bool(message.data)

    def _on_microphone_enabled(self, message: Bool):
        self._microphone_enabled = bool(message.data)

    def _on_diagnostics(self, message: DiagnosticArray):
        for status in message.status:
            for item in status.values:
                key = item.key.lower().replace("_", " ")
                if "cpu" not in key or "load" not in key and "usage" not in key:
                    continue
                value = item.value.strip().rstrip("%")
                try:
                    parsed = float(value)
                except ValueError:
                    continue
                if math.isfinite(parsed):
                    self._cpu_pct = max(0.0, min(100.0, parsed))
                    return

    def _snapshot(self):
        now = time.monotonic()
        joint_age_ms = None
        if self._last_joint_time is not None:
            joint_age_ms = int(max(0.0, now - self._last_joint_time) * 1000.0)
        state = self._robot_state
        if not self._joint_names:
            state = "NO JOINT DATA"
        elif joint_age_ms is not None and joint_age_ms > 2000:
            state = "JOINTS STALE"

        return {
            "type": "telemetry",
            "stamp_s": round(time.time(), 3),
            "robot_state": state,
            "active_model": self._active_model,
            "ai_enabled": self._ai_enabled,
            "battery_pct": self._battery_pct,
            "cpu_pct": self._cpu_pct,
            "imu_roll_deg": self._roll_deg,
            "imu_pitch_deg": self._pitch_deg,
            "speakers_enabled": self._speakers_enabled,
            "microphone_enabled": self._microphone_enabled,
            "joint_age_ms": joint_age_ms,
            "joint_names": self._joint_names,
            "joint_positions_deg": self._joint_positions_deg,
        }

    def _try_connect(self):
        now = time.monotonic()
        if self._serial is not None and self._serial.is_open:
            return True
        if now - self._last_connect_attempt < 2.0:
            return False
        self._last_connect_attempt = now
        try:
            self._serial = serial.Serial(
                self._port,
                self._baud,
                timeout=0,
                write_timeout=0.25,
                dsrdtr=False,
                rtscts=False,
            )
            self.get_logger().info(f"USB panel connected on {self._port}")
            return True
        except (serial.SerialException, OSError) as error:
            self._serial = None
            if now - self._last_error_log >= 10.0:
                self.get_logger().warning(f"Panel USB is not available yet: {error}")
                self._last_error_log = now
            return False

    def _publish_snapshot(self):
        if not self._try_connect():
            return
        try:
            line = json.dumps(self._snapshot(), separators=(",", ":"), allow_nan=False)
            self._serial.write((line + "\n").encode("utf-8"))
        except (serial.SerialException, OSError, ValueError) as error:
            self.get_logger().warning(f"Panel USB write failed; reconnecting: {error}")
            try:
                self._serial.close()
            except Exception:
                pass
            self._serial = None

    def destroy_node(self):
        if self._serial is not None:
            try:
                self._serial.close()
            except Exception:
                pass
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = EchoPanelBridge()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()

