# Transformation Matrices - rivetrobot

Homogeneous transformation matrices between consecutive frames.
Convention: URDF RPY (XYZ extrinsic / ZYX intrinsic).

## Notation

### Frames

| Index | Link |
|-------|------|
| $L_{0}$ | base_link |
| $L_{1}$ | Yaw_R |
| $L_{2}$ | Yaw_L |
| $L_{3}$ | imu |
| $L_{4}$ | arm_right |
| $L_{5}$ | arm_left |
| $L_{6}$ | thigh_right |
| $L_{7}$ | thigh_left |
| $L_{8}$ | shin_right |
| $L_{9}$ | shin_left |
| $L_{10}$ | foot_right |
| $L_{11}$ | foot_left |

### Joint Variables

| Variable | Joint | Type | From | To |
|----------|-------|------|------|----|
| $q_{1}$ | Right_Hip_Yaw | revolute (rad) | $L_{0}$ | $L_{1}$ |
| $q_{2}$ | Left_Hip_Yaw | revolute (rad) | $L_{0}$ | $L_{2}$ |
| $q_{3}$ | Right_Hip_Roll | revolute (rad) | $L_{1}$ | $L_{4}$ |
| $q_{4}$ | Left_Hip_Roll | revolute (rad) | $L_{2}$ | $L_{5}$ |
| $q_{5}$ | Right_Hip_Pitch | revolute (rad) | $L_{4}$ | $L_{6}$ |
| $q_{6}$ | Left_Hip_Pitch | revolute (rad) | $L_{5}$ | $L_{7}$ |
| $q_{7}$ | Right_Knee | revolute (rad) | $L_{6}$ | $L_{8}$ |
| $q_{8}$ | Left_Knee | revolute (rad) | $L_{7}$ | $L_{9}$ |
| $q_{9}$ | Right_Foot | revolute (rad) | $L_{8}$ | $L_{10}$ |
| $q_{10}$ | Left_Foot | revolute (rad) | $L_{9}$ | $L_{11}$ |

Shorthand: $c_i = \cos(q_i)$, $s_i = \sin(q_i)$

### Kinematic Tree

```
L0: base_link
  |-- [revolute] Right_Hip_Yaw (q1)
  |   L1: Yaw_R
  |     +-- [revolute] Right_Hip_Roll (q3)
  |         L4: arm_right
  |           +-- [revolute] Right_Hip_Pitch (q5)
  |               L6: thigh_right
  |                 +-- [revolute] Right_Knee (q7)
  |                     L8: shin_right
  |                       +-- [revolute] Right_Foot (q9)
  |                           L10: foot_right
  |-- [revolute] Left_Hip_Yaw (q2)
  |   L2: Yaw_L
  |     +-- [revolute] Left_Hip_Roll (q4)
  |         L5: arm_left
  |           +-- [revolute] Left_Hip_Pitch (q6)
  |               L7: thigh_left
  |                 +-- [revolute] Left_Knee (q8)
  |                     L9: shin_left
  |                       +-- [revolute] Left_Foot (q10)
  |                           L11: foot_left
  +-- [fixed] Rigid_14
      L3: imu
```

## Transforms

## Right_Hip_Yaw

$L_{0}$ **base_link** -> $L_{1}$ **Yaw_R** (revolute)
  Variable: $q_{1}$

- **origin xyz**: (-0.103104, -0.06, 0.011836) m
- **origin rpy**: (0, 0, 0) rad
- **axis**: (0, 0, 1)
- **limits**: [-0.261799, 0.349066] rad ([-15deg, 20deg])

### Local Transform

$$
T^{0}_{1}(q_{1}) = \begin{bmatrix}
c_{1} & -s_{1} & 0 & -0.103104 \\
s_{1} & c_{1} & 0 & -0.06 \\
0 & 0 & 1 & 0.011836 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## Left_Hip_Yaw

$L_{0}$ **base_link** -> $L_{2}$ **Yaw_L** (revolute)
  Variable: $q_{2}$

- **origin xyz**: (-0.103104, 0.06, 0.011836) m
- **origin rpy**: (0, 0, 0) rad
- **axis**: (0, 0, 1)
- **limits**: [-0.349066, 0.261799] rad ([-20deg, 15deg])

### Local Transform

$$
T^{0}_{2}(q_{2}) = \begin{bmatrix}
c_{2} & -s_{2} & 0 & -0.103104 \\
s_{2} & c_{2} & 0 & 0.06 \\
0 & 0 & 1 & 0.011836 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## Rigid_14

$L_{0}$ **base_link** -> $L_{3}$ **imu** (fixed)

- **origin xyz**: (0.049483, 0, 0.050407) m
- **origin rpy**: (2.137906, 0, 1.570796) rad

### Local Transform

$$
T^{0}_{3} = \begin{bmatrix}
0 & 0.537196 & 0.843457 & 0.049483 \\
1 & 0 & 0 & 0 \\
0 & 0.843457 & -0.537196 & 0.050407 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## Right_Hip_Roll

$L_{1}$ **Yaw_R** -> $L_{4}$ **arm_right** (revolute)
  Variable: $q_{3}$

- **origin xyz**: (0.018, -0.0125, -0.054284) m
- **origin rpy**: (-1.570796, 0, 1.570796) rad
- **axis**: (0, 0, 1)
- **limits**: [-0.349066, 0.349066] rad ([-20deg, 20deg])

### Local Transform

$T^{1}_{4}(q_{3}) = T_{fixed} \cdot R_{axis}(q_{3})$ where:

$$
T_{fixed} = \begin{bmatrix}
0 & 0 & -1 & 0.018 \\
1 & 0 & 0 & -0.0125 \\
0 & -1 & 0 & -0.054284 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

$$
R_{axis}(q_{3}) = \begin{bmatrix}
c_{3} & -s_{3} & 0 & 0 \\
s_{3} & c_{3} & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## Left_Hip_Roll

$L_{2}$ **Yaw_L** -> $L_{5}$ **arm_left** (revolute)
  Variable: $q_{4}$

- **origin xyz**: (0.018, 0.0125, -0.054284) m
- **origin rpy**: (-1.570796, 0, 1.570796) rad
- **axis**: (0, 0, 1)
- **limits**: [-0.349066, 0.349066] rad ([-20deg, 20deg])

### Local Transform

$T^{2}_{5}(q_{4}) = T_{fixed} \cdot R_{axis}(q_{4})$ where:

$$
T_{fixed} = \begin{bmatrix}
0 & 0 & -1 & 0.018 \\
1 & 0 & 0 & 0.0125 \\
0 & -1 & 0 & -0.054284 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

$$
R_{axis}(q_{4}) = \begin{bmatrix}
c_{4} & -s_{4} & 0 & 0 \\
s_{4} & c_{4} & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## Right_Hip_Pitch

$L_{4}$ **arm_right** -> $L_{6}$ **thigh_right** (revolute)
  Variable: $q_{5}$

- **origin xyz**: (-0.06925, -0.001341, 0.008647) m
- **origin rpy**: (3.141593, 1.570796, 0) rad
- **axis**: (0, 0, 1)
- **limits**: [-1.047198, 0.436332] rad ([-60deg, 25deg])

### Local Transform

$T^{4}_{6}(q_{5}) = T_{fixed} \cdot R_{axis}(q_{5})$ where:

$$
T_{fixed} = \begin{bmatrix}
0 & 0 & -1 & -0.06925 \\
0 & -1 & 0 & -0.001341 \\
-1 & 0 & 0 & 0.008647 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

$$
R_{axis}(q_{5}) = \begin{bmatrix}
c_{5} & -s_{5} & 0 & 0 \\
s_{5} & c_{5} & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## Left_Hip_Pitch

$L_{5}$ **arm_left** -> $L_{7}$ **thigh_left** (revolute)
  Variable: $q_{6}$

- **origin xyz**: (0.06925, -0.001341, 0.008647) m
- **origin rpy**: (0, 1.570796, 0) rad
- **axis**: (0, 0, 1)
- **limits**: [-0.436332, 1.047198] rad ([-25deg, 60deg])

### Local Transform

$T^{5}_{7}(q_{6}) = T_{fixed} \cdot R_{axis}(q_{6})$ where:

$$
T_{fixed} = \begin{bmatrix}
0 & 0 & 1 & 0.06925 \\
0 & 1 & 0 & -0.001341 \\
-1 & 0 & 0 & 0.008647 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

$$
R_{axis}(q_{6}) = \begin{bmatrix}
c_{6} & -s_{6} & 0 & 0 \\
s_{6} & c_{6} & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## Right_Knee

$L_{6}$ **thigh_right** -> $L_{8}$ **shin_right** (revolute)
  Variable: $q_{7}$

- **origin xyz**: (-0.078133, -0.078888, 0) m
- **origin rpy**: (0, 0, 0) rad
- **axis**: (0, 0, 1)
- **limits**: [-0.523599, 0.610865] rad ([-30deg, 35deg])

### Local Transform

$$
T^{6}_{8}(q_{7}) = \begin{bmatrix}
c_{7} & -s_{7} & 0 & -0.078133 \\
s_{7} & c_{7} & 0 & -0.078888 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## Left_Knee

$L_{7}$ **thigh_left** -> $L_{9}$ **shin_left** (revolute)
  Variable: $q_{8}$

- **origin xyz**: (-0.078133, 0.078888, 0) m
- **origin rpy**: (3.141593, 0, 0) rad
- **axis**: (0, 0, 1)
- **limits**: [-0.523599, 0.610865] rad ([-30deg, 35deg])

### Local Transform

$T^{7}_{9}(q_{8}) = T_{fixed} \cdot R_{axis}(q_{8})$ where:

$$
T_{fixed} = \begin{bmatrix}
1 & 0 & 0 & -0.078133 \\
0 & -1 & 0 & 0.078888 \\
0 & 0 & -1 & 0 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

$$
R_{axis}(q_{8}) = \begin{bmatrix}
c_{8} & -s_{8} & 0 & 0 \\
s_{8} & c_{8} & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## Right_Foot

$L_{8}$ **shin_right** -> $L_{10}$ **foot_right** (revolute)
  Variable: $q_{9}$

- **origin xyz**: (0.047092, -0.129387, 0.001) m
- **origin rpy**: (0, 0, 0) rad
- **axis**: (0, 0, 1)
- **limits**: [-0.261799, 0.523599] rad ([-15deg, 30deg])

### Local Transform

$$
T^{8}_{10}(q_{9}) = \begin{bmatrix}
c_{9} & -s_{9} & 0 & 0.047092 \\
s_{9} & c_{9} & 0 & -0.129387 \\
0 & 0 & 1 & 0.001 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## Left_Foot

$L_{9}$ **shin_left** -> $L_{11}$ **foot_left** (revolute)
  Variable: $q_{10}$

- **origin xyz**: (0.047092, -0.129387, -0.0005) m
- **origin rpy**: (0, 0, 0) rad
- **axis**: (0, 0, 1)
- **limits**: [-0.261799, 0.523599] rad ([-15deg, 30deg])

### Local Transform

$$
T^{9}_{11}(q_{10}) = \begin{bmatrix}
c_{10} & -s_{10} & 0 & 0.047092 \\
s_{10} & c_{10} & 0 & -0.129387 \\
0 & 0 & 1 & -0.0005 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## Global Transform Chains

Transform from root $L_0$ to any link, as product of local transforms along the kinematic chain.

$$T^{0}_{4} = T^{0}_{1}(q_{1}) \cdot T^{1}_{4}(q_{3})\quad (L_0 \to L_{4}: \text{arm_right})$$

$$T^{0}_{5} = T^{0}_{2}(q_{2}) \cdot T^{2}_{5}(q_{4})\quad (L_0 \to L_{5}: \text{arm_left})$$

$$T^{0}_{6} = T^{0}_{1}(q_{1}) \cdot T^{1}_{4}(q_{3}) \cdot T^{4}_{6}(q_{5})\quad (L_0 \to L_{6}: \text{thigh_right})$$

$$T^{0}_{7} = T^{0}_{2}(q_{2}) \cdot T^{2}_{5}(q_{4}) \cdot T^{5}_{7}(q_{6})\quad (L_0 \to L_{7}: \text{thigh_left})$$

$$T^{0}_{8} = T^{0}_{1}(q_{1}) \cdot T^{1}_{4}(q_{3}) \cdot T^{4}_{6}(q_{5}) \cdot T^{6}_{8}(q_{7})\quad (L_0 \to L_{8}: \text{shin_right})$$

$$T^{0}_{9} = T^{0}_{2}(q_{2}) \cdot T^{2}_{5}(q_{4}) \cdot T^{5}_{7}(q_{6}) \cdot T^{7}_{9}(q_{8})\quad (L_0 \to L_{9}: \text{shin_left})$$

$$T^{0}_{10} = T^{0}_{1}(q_{1}) \cdot T^{1}_{4}(q_{3}) \cdot T^{4}_{6}(q_{5}) \cdot T^{6}_{8}(q_{7}) \cdot T^{8}_{10}(q_{9})\quad (L_0 \to L_{10}: \text{foot_right})$$

$$T^{0}_{11} = T^{0}_{2}(q_{2}) \cdot T^{2}_{5}(q_{4}) \cdot T^{5}_{7}(q_{6}) \cdot T^{7}_{9}(q_{8}) \cdot T^{9}_{11}(q_{10})\quad (L_0 \to L_{11}: \text{foot_left})$$

