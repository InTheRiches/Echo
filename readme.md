Echo is my ongoing project inspired by Disney's BDX robots. The goal is to build a compact, expressive, and capable walking robot using NVIDIA edge AI hardware, inexpensive (relatively) actuators, and onboard sensing.

This project will combine reinforcement learning through IsaacSim/IsaacLab, QDD actuators, and my own mechanical design to hopefully develop a walking bipedal robot. 

Echo is designed to operate independently, running off its onboard sensor suite and edge computing. 

---

## Objectives

* Stable bipedal walking
* Navigate uneven terrain and stairs
* Onboard AI
* Visual perception
* Audio perception and localization
* Expressive personality and animations
* Fully self-contained operation

# Hardware

## Computing

To be finished

---

# Actuator Layout

| Joint       | Actuator |
| ----------- | -------- |
| Hip Yaw     | RS06     |
| Hip Roll    | RS06     |
| Hip Pitch   | RS03     |
| Knee Pitch  | RS03     |
| Ankle Pitch | RS02     |

---

# Software Stack

* NVIDIA Isaac Lab
* Isaac Sim
* ROS 2
* Python (maybe Java?)
* CUDA

---

# Planned Features

### Locomotion

* [ ] Reinforcement learning walking policy
* [ ] Turning
* [ ] Side stepping
* [ ] Running
* [ ] Stair climbing
* [ ] Uneven terrain traversal
* [ ] Push recovery

### Perception

* [ ] Object detection
* [ ] Visual SLAM
* [ ] Human tracking
* [ ] Sound localization
* [ ] Face recognition

### Intelligence

* [ ] Voice interaction
* [ ] Autonomous navigation
* [ ] Gesture recognition
* [ ] Natural language interface

### Personality

* [ ] Idle animations
* [ ] Expressive body language
* [ ] Head tracking
* [ ] Emotional responses

---

# Development Roadmap

## Phase 1

* Mechanical design
* CAD
* Assemble drivetrain
* Bring up actuators
* Electronics integration

## Phase 2

* Simulation in Isaac Lab
* Reinforcement learning
* Sim-to-real transfer

## Phase 3

* Stable autonomous walking
* Terrain traversal
* Vision system

## Phase 4

* Audio
* Interaction
* Autonomous behaviors
* Emotions

---

# Repository Structure

```text
Echo/
├── cad/              # Fusion 360 files
└── README.md

---

## Contributing

Contributions, ideas, and discussions are always welcome. Feel free to open an issue or submit a pull request.

---

## License

This project is licensed under the MIT License.
