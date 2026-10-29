# Validation Report: rivetrobot

## Status: PASS

## Summary

| Metric | Value |
|--------|-------|
| Links | 12 |
| Joints | 11 |
| Assemblies | 18 |
| Root | `base_link` |
| Errors | 0 |
| Warnings | 0 |

## Kinematic Tree

```
base_link [primitive]
  └─ Right_Hip_Yaw [revolute]
    Yaw_R [BAKE] [primitive]
      └─ Right_Hip_Roll [revolute]
        arm_right [BAKE] [primitive]
          └─ Right_Hip_Pitch [revolute]
            thigh_right [BAKE] [primitive]
              └─ Right_Knee [revolute]
                shin_right [BAKE] [primitive]
                  └─ Right_Foot [revolute]
                    foot_right [BAKE] [primitive]
  └─ Left_Hip_Yaw [revolute]
    Yaw_L [BAKE] [primitive]
      └─ Left_Hip_Roll [revolute]
        arm_left [BAKE] [primitive]
          └─ Left_Hip_Pitch [revolute]
            thigh_left [BAKE] [primitive]
              └─ Left_Knee [revolute]
                shin_left [BAKE] [primitive]
                  └─ Left_Foot [revolute]
                    foot_left [BAKE] [primitive]
  └─ Rigid_14 [fixed]
    imu [primitive]
```

## Collision Geometry

| Link | Source | Shape/File |
|------|--------|------------|
| `Yaw_L` | primitive STL | box |
| `Yaw_R` | primitive STL | box |
| `arm_left` | primitive STL | box |
| `arm_right` | primitive STL | box |
| `base_link` | primitive STL | box |
| `foot_left` | primitive STL | box |
| `foot_right` | primitive STL | box |
| `imu` | primitive STL | box |
| `shin_left` | primitive STL | cylinder |
| `shin_right` | primitive STL | cylinder |
| `thigh_left` | primitive STL | box |
| `thigh_right` | primitive STL | box |

## Mesh Bake Offsets

Links where joint frame ≠ component origin. Visual/inertial/collision origins shifted.

| Link | Offset (mm) |
|------|-------------|
| `Yaw_L` | (103.1, -50.0, -11.8) |
| `Yaw_R` | (103.1, 50.0, -11.8) |
| `thigh_right` | (96.9, 40.6, -124.9) |
| `foot_right` | (127.9, 248.9, -125.4) |
| `shin_right` | (175.0, 119.5, -124.9) |
| `arm_right` | (55.7, -42.4, -85.1) |
| `thigh_left` | (96.9, -40.6, -124.9) |
| `foot_left` | (127.9, 248.9, 125.4) |
| `shin_left` | (175.0, 119.5, 124.9) |
| `arm_left` | (-55.7, -42.4, -85.1) |
