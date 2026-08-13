#!/usr/bin/env python3

"""
Very simple IsaacLab -> Orbbec IMU -> RobStride locomotion bridge.

Hardware:
    Jetson
      |
      +-- USB --> Orbbec Gemini 336
      |             +-- accelerometer
      |             +-- gyroscope
      |
      +-- USB/CAN --> RobStride motors

Software:
    Orbbec SDK v2 Python
    PyTorch / TorchScript
    sirwart/robstride
    python-can

IMPORTANT:
    IsaacLab policy's observation layout MUST match build_observation() identically

Start with DRY_RUN = True.
"""

from __future__ import annotations

import math
import time
import signal
import threading
from dataclasses import dataclass

import numpy as np
import torch
import can
import robstride

from pyorbbecsdk import (
    Config,
    Context,
    Pipeline,
    OBError,
    OBFrameAggregateOutputMode,
    OBSensorType,
)


# ============================================================
# USER CONFIGURATION
# ============================================================

POLICY_PATH = "models/7.23.26.pt"

CAN_INTERFACE = "socketcan"
CAN_CHANNEL = "can0"
CAN_BITRATE = 1_000_000

# Keep this TRUE until the complete observation/action path
# has been verified without motors moving.
DRY_RUN = True

CONTROL_HZ = 50.0

# Command sent to the policy.
# TODO Make sure this matches whatever velocity range my policy was trained for.
FORWARD_VELOCITY = 0.30       # m/s
SIDEWAYS_VELOCITY = 0.0
YAW_VELOCITY = 0.0

ACTION_SCALE = 0.25

# Maximum per-cycle target change.
# This prevents a bad policy / bad startup observation from
# instantly commanding a huge jump.
MAX_TARGET_STEP = 0.08       # rad per control cycle


# ------------------------------------------------------------
# ROBSTRIDE MOTOR CONFIGURATION
# ------------------------------------------------------------
#
MOTOR_IDS = [
    1,  # left hip yaw
    2,  # right hip yaw
    3,  # left hip roll
    4,  # right hip roll
    5,  # left hip pitch
    6,  # left knee pitch
    7,  # right knee pitch
    8,  # right hip pitch
    9,  # left ankle
    10, # right ankle
]

NUM_JOINTS = len(MOTOR_IDS)

# Mechanical zero position of each actuator.
#
JOINT_ZERO = np.array([
    0.0,
    0.0,
    0.0,
    0.0,
    0.0,
    0.0,
    0.0,
    0.0,
    0.0,
    0.0,
], dtype=np.float32)

# +1 or -1 depending on motor orientation.
#
JOINT_DIRECTION = np.array([
    1.0,
    -1.0,
    1.0,
    -1.0,
    1.0,
    1.0,
    -1.0,
    -1.0,
    1.0,
    -1.0,
], dtype=np.float32)


# ------------------------------------------------------------
# IMU CONFIGURATION
# ------------------------------------------------------------

# Rotation from the Orbbec IMU coordinate system into
# the IsaacLab robot base coordinate system.
IMU_TO_BASE = np.eye(3, dtype=np.float32)

# Used if IMU is mounted upside down
ACCEL_SIGN = -1.0


# ============================================================
# GLOBAL SHUTDOWN
# ============================================================

shutdown_event = threading.Event()

def shutdown_handler(signum, frame):
    print("\nShutdown requested.")
    shutdown_event.set()


signal.signal(signal.SIGINT, shutdown_handler)
signal.signal(signal.SIGTERM, shutdown_handler)


# ============================================================
# IMU STATE
# ============================================================

@dataclass
class IMUState:
    accel: np.ndarray
    gyro: np.ndarray
    projected_gravity: np.ndarray


class OrbbecIMU:
    """
    Continuously reads Orbbec accelerometer + gyroscope.
    """

    def __init__(self):
        self.lock = threading.Lock()

        self.accel = np.zeros(3, dtype=np.float32)
        self.gyro = np.zeros(3, dtype=np.float32)

        # Initially assume upright.
        self.projected_gravity = np.array(
            [0.0, 0.0, -1.0],
            dtype=np.float32,
        )

        self.pipeline = None
        self.thread = None

    def start(self):
        ctx = Context()

        devices = ctx.query_devices()

        if devices.get_count() == 0:
            raise RuntimeError("No Orbbec device found.")

        self.pipeline = Pipeline()

        device = self.pipeline.get_device()

        # Confirm the camera actually exposes the sensors.
        device.get_sensor(OBSensorType.ACCEL_SENSOR)
        device.get_sensor(OBSensorType.GYRO_SENSOR)

        config = Config()

        config.enable_accel_stream()
        config.enable_gyro_stream()

        # Require both streams when possible.
        config.set_frame_aggregate_output_mode(
            OBFrameAggregateOutputMode.FULL_FRAME_REQUIRE
        )

        self.pipeline.start(config)

        self.thread = threading.Thread(
            target=self._run,
            daemon=True,
        )
        self.thread.start()

        print("Orbbec IMU started.")

    def _run(self):
        while not shutdown_event.is_set():

            try:
                frames = self.pipeline.wait_for_frames(100)

                if frames is None:
                    continue

                accel_frame = frames.get_accel_frame()
                gyro_frame = frames.get_gyro_frame()

                if accel_frame is not None:
                    value = accel_frame.get_value()

                    accel = np.array(
                        [value.x, value.y, value.z],
                        dtype=np.float32,
                    )

                    # Transform sensor axes into robot base axes.
                    accel = IMU_TO_BASE @ accel

                    # Then we need to convert the acceleration from
                    # Orbbec into the gravity direction expected
                    # by IsaacLab
                    #
                    # At rest this should approximately become:
                    #
                    #     [0, 0, -1]
                    #
                    norm = np.linalg.norm(accel)

                    if norm > 1e-5:
                        projected_gravity = (
                            ACCEL_SIGN * accel / norm
                        )
                    else:
                        projected_gravity = self.projected_gravity

                    with self.lock:
                        self.accel = accel
                        self.projected_gravity = projected_gravity

                if gyro_frame is not None:
                    value = gyro_frame.get_value()

                    gyro = np.array(
                        [value.x, value.y, value.z],
                        dtype=np.float32,
                    )

                    gyro = IMU_TO_BASE @ gyro

                    with self.lock:
                        self.gyro = gyro

            except Exception as exc:
                print(f"[IMU] {exc}")
                time.sleep(0.01)

    def get_state(self) -> IMUState:

        with self.lock:
            return IMUState(
                accel=self.accel.copy(),
                gyro=self.gyro.copy(),
                projected_gravity=self.projected_gravity.copy(),
            )

    def stop(self):

        if self.pipeline is not None:
            try:
                self.pipeline.stop()
            except Exception:
                pass

        if self.thread is not None:
            self.thread.join(timeout=1.0)


# ============================================================
# ROBSTRIDE
# ============================================================

class Echo:

    def __init__(self):
        self.bus = None
        self.client = None

        self.current_position = np.zeros(
            NUM_JOINTS,
            dtype=np.float32,
        )

    def connect(self):

        self.bus = can.Bus(
            interface=CAN_INTERFACE,
            channel=CAN_CHANNEL,
            bitrate=CAN_BITRATE,
        )

        self.client = robstride.Client(self.bus)

        print("Connected to CAN.")

    def enable(self):

        for motor_id in MOTOR_IDS:

            if DRY_RUN:
                print(f"[DRY RUN] enable motor {motor_id}")
                continue

            # Select internal position mode.
            self.client.write_param(
                motor_id,
                "run_mode",
                robstride.RunMode.Position,
            )

            self.client.enable(motor_id)

            print(f"Enabled motor {motor_id}")

    def read_initial_positions(self):

        positions = []

        for motor_id in MOTOR_IDS:

            if DRY_RUN:
                positions.append(0.0)
                continue

            # The sirwart SDK calls this parameter "mechpos".
            pos = self.client.read_param(
                motor_id,
                "mechpos",
            )

            positions.append(float(pos))

        positions = np.asarray(
            positions,
            dtype=np.float32,
        )

        self.current_position[:] = positions

        print("Initial motor positions:")
        print(self.current_position)

        return self.current_position.copy()

    def send_joint_targets(self, targets):

        targets = np.asarray(
            targets,
            dtype=np.float32,
        )

        for i, motor_id in enumerate(MOTOR_IDS):

            target = float(targets[i])

            # Convert IsaacLab joint coordinate to physical
            # motor coordinate.
            motor_target = (
                JOINT_ZERO[i]
                + JOINT_DIRECTION[i] * target
            )

            if DRY_RUN:
                print(
                    f"[DRY RUN] motor={motor_id:3d} "
                    f"target={motor_target:+.3f}"
                )
                continue

            try:
                # write_param returns motor feedback.
                feedback = self.client.write_param(
                    motor_id,
                    "loc_ref",
                    motor_target,
                )

                self.current_position[i] = feedback.angle

            except Exception as exc:
                print(
                    f"[CAN] Motor {motor_id} failed: {exc}"
                )

    def disable(self):

        if self.client is None:
            return

        for motor_id in MOTOR_IDS:

            try:

                if DRY_RUN:
                    print(f"[DRY RUN] disable motor {motor_id}")
                    continue

                self.client.disable(motor_id)

            except Exception as exc:
                print(
                    f"Error disabling motor "
                    f"{motor_id}: {exc}"
                )

        if self.bus is not None:

            try:
                self.bus.shutdown()
            except Exception:
                pass


# ============================================================
# POLICY
# ============================================================

class LocomotionPolicy:

    def __init__(self, policy_path):

        print(f"Loading policy: {policy_path}")

        self.policy = torch.jit.load(
            policy_path,
            map_location="cpu",
        )

        self.policy.eval()

        # Jetson can use CUDA if PyTorch was installed with
        # the proper JetPack CUDA build.
        self.device = torch.device(
            "cuda" if torch.cuda.is_available()
            else "cpu"
        )

        self.policy = self.policy.to(self.device)

        print(f"Policy device: {self.device}")

        self.last_action = np.zeros(
            NUM_JOINTS,
            dtype=np.float32,
        )

    def build_observation(
        self,
        imu: IMUState,
        joint_pos: np.ndarray,
        joint_vel: np.ndarray,
    ) -> np.ndarray:

        """
        This builds the real world observations into the same layout as the policy expects.
        The layout must match the policy exactly.
        """

        # ----------------------------------------------------
        # Normalize / center joint position.
        # ----------------------------------------------------

        joint_pos_rel = (
            JOINT_DIRECTION
            * (joint_pos - JOINT_ZERO)
        )

        # ----------------------------------------------------
        # Forward velocity command.
        # ----------------------------------------------------

        command = np.array(
            [
                FORWARD_VELOCITY,
                SIDEWAYS_VELOCITY,
                YAW_VELOCITY,
            ],
            dtype=np.float32,
        )

        # ----------------------------------------------------
        # Observations
        # ----------------------------------------------------

        obs = np.concatenate([
            imu.gyro,
            imu.projected_gravity,
            command,
            joint_pos_rel,
            joint_vel,
            self.last_action,
        ])

        return obs.astype(np.float32)

    def infer(self, observation):

        obs_tensor = torch.from_numpy(
            observation
        ).unsqueeze(0).to(self.device)

        with torch.inference_mode():

            action = self.policy(obs_tensor)

        # TODO find whether it exported as a tuple or a tensor
        if isinstance(action, tuple):
            action = action[0]

        action = action.squeeze(0).detach().cpu().numpy()

        action = np.asarray(
            action,
            dtype=np.float32,
        )

        self.last_action = action.copy()

        return action


# ============================================================
# JOINT VELOCITY ESTIMATION
# ============================================================

class JointVelocityEstimator:

    def __init__(self):
        self.previous_position = None
        self.previous_time = None

    def update(self, position):

        now = time.monotonic()

        if self.previous_position is None:

            self.previous_position = position.copy()
            self.previous_time = now

            return np.zeros_like(position)

        dt = max(
            now - self.previous_time,
            1e-4,
        )

        velocity = (
            position - self.previous_position
        ) / dt

        self.previous_position = position.copy()
        self.previous_time = now

        return velocity.astype(np.float32)


# ============================================================
# MAIN CONTROL LOOP
# ============================================================

def main():

    print("==========================================")
    print(" Echo locomotion controller")
    print("==========================================")

    # --------------------------------------------------------
    # Start IMU
    # --------------------------------------------------------

    imu = OrbbecIMU()
    imu.start()

    # --------------------------------------------------------
    # Start motors
    # --------------------------------------------------------

    robot = Echo()
    robot.connect()
    robot.enable()

    initial_positions = robot.read_initial_positions()

    # --------------------------------------------------------
    # Load policy
    # --------------------------------------------------------

    policy = LocomotionPolicy(
        POLICY_PATH
    )

    velocity_estimator = JointVelocityEstimator()

    # --------------------------------------------------------
    # Start control loop
    # --------------------------------------------------------

    period = 1.0 / CONTROL_HZ

    print()
    print("Controller running.")
    print(f"Control frequency: {CONTROL_HZ:.1f} Hz")
    print(
        f"Forward command: "
        f"{FORWARD_VELOCITY:.2f} m/s"
    )

    if DRY_RUN:
        print()
        print("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
        print(" DRY_RUN = TRUE")
        print(" Motors WILL NOT move.")
        print("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
        print()

    next_time = time.monotonic()

    try:

        while not shutdown_event.is_set():

            loop_start = time.monotonic()

            # ----------------------------------------------
            # IMU
            # ----------------------------------------------

            imu_state = imu.get_state()

            # ----------------------------------------------
            # Motor state
            # ----------------------------------------------

            #
            # TODO add a dedicated asynchronous CAN
            # feedback reader.
            #
            joint_pos = robot.current_position.copy()

            joint_vel = velocity_estimator.update(
                joint_pos
            )

            # ----------------------------------------------
            # Policy observation
            # ----------------------------------------------

            observation = policy.build_observation(
                imu_state,
                joint_pos,
                joint_vel,
            )

            # ----------------------------------------------
            # Policy inference
            # ----------------------------------------------

            action = policy.infer(
                observation
            )

            if action.shape[0] != NUM_JOINTS:
                raise RuntimeError(
                    f"Policy returned "
                    f"{action.shape[0]} actions, "
                    f"but robot has {NUM_JOINTS} joints."
                )

            # ----------------------------------------------
            # IsaacLab action -> joint target
            # ----------------------------------------------

            target = (
                JOINT_ZERO
                + ACTION_SCALE * action
            )

            # ----------------------------------------------
            # Safety slew-rate limiter
            # ----------------------------------------------

            previous_target = robot.current_position.copy()

            delta = (
                target
                - previous_target
            )

            delta = np.clip(
                delta,
                -MAX_TARGET_STEP,
                MAX_TARGET_STEP,
            )

            target = (
                previous_target
                + delta
            )

            # ----------------------------------------------
            # Send to RobStride
            # ----------------------------------------------

            robot.send_joint_targets(
                target
            )

            # ----------------------------------------------
            # Debug
            # ----------------------------------------------

            if int(time.monotonic() * 2) % 2 == 0:

                print(
                    f"\r"
                    f"acc="
                    f"{np.linalg.norm(imu_state.accel):.2f} "
                    f"gravity="
                    f"{imu_state.projected_gravity} "
                    f"action="
                    f"{action}",
                    end="",
                )

            # ----------------------------------------------
            # Control timing
            # ----------------------------------------------

            next_time += period

            sleep_time = (
                next_time
                - time.monotonic()
            )

            if sleep_time > 0:
                time.sleep(sleep_time)
            else:
                # Controller is running slower than target rate.
                next_time = time.monotonic()

    except KeyboardInterrupt:
        pass

    finally:

        print("\nStopping...")

        robot.disable()
        imu.stop()

        print("Stopped safely.")


# ============================================================
# ENTRY POINT
# ============================================================

if __name__ == "__main__":
    main()