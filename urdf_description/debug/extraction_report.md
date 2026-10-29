# Extraction Report: rivetrobot v6

**Exported:** 2026-10-25T18:46:56.216196
**Exporter:** v3.1.1

## Summary

| Metric | Value |
|--------|-------|
| Occurrences | 52 |
| Subassemblies | 18 |
| Leaf components | 34 |
| Joints (total) | 11 |
| As-built joints | 0 |
| Regular joints | 11 |
| Max nesting depth | 6 |

## Assembly Hierarchy

```
[rivetrobot]  (design root)
  ├── Yaw_L  (631.7g)
  ├── Yaw_R  (631.7g)
  ├── arm_left  (99.6g)
  ├── arm_right  (99.6g)
  ├── foot_left  (66.1g)
  ├── foot_right  (66.1g)
  ├── shin_left  (708.4g)
  ├── shin_right  (708.4g)
  ├── thigh_left  (1847.5g)
  ├── thigh_right  (1847.5g)
  [base_link]  (depth=0, children=1)
    ├── BatteryMount  (5282.1g, BatterySidePlate)
  [imu]  (depth=0, children=1)
    [00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM]  (depth=1, children=2)
      [GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM]  (depth=2, children=3)
        [BRACKET_ASM_1_ASM_3_ASM_1_ASM]  (depth=3, children=2)
          ├── BRACKET_MAX_2_1_1  (44.2g, Steel)
          [1_ASM_2_ASM_1_ASM_1_ASM]  (depth=4, children=2)
            ├── SCREW_CM2X035_035X1_1_3_1  (0.2g, Steel)
            ├── SCREW_CM2X035_035X1_1_3_1  (0.2g, Steel)
        [LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM]  (depth=3, children=2)
          ├── PRT0002_2_1_1  (1.3g, Steel)
          [2_ASM_3_ASM_1_ASM_1_ASM]  (depth=4, children=4)
            ├── SCREW_CM2X035_035X1_1_3_1  (0.2g, Steel)
            ├── SCREW_CM2X035_035X1_1_3_1  (0.2g, Steel)
            ├── SCREW_CM2X035_035X1_1_3_1  (0.2g, Steel)
            ├── SCREW_CM2X035_035X1_1_3_1  (0.2g, Steel)
        [UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM]  (depth=3, children=5)
          ├── 00_2_35673_1_1  (134.6g, Steel)
          ├── 00_2_36696_1_1  (7.8g, Steel)
          ├── SEALING_SILICA_GEL_AG_2_1_1  (5.1g, Steel)
          [111_1_1_ASM_1_ASM_1_ASM]  (depth=4, children=3)
            ├── 111_1_1_1_1_1  (7.2g, Steel)
            ├── 111_1_1_2_1_1  (0.1g, Steel)
            ├── 111_1_1_3_1_1  (0.1g, Steel)
          [SILICONE_PAD_2_ASM_1_ASM_1_ASM]  (depth=4, children=2)
            ├── SILICONE_PAD_2_1_1_1  (2.3g, Steel)
            ├── SILICONE_PAD_2_2_1_1  (2.3g, Steel)
      [GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM]  (depth=2, children=2)
        [GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM]  (depth=3, children=4)
          ├── LENS_1_1_1  (1.1g, Steel)
          ├── OE_1_1_1  (0.0g, Steel)
          [I02_ASM_3_ASM_1_ASM]  (depth=4, children=1)
            ├── DS_AS_FOR_1_1_1  (3.6g, Steel)
            ├── DS_AS_FOR_1_1_1  (3.6g, Steel)
        [PCBA_ASM_ASM_1_ASM]  (depth=3, children=3)
          ├── CX_24P_ASM_3_1_1  (1.0g, Steel)
          ├── GEMINI_336_PCBA_2_1_1  (11.6g, Steel)
          [810_805_518_516_8PIN_ASM_1_ASM_ASM]  (depth=4, children=1)
            [PART2_ASM_1_ASM_1_ASM_1_ASM]  (depth=5, children=1)
              ├── 810_805_518_516_8PIN_1_1_2_1  (0.5g, Steel)
```

## Occurrences

### Depth 0

#### 🔧 COMPONENT: `Yaw_L`

| Property | Value |
|----------|-------|
| Full path | `Yaw_L:1` |
| Component name | Yaw_L |
| Depth | 0 |
| Path segments | Yaw_L |
| **Transforms** | |
| Global position (m) | (-0.000000, 0.010000, 0.000000) |
| Global position (mm) | (-0.00, 10.00, 0.00) |
| Local transform (m) | (-0.000000, 0.010000, 0.000000) |
| Assembly context depth | 0 |
| transform2 (m) | (-0.000000, 0.010000, 0.000000) |
| **Physical** | |
| Mass | 0.631727 kg (631.727 g) |
| Volume | 2.692816e-04 m³ |
| Density | 2346.0 kg/m³ |
| Surface area | 3.900932e-02 m² |
| Body count | 2 |
| CoM (component-local, m) | (-0.109209, 0.062232, -0.041686) |
| CoM (global, m) | (-0.109209, 0.072232, -0.041686) |
| CoM (global, mm) | (-109.21, 72.23, -41.69) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 4.066389e-03, 9.015467e-03, 1.035544e-02 |
| Ixy, Ixz, Iyz | 4.294422e-03, -2.879320e-03, 1.640778e-03 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 5.220559e-04, 3.834018e-04, 3.745933e-04 |
| Ixy, Ixz, Iyz | 1.046129e-06, -3.393596e-06, 1.945483e-06 |
| Bounding box (m) | 0.0540 × 0.0845 × 0.0953 |
| Bounding box (mm) | 54.00 × 84.50 × 95.28 |
| **Material & Appearance** | |
| Material | RS06 |
| Appearance | Opaque_250_182_1 |
| Color (RGB 0-1) | (0.980, 0.714, 0.004) |
| Color (RGB 0-255) | (250, 182, 1) |
| **Per-body breakdown** | |
| Body 0: RS06 | mass=621.186g, material=RS06, inertia_src=api |
| Body 1: Body6 | mass=10.541g, material=YawMount, inertia_src=api |

#### 🔧 COMPONENT: `Yaw_R`

| Property | Value |
|----------|-------|
| Full path | `Yaw_R:1` |
| Component name | Yaw_R |
| Depth | 0 |
| Path segments | Yaw_R |
| **Transforms** | |
| Global position (m) | (0.000000, -0.010000, 0.000000) |
| Global position (mm) | (0.00, -10.00, 0.00) |
| Local transform (m) | (0.000000, -0.010000, 0.000000) |
| Assembly context depth | 0 |
| transform2 (m) | (0.000000, -0.010000, 0.000000) |
| **Physical** | |
| Mass | 0.631727 kg (631.727 g) |
| Volume | 2.692816e-04 m³ |
| Density | 2346.0 kg/m³ |
| Surface area | 3.900932e-02 m² |
| Body count | 2 |
| CoM (component-local, m) | (-0.109209, -0.062631, -0.041686) |
| CoM (global, m) | (-0.109209, -0.072631, -0.041686) |
| CoM (global, mm) | (-109.21, -72.63, -41.69) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 4.097893e-03, 9.015467e-03, 1.038695e-02 |
| Ixy, Ixz, Iyz | -4.320438e-03, -2.879320e-03, -1.651474e-03 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 5.220905e-04, 3.834018e-04, 3.746279e-04 |
| Ixy, Ixz, Iyz | 4.624520e-07, -3.393596e-06, -2.135784e-06 |
| Bounding box (m) | 0.0540 × 0.0845 × 0.0953 |
| Bounding box (mm) | 54.00 × 84.50 × 95.28 |
| **Material & Appearance** | |
| Material | RS06 |
| Appearance | Opaque_250_182_1 |
| Color (RGB 0-1) | (0.980, 0.714, 0.004) |
| Color (RGB 0-255) | (250, 182, 1) |
| **Per-body breakdown** | |
| Body 0: RS06 | mass=621.186g, material=RS06, inertia_src=api |
| Body 1: Body5 | mass=10.541g, material=YawMount, inertia_src=api |

#### 🔧 COMPONENT: `arm_left`

| Property | Value |
|----------|-------|
| Full path | `arm_left:1` |
| Component name | arm_left |
| Depth | 0 |
| Path segments | arm_left |
| **Transforms** | |
| Global position (m) | (0.000000, 0.016839, -0.000000) |
| Global position (mm) | (0.00, 16.84, -0.00) |
| Local transform (m) | (0.000000, 0.016839, -0.000000) |
| Assembly context depth | 0 |
| transform2 (m) | (0.000000, 0.016839, -0.000000) |
| **Physical** | |
| Mass | 0.099578 kg (99.578 g) |
| Volume | 3.688082e-05 m³ |
| Density | 2700.0 kg/m³ |
| Surface area | 1.445275e-02 m² |
| Body count | 1 |
| CoM (component-local, m) | (-0.082891, -0.084943, 0.042327) |
| CoM (global, m) | (-0.082891, -0.068105, 0.042327) |
| CoM (global, mm) | (-82.89, -68.10, 42.33) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 1.002332e-03, 8.865244e-04, 1.500046e-03 |
| Ixy, Ixz, Iyz | -7.133274e-04, 3.491226e-04, 3.575874e-04 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 1.054441e-04, 2.392344e-05, 9.735515e-05 |
| Ixy, Ixz, Iyz | -1.219163e-05, -2.497505e-07, -4.318760e-07 |
| Bounding box (m) | 0.0422 × 0.0928 × 0.0470 |
| Bounding box (mm) | 42.18 × 92.75 × 47.00 |
| **Material & Appearance** | |
| Material | Aluminum_6061 |
| Appearance | Aluminum_Anodized_Rough_Red |
| Color (RGB 0-1) | (0.855, 0.349, 0.349) |
| Color (RGB 0-255) | (218, 89, 89) |

#### 🔧 COMPONENT: `arm_right`

| Property | Value |
|----------|-------|
| Full path | `arm_right:1` |
| Component name | arm_right |
| Depth | 0 |
| Path segments | arm_right |
| **Transforms** | |
| Global position (m) | (0.000000, -0.016839, -0.000000) |
| Global position (mm) | (0.00, -16.84, -0.00) |
| Local transform (m) | (0.000000, -0.016839, -0.000000) |
| Assembly context depth | 0 |
| transform2 (m) | (0.000000, -0.016839, -0.000000) |
| **Physical** | |
| Mass | 0.099578 kg (99.578 g) |
| Volume | 3.688073e-05 m³ |
| Density | 2700.0 kg/m³ |
| Surface area | 1.445273e-02 m² |
| Body count | 1 |
| CoM (component-local, m) | (-0.082891, -0.084943, -0.042327) |
| CoM (global, m) | (-0.082891, -0.101781, -0.042327) |
| CoM (global, mm) | (-82.89, -101.78, -42.33) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 1.002328e-03, 8.865217e-04, 1.500040e-03 |
| Ixy, Ixz, Iyz | -7.133246e-04, -3.491215e-04, -3.575859e-04 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 1.054438e-04, 2.392334e-05, 9.735478e-05 |
| Ixy, Ixz, Iyz | -1.219154e-05, 2.497680e-07, 4.319345e-07 |
| Bounding box (m) | 0.0422 × 0.0928 × 0.0470 |
| Bounding box (mm) | 42.18 × 92.75 × 47.00 |
| **Material & Appearance** | |
| Material | Aluminum_6061 |
| Appearance | Aluminum_Anodized_Rough_Red |
| Color (RGB 0-1) | (0.855, 0.349, 0.349) |
| Color (RGB 0-255) | (218, 89, 89) |

#### 📦 SUBASSEMBLY: `base_link`

| Property | Value |
|----------|-------|
| Full path | `base_link:1` |
| Component name | base_link |
| Depth | 0 |
| Path segments | base_link |
| Child occurrences | 1 |
| **Transforms** | |
| Global position (m) | (0.000000, 0.000000, 0.000000) |
| Global position (mm) | (0.00, 0.00, 0.00) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 0 |
| transform2 (m) | (0.000000, 0.000000, 0.000000) |

#### 🔧 COMPONENT: `foot_left`

| Property | Value |
|----------|-------|
| Full path | `foot_left:1` |
| Component name | foot_left |
| Depth | 0 |
| Path segments | foot_left |
| **Transforms** | |
| Global position (m) | (0.003117, 0.016839, -0.000488) |
| Global position (mm) | (3.12, 16.84, -0.49) |
| Local transform (m) | (0.003117, 0.016839, -0.000488) |
| Assembly context depth | 0 |
| transform2 (m) | (0.003117, 0.016839, -0.000488) |
| **Physical** | |
| Mass | 0.066062 kg (66.062 g) |
| Volume | 2.390965e-04 m³ |
| Density | 276.3 kg/m³ |
| Surface area | 5.651271e-02 m² |
| Body count | 1 |
| CoM (component-local, m) | (-0.101921, -0.123844, 0.287701) |
| CoM (global, m) | (-0.098805, -0.107005, 0.287212) |
| CoM (global, mm) | (-98.80, -107.01, 287.21) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 6.532383e-03, 6.325516e-03, 1.852797e-03 |
| Ixy, Ixz, Iyz | -8.388801e-04, 1.930276e-03, 2.342293e-03 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 5.107256e-05, 1.711682e-04, 1.533255e-04 |
| Ixy, Ixz, Iyz | -5.018784e-06, -6.861592e-06, -1.150518e-05 |
| Bounding box (m) | 0.1700 × 0.0541 × 0.0944 |
| Bounding box (mm) | 170.00 × 54.05 × 94.40 |
| **Material & Appearance** | |
| Material | Foot |
| Appearance | Plate |
| Color (RGB 0-1) | (0.314, 0.314, 0.314) |
| Color (RGB 0-255) | (80, 80, 80) |

#### 🔧 COMPONENT: `foot_right`

| Property | Value |
|----------|-------|
| Full path | `foot_right:1` |
| Component name | foot_right |
| Depth | 0 |
| Path segments | foot_right |
| **Transforms** | |
| Global position (m) | (0.003117, -0.017339, -0.000488) |
| Global position (mm) | (3.12, -17.34, -0.49) |
| Local transform (m) | (0.003117, -0.017339, -0.000488) |
| Assembly context depth | 0 |
| transform2 (m) | (0.003117, -0.017339, -0.000488) |
| **Physical** | |
| Mass | 0.066062 kg (66.062 g) |
| Volume | 2.390965e-04 m³ |
| Density | 276.3 kg/m³ |
| Surface area | 5.651271e-02 m² |
| Body count | 1 |
| CoM (component-local, m) | (-0.101921, -0.123844, -0.287701) |
| CoM (global, m) | (-0.098805, -0.141182, -0.288189) |
| CoM (global, mm) | (-98.80, -141.18, -288.19) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 6.532383e-03, 6.325516e-03, 1.852797e-03 |
| Ixy, Ixz, Iyz | -8.388801e-04, -1.930276e-03, -2.342293e-03 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 5.107256e-05, 1.711682e-04, 1.533255e-04 |
| Ixy, Ixz, Iyz | -5.018784e-06, 6.861592e-06, 1.150518e-05 |
| Bounding box (m) | 0.1700 × 0.0541 × 0.0944 |
| Bounding box (mm) | 170.00 × 54.05 × 94.40 |
| **Material & Appearance** | |
| Material | Foot |
| Appearance | Plate |
| Color (RGB 0-1) | (0.314, 0.314, 0.314) |
| Color (RGB 0-255) | (80, 80, 80) |

#### 📦 SUBASSEMBLY: `imu`

| Property | Value |
|----------|-------|
| Full path | `imu:1` |
| Component name | imu |
| Depth | 0 |
| Path segments | imu |
| Child occurrences | 1 |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.049483, -0.000000, 0.050407) |
| Assembly context depth | 0 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |

#### 🔧 COMPONENT: `shin_left`

| Property | Value |
|----------|-------|
| Full path | `shin_left:1` |
| Component name | shin_left |
| Depth | 0 |
| Path segments | shin_left |
| **Transforms** | |
| Global position (m) | (0.003117, 0.016839, -0.000488) |
| Global position (mm) | (3.12, 16.84, -0.49) |
| Local transform (m) | (0.003117, 0.016839, -0.000488) |
| Assembly context depth | 0 |
| transform2 (m) | (0.003117, 0.016839, -0.000488) |
| **Physical** | |
| Mass | 0.708394 kg (708.394 g) |
| Volume | 2.435394e-04 m³ |
| Density | 2908.7 kg/m³ |
| Surface area | 7.210587e-02 m² |
| Body count | 5 |
| CoM (component-local, m) | (-0.145988, -0.108199, 0.202267) |
| CoM (global, m) | (-0.142872, -0.091361, 0.201778) |
| CoM (global, mm) | (-142.87, -91.36, 201.78) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 4.013660e-02, 4.743283e-02, 2.407620e-02 |
| Ixy, Ixz, Iyz | -1.128171e-02, 1.997856e-02, 1.525545e-02 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 2.861628e-03, 3.353421e-03, 6.852758e-04 |
| Ixy, Ixz, Iyz | -9.203791e-05, -9.393034e-04, -2.478565e-04 |
| Bounding box (m) | 0.1254 × 0.0454 × 0.1999 |
| Bounding box (mm) | 125.45 × 45.40 × 199.89 |
| **Material & Appearance** | |
| Material | RS02 |
| Appearance | Aluminum_Anodized_Glossy_Grey |
| Color (RGB 0-1) | (0.537, 0.537, 0.537) |
| Color (RGB 0-255) | (137, 137, 137) |
| **Per-body breakdown** | |
| Body 0: RS02 | mass=404.839g, material=RS02, inertia_src=api |
| Body 1: Body29 | mass=215.034g, material=Steel, inertia_src=api |
| Body 2: Body3 | mass=41.979g, material=Aluminum_6061, inertia_src=api |
| Body 3: PlasticSpacer | mass=1.747g, material=ABS_Plastic, inertia_src=api |
| Body 4: OuterShin | mass=44.796g, material=Aluminum_6061, inertia_src=api |

#### 🔧 COMPONENT: `shin_right`

| Property | Value |
|----------|-------|
| Full path | `shin_right:1` |
| Component name | shin_right |
| Depth | 0 |
| Path segments | shin_right |
| **Transforms** | |
| Global position (m) | (0.003117, -0.016839, -0.000488) |
| Global position (mm) | (3.12, -16.84, -0.49) |
| Local transform (m) | (0.003117, -0.016839, -0.000488) |
| Assembly context depth | 0 |
| transform2 (m) | (0.003117, -0.016839, -0.000488) |
| **Physical** | |
| Mass | 0.708393 kg (708.393 g) |
| Volume | 2.435391e-04 m³ |
| Density | 2908.7 kg/m³ |
| Surface area | 7.210587e-02 m² |
| Body count | 5 |
| CoM (component-local, m) | (-0.145988, -0.108199, -0.202267) |
| CoM (global, m) | (-0.142872, -0.125038, -0.202755) |
| CoM (global, mm) | (-142.87, -125.04, -202.76) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 4.013654e-02, 4.743277e-02, 2.407619e-02 |
| Ixy, Ixz, Iyz | -1.128170e-02, -1.997854e-02, -1.525543e-02 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 2.861626e-03, 3.353418e-03, 6.852746e-04 |
| Ixy, Ixz, Iyz | -9.203748e-05, 9.393024e-04, 2.478557e-04 |
| Bounding box (m) | 0.1254 × 0.0454 × 0.1999 |
| Bounding box (mm) | 125.45 × 45.40 × 199.89 |
| **Material & Appearance** | |
| Material | RS02 |
| Appearance | Aluminum_Anodized_Glossy_Grey |
| Color (RGB 0-1) | (0.537, 0.537, 0.537) |
| Color (RGB 0-255) | (137, 137, 137) |
| **Per-body breakdown** | |
| Body 0: RS02 | mass=404.838g, material=RS02, inertia_src=api |
| Body 1: Body29 | mass=215.034g, material=Steel, inertia_src=api |
| Body 2: Body3 | mass=41.979g, material=Aluminum_6061, inertia_src=api |
| Body 3: PlasticSpacer | mass=1.747g, material=ABS_Plastic, inertia_src=api |
| Body 4: OuterShin | mass=44.796g, material=Aluminum_6061, inertia_src=api |

#### 🔧 COMPONENT: `thigh_left`

| Property | Value |
|----------|-------|
| Full path | `thigh_left:1` |
| Component name | thigh_left |
| Depth | 0 |
| Path segments | thigh_left |
| **Transforms** | |
| Global position (m) | (0.003117, 0.016839, -0.000488) |
| Global position (mm) | (3.12, 16.84, -0.49) |
| Local transform (m) | (0.003117, 0.016839, -0.000488) |
| Assembly context depth | 0 |
| transform2 (m) | (0.003117, 0.016839, -0.000488) |
| **Physical** | |
| Mass | 1.847482 kg (1847.482 g) |
| Volume | 2.645143e-04 m³ |
| Density | 6984.4 kg/m³ |
| Surface area | 2.065711e-01 m² |
| Body count | 4 |
| CoM (component-local, m) | (-0.135898, -0.148525, 0.079893) |
| CoM (global, m) | (-0.132782, -0.131687, 0.079404) |
| CoM (global, mm) | (-132.78, -131.69, 79.40) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 5.728182e-02, 5.413475e-02, 7.956686e-02 |
| Ixy, Ixz, Iyz | -3.729503e-02, 2.288411e-02, 2.191619e-02 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 4.734527e-03, 8.222554e-03, 4.691792e-03 |
| Ixy, Ixz, Iyz | -4.784500e-06, 2.825446e-03, -6.231478e-06 |
| Bounding box (m) | 0.1872 × 0.0566 × 0.1885 |
| Bounding box (mm) | 187.21 × 56.60 × 188.49 |
| **Material & Appearance** | |
| Material | Aluminum_6061 |
| Appearance | Aluminum_Satin |
| Color (RGB 0-1) | (0.961, 0.961, 0.965) |
| Color (RGB 0-255) | (245, 245, 246) |
| **Per-body breakdown** | |
| Body 0: InnerPlate | mass=46.892g, material=Aluminum_6061, inertia_src=api |
| Body 1: OuterPlate | mass=41.040g, material=Aluminum_6061, inertia_src=api |
| Body 2: RS03 (old) 2 | mass=879.784g, material=RS03, inertia_src=api |
| Body 3: RS03 (old) | mass=879.767g, material=RS03, inertia_src=api |

#### 🔧 COMPONENT: `thigh_right`

| Property | Value |
|----------|-------|
| Full path | `thigh_right:1` |
| Component name | thigh_right |
| Depth | 0 |
| Path segments | thigh_right |
| **Transforms** | |
| Global position (m) | (0.003117, -0.016839, -0.000488) |
| Global position (mm) | (3.12, -16.84, -0.49) |
| Local transform (m) | (0.003117, -0.016839, -0.000488) |
| Assembly context depth | 0 |
| transform2 (m) | (0.003117, -0.016839, -0.000488) |
| **Physical** | |
| Mass | 1.847482 kg (1847.482 g) |
| Volume | 2.645143e-04 m³ |
| Density | 6984.4 kg/m³ |
| Surface area | 2.065716e-01 m² |
| Body count | 4 |
| CoM (component-local, m) | (-0.135898, -0.148525, -0.079892) |
| CoM (global, m) | (-0.132781, -0.165364, -0.080381) |
| CoM (global, mm) | (-132.78, -165.36, -80.38) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 5.728162e-02, 5.413435e-02, 7.956662e-02 |
| Ixy, Ixz, Iyz | -3.729491e-02, -2.288389e-02, -2.191600e-02 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 4.734522e-03, 8.222514e-03, 4.691757e-03 |
| Ixy, Ixz, Iyz | -4.772167e-06, -2.825429e-03, 6.251956e-06 |
| Bounding box (m) | 0.1872 × 0.0566 × 0.1885 |
| Bounding box (mm) | 187.21 × 56.60 × 188.49 |
| **Material & Appearance** | |
| Material | Aluminum_6061 |
| Appearance | Aluminum_Satin |
| Color (RGB 0-1) | (0.961, 0.961, 0.965) |
| Color (RGB 0-255) | (245, 245, 246) |
| **Per-body breakdown** | |
| Body 0: InnerPlate | mass=46.892g, material=Aluminum_6061, inertia_src=api |
| Body 1: OuterPlate | mass=41.040g, material=Aluminum_6061, inertia_src=api |
| Body 2: RS03 (old) 2 | mass=879.799g, material=RS03, inertia_src=api |
| Body 3: RS03 (old) | mass=879.751g, material=RS03, inertia_src=api |

### Depth 1

#### 🔧 COMPONENT: `BatteryMount`

| Property | Value |
|----------|-------|
| Full path | `base_link:1+BatteryMount:1` |
| Component name | BatteryMount |
| Depth | 1 |
| Path segments | base_link → BatteryMount |
| Parent path | `base_link:1` |
| **Transforms** | |
| Global position (m) | (0.000000, 0.000000, 0.000000) |
| Global position (mm) | (0.00, 0.00, 0.00) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 1 |
| transform2 (m) | (0.000000, 0.000000, 0.000000) |
| **Physical** | |
| Mass | 5.282090 kg (5282.090 g) |
| Volume | 8.219956e-04 m³ |
| Density | 6425.9 kg/m³ |
| Surface area | 1.763138e-01 m² |
| Body count | 7 |
| CoM (component-local, m) | (-0.200194, -0.000000, 0.004168) |
| CoM (global, m) | (-0.200194, -0.000000, 0.004168) |
| CoM (global, mm) | (-200.19, -0.00, 4.17) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 1.222422e-02, 2.216992e-01, 2.168973e-01 |
| Ixy, Ixz, Iyz | -3.273643e-13, 4.703747e-03, 8.871578e-15 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 1.213248e-02, 9.913968e-03, 5.203732e-03 |
| Ixy, Ixz, Iyz | 5.894212e-14, 2.968162e-04, 8.296447e-16 |
| Bounding box (m) | 0.0781 × 0.1180 × 0.1697 |
| Bounding box (mm) | 78.14 × 118.00 × 169.68 |
| **Material & Appearance** | |
| Material | BatterySidePlate |
| Appearance | Plate |
| Color (RGB 0-1) | (0.314, 0.314, 0.314) |
| Color (RGB 0-255) | (80, 80, 80) |
| **Per-body breakdown** | |
| Body 0: LPlate | mass=18.320g, material=BatterySidePlate, inertia_src=api |
| Body 1: RPlate | mass=18.320g, material=BatterySidePlate, inertia_src=api |
| Body 2: Back | mass=462.815g, material=Steel, inertia_src=api |
| Body 3: R Battery | mass=2369.601g, material=Steel, inertia_src=api |
| Body 4: L Battery | mass=2369.601g, material=Steel, inertia_src=api |
| Body 5: Mount | mass=38.407g, material=BatteryMount, inertia_src=api |
| Body 6: Body7 | mass=5.026g, material=ElectronicsPlate, inertia_src=api |

#### 📦 SUBASSEMBLY: `00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1` |
| Component name | 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM |
| Depth | 1 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM |
| Parent path | `imu:1` |
| Child occurrences | 2 |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 1 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |

### Depth 2

#### 📦 SUBASSEMBLY: `GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1` |
| Component name | GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM |
| Depth | 2 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1` |
| Child occurrences | 3 |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 2 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |

#### 📦 SUBASSEMBLY: `GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1` |
| Component name | GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM |
| Depth | 2 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1` |
| Child occurrences | 2 |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 2 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |

### Depth 3

#### 📦 SUBASSEMBLY: `BRACKET_ASM_1_ASM_3_ASM_1_ASM`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+BRACKET_ASM_1_ASM_3_ASM_1_ASM:1` |
| Component name | BRACKET_ASM_1_ASM_3_ASM_1_ASM |
| Depth | 3 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → BRACKET_ASM_1_ASM_3_ASM_1_ASM |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1` |
| Child occurrences | 2 |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 3 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |

#### 📦 SUBASSEMBLY: `LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1` |
| Component name | LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM |
| Depth | 3 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1` |
| Child occurrences | 2 |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 3 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |

#### 📦 SUBASSEMBLY: `UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1` |
| Component name | UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM |
| Depth | 3 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1` |
| Child occurrences | 5 |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 3 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |

#### 📦 SUBASSEMBLY: `GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1` |
| Component name | GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM |
| Depth | 3 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM → GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1` |
| Child occurrences | 4 |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 3 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |

#### 📦 SUBASSEMBLY: `PCBA_ASM_ASM_1_ASM`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1` |
| Component name | _PCBA_ASM_ASM_1_ASM |
| Depth | 3 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM → PCBA_ASM_ASM_1_ASM |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1` |
| Child occurrences | 3 |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 3 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |

### Depth 4

#### 📦 SUBASSEMBLY: `1_ASM_2_ASM_1_ASM_1_ASM`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+BRACKET_ASM_1_ASM_3_ASM_1_ASM:1+1_ASM_2_ASM_1_ASM_1_ASM:1` |
| Component name | 1_ASM_2_ASM_1_ASM_1_ASM |
| Depth | 4 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → BRACKET_ASM_1_ASM_3_ASM_1_ASM → 1_ASM_2_ASM_1_ASM_1_ASM |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+BRACKET_ASM_1_ASM_3_ASM_1_ASM:1` |
| Child occurrences | 2 |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 4 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |

#### 🔧 COMPONENT: `BRACKET_MAX_2_1_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+BRACKET_ASM_1_ASM_3_ASM_1_ASM:1+BRACKET_MAX_2_1_1:1` |
| Component name | BRACKET_MAX_2_1_1 |
| Depth | 4 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → BRACKET_ASM_1_ASM_3_ASM_1_ASM → BRACKET_MAX_2_1_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+BRACKET_ASM_1_ASM_3_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 4 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |
| **Physical** | |
| Mass | 0.044185 kg (44.185 g) |
| Volume | 5.628608e-06 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 5.889051e-03 m² |
| Body count | 2 |
| CoM (component-local, m) | (-0.001243, -0.000578, -0.006190) |
| CoM (global, m) | (0.048239, -0.000578, 0.044217) |
| CoM (global, mm) | (48.24, -0.58, 44.22) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 3.477127e-06, 2.483773e-05, 2.421983e-05 |
| Ixy, Ixz, Iyz | 9.620782e-08, -4.858180e-07, -2.267098e-07 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 1.769262e-06, 2.307632e-05, 2.413678e-05 |
| Ixy, Ixz, Iyz | 1.279530e-07, -1.457593e-07, -6.865470e-08 |
| Bounding box (m) | 0.0810 × 0.0227 × 0.0173 |
| Bounding box (mm) | 81.00 × 22.70 × 17.25 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |
| **Per-body breakdown** | |
| Body 0: Body1 | mass=44.151g, material=Steel, inertia_src=api |
| Body 1: Body2 | mass=0.034g, material=Steel, inertia_src=api |

#### 📦 SUBASSEMBLY: `2_ASM_3_ASM_1_ASM_1_ASM`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1` |
| Component name | 2_ASM_3_ASM_1_ASM_1_ASM |
| Depth | 4 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM → 2_ASM_3_ASM_1_ASM_1_ASM |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1` |
| Child occurrences | 4 |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 4 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |

#### 🔧 COMPONENT: `PRT0002_2_1_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+PRT0002_2_1_1:1` |
| Component name | PRT0002_2_1_1 |
| Depth | 4 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM → PRT0002_2_1_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 4 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |
| **Physical** | |
| Mass | 0.001273 kg (1.273 g) |
| Volume | 1.621189e-07 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 3.372689e-04 m² |
| Body count | 1 |
| CoM (component-local, m) | (0.033260, -0.001955, -0.013803) |
| CoM (global, m) | (0.082743, -0.001955, 0.036604) |
| CoM (global, mm) | (82.74, -1.96, 36.60) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 2.838803e-07, 1.660576e-06, 1.455489e-06 |
| Ixy, Ixz, Iyz | 7.463479e-08, 5.840045e-07, -3.476145e-08 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 3.653633e-08, 1.023626e-08, 4.276098e-08 |
| Ixy, Ixz, Iyz | -8.137598e-09, -2.685165e-10, -4.103097e-10 |
| Bounding box (m) | 0.0115 × 0.0186 × 0.0055 |
| Bounding box (mm) | 11.50 × 18.60 × 5.50 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |

#### 🔧 COMPONENT: `00_2_35673_1_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+00_2-35673_1_1:1` |
| Component name | 00_2-35673_1_1 |
| Depth | 4 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM → 00_2_35673_1_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 4 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |
| **Physical** | |
| Mass | 0.134570 kg (134.570 g) |
| Volume | 1.714268e-05 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 1.941369e-02 m² |
| Body count | 1 |
| CoM (component-local, m) | (0.000015, 0.000310, -0.005511) |
| CoM (global, m) | (0.049498, 0.000310, 0.044896) |
| CoM (global, mm) | (49.50, 0.31, 44.90) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 2.555560e-05, 1.116031e-04, 1.043885e-04 |
| Ixy, Ixz, Iyz | -7.749926e-08, -4.191670e-08, 1.510763e-07 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 2.145554e-05, 1.075160e-04, 1.043756e-04 |
| Ixy, Ixz, Iyz | -7.685398e-08, -5.338090e-08, -7.897459e-08 |
| Bounding box (m) | 0.0895 × 0.0250 × 0.0300 |
| Bounding box (mm) | 89.46 × 25.02 × 30.00 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |

#### 🔧 COMPONENT: `00_2_36696_1_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+00_2-36696_1_1:1` |
| Component name | 00_2-36696_1_1 |
| Depth | 4 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM → 00_2_36696_1_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 4 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |
| **Physical** | |
| Mass | 0.007785 kg (7.785 g) |
| Volume | 9.917214e-07 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 3.133488e-03 m² |
| Body count | 3 |
| CoM (component-local, m) | (-0.000064, 0.000000, 0.010837) |
| CoM (global, m) | (0.049419, 0.000000, 0.061244) |
| CoM (global, mm) | (49.42, 0.00, 61.24) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 1.134816e-06, 5.018111e-06, 4.323666e-06 |
| Ixy, Ixz, Iyz | 1.434488e-11, 5.516822e-09, -1.792025e-11 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 2.204855e-07, 4.103749e-06, 4.323634e-06 |
| Ixy, Ixz, Iyz | 1.424301e-11, 1.528912e-10, -5.551268e-13 |
| Bounding box (m) | 0.0834 × 0.0187 × 0.0030 |
| Bounding box (mm) | 83.43 × 18.71 × 3.01 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |
| **Per-body breakdown** | |
| Body 0: Body1 | mass=7.785g, material=Steel, inertia_src=api |
| Body 1: Body2 | mass=0.000g, material=Steel, inertia_src=api |
| Body 2: Body3 | mass=0.000g, material=Steel, inertia_src=api |

#### 📦 SUBASSEMBLY: `111_1_1_ASM_1_ASM_1_ASM`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+111_1_1_ASM_1_ASM_1_ASM:1` |
| Component name | 111_1_1_ASM_1_ASM_1_ASM |
| Depth | 4 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM → 111_1_1_ASM_1_ASM_1_ASM |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1` |
| Child occurrences | 3 |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 4 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |

#### 🔧 COMPONENT: `SEALING_SILICA_GEL_AG_2_1_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+SEALING_SILICA_GEL-AG_2_1_1:1` |
| Component name | SEALING_SILICA_GEL-AG_2_1_1 |
| Depth | 4 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM → SEALING_SILICA_GEL_AG_2_1_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 4 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |
| **Physical** | |
| Mass | 0.005080 kg (5.080 g) |
| Volume | 6.470953e-07 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 1.906992e-03 m² |
| Body count | 1 |
| CoM (component-local, m) | (0.000122, 0.000000, 0.009148) |
| CoM (global, m) | (0.049605, 0.000000, 0.059555) |
| CoM (global, mm) | (49.60, 0.00, 59.55) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 5.205280e-07, 1.899338e-06, 1.566256e-06 |
| Ixy, Ixz, Iyz | 5.341610e-09, -4.936304e-09, 1.620167e-10 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 9.544164e-08, 1.474176e-06, 1.566180e-06 |
| Ixy, Ixz, Iyz | 5.341795e-09, 7.408648e-10, 1.758667e-10 |
| Bounding box (m) | 0.0646 × 0.0146 × 0.0023 |
| Bounding box (mm) | 64.60 × 14.60 × 2.30 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |

#### 📦 SUBASSEMBLY: `SILICONE_PAD_2_ASM_1_ASM_1_ASM`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+SILICONE_PAD_2_ASM_1_ASM_1_ASM:1` |
| Component name | SILICONE_PAD_2_ASM_1_ASM_1_ASM |
| Depth | 4 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM → SILICONE_PAD_2_ASM_1_ASM_1_ASM |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1` |
| Child occurrences | 2 |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 4 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |

#### 🔧 COMPONENT: `LENS_1_1_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+LENS__1_1_1:1` |
| Component name | LENS__1_1_1 |
| Depth | 4 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM → GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM → LENS_1_1_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.057667, 0.010995, 0.045200) |
| Global position (mm) | (57.67, 10.99, 45.20) |
| Local transform (m) | (0.010995, 0.000005, 0.009700) |
| Assembly context depth | 4 |
| transform2 (m) | (0.057667, 0.010995, 0.045200) |
| **Physical** | |
| Mass | 0.001097 kg (1.097 g) |
| Volume | 1.397211e-07 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 3.148125e-04 m² |
| Body count | 2 |
| CoM (component-local, m) | (0.002687, 0.000000, 0.000000) |
| CoM (global, m) | (0.060354, 0.010995, 0.045201) |
| CoM (global, mm) | (60.35, 11.00, 45.20) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 5.247661e-09, 1.271461e-08, 1.271599e-08 |
| Ixy, Ixz, Iyz | -1.152528e-12, 3.951363e-13, -4.415745e-13 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 5.247661e-09, 4.793726e-09, 4.795102e-09 |
| Ixy, Ixz, Iyz | -9.381114e-13, 4.344818e-13, -4.415735e-13 |
| Bounding box (m) | 0.0082 × 0.0100 × 0.0100 |
| Bounding box (mm) | 8.18 × 9.96 × 9.96 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Opaque_128_64_64 |
| Color (RGB 0-1) | (0.502, 0.251, 0.251) |
| Color (RGB 0-255) | (128, 64, 64) |
| **Per-body breakdown** | |
| Body 0: Body1 | mass=1.097g, material=Steel, inertia_src=api |
| Body 1: Body2 | mass=0.000g, material=Steel, inertia_src=api |

#### 🔧 COMPONENT: `OE_1_1_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+OE_1_1_1:1` |
| Component name | OE_1_1_1 |
| Depth | 4 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM → GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM → OE_1_1_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.053008, -0.000000, 0.048162) |
| Global position (mm) | (53.01, -0.00, 48.16) |
| Local transform (m) | (-0.000000, 0.000000, 0.004180) |
| Assembly context depth | 4 |
| transform2 (m) | (0.053008, -0.000000, 0.048162) |
| **Physical** | |
| Mass | 0.000038 kg (0.038 g) |
| Volume | 4.808978e-09 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 4.477383e-04 m² |
| Body count | 3 |
| CoM (component-local, m) | (0.000001, -0.000000, 0.004825) |
| CoM (global, m) | (0.053009, -0.000000, 0.052987) |
| CoM (global, mm) | (53.01, -0.00, 52.99) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 9.131799e-10, 9.131458e-10, 6.724949e-11 |
| Ixy, Ixz, Iyz | -2.007804e-14, -1.540990e-13, 6.132576e-14 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 3.427814e-11, 3.424400e-11, 6.724946e-11 |
| Ixy, Ixz, Iyz | -2.008985e-14, 7.366277e-15, -2.931509e-15 |
| Bounding box (m) | 0.0200 × 0.0200 × 0.0071 |
| Bounding box (mm) | 20.00 × 20.00 × 7.05 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Opaque_193_196_192 |
| Color (RGB 0-1) | (0.757, 0.769, 0.753) |
| Color (RGB 0-255) | (193, 196, 192) |
| **Per-body breakdown** | |
| Body 0: Body1 | mass=0.038g, material=Steel, inertia_src=api |
| Body 1: Body2 | mass=0.000g, material=Steel, inertia_src=api |
| Body 2: Body3 | mass=0.000g, material=Steel, inertia_src=api |

#### 📦 SUBASSEMBLY: `I02_ASM_3_ASM_1_ASM`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+_I02_ASM_3_ASM_1_ASM:1` |
| Component name | _I02_ASM_3_ASM_1_ASM |
| Depth | 4 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM → GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM → I02_ASM_3_ASM_1_ASM |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1` |
| Child occurrences | 1 |
| **Transforms** | |
| Global position (m) | (0.049483, 0.025000, 0.050407) |
| Global position (mm) | (49.48, 25.00, 50.41) |
| Local transform (m) | (0.025000, 0.000000, 0.000000) |
| Assembly context depth | 4 |
| transform2 (m) | (0.049483, 0.025000, 0.050407) |

#### 📦 SUBASSEMBLY: `I02_ASM_3_ASM_1_ASM`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+_I02_ASM_3_ASM_1_ASM:2` |
| Component name | _I02_ASM_3_ASM_1_ASM |
| Depth | 4 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM → GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM → I02_ASM_3_ASM_1_ASM |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1` |
| Child occurrences | 1 |
| **Transforms** | |
| Global position (m) | (0.049483, -0.025000, 0.050407) |
| Global position (mm) | (49.48, -25.00, 50.41) |
| Local transform (m) | (-0.025000, 0.000000, 0.000000) |
| Assembly context depth | 4 |
| transform2 (m) | (0.049483, -0.025000, 0.050407) |

#### 📦 SUBASSEMBLY: `810_805_518_516_8PIN_ASM_1_ASM_ASM`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1+810_805_518_516_8PIN_ASM_1_ASM__ASM:1` |
| Component name | 810_805_518_516_8PIN_ASM_1_ASM__ASM |
| Depth | 4 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM → PCBA_ASM_ASM_1_ASM → 810_805_518_516_8PIN_ASM_1_ASM_ASM |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1` |
| Child occurrences | 1 |
| **Transforms** | |
| Global position (m) | (0.027171, 0.020675, 0.053947) |
| Global position (mm) | (27.17, 20.67, 53.95) |
| Local transform (m) | (0.020675, -0.009000, -0.020720) |
| Assembly context depth | 4 |
| transform2 (m) | (0.027171, 0.020675, 0.053947) |

#### 🔧 COMPONENT: `CX_24P_ASM_3_1_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1+CX-24P_ASM_3_1_1:1` |
| Component name | CX-24P_ASM_3_1_1 |
| Depth | 4 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM → PCBA_ASM_ASM_1_ASM → CX_24P_ASM_3_1_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.038927, -0.033300, 0.057130) |
| Global position (mm) | (38.93, -33.30, 57.13) |
| Local transform (m) | (-0.033300, 0.000000, -0.012515) |
| Assembly context depth | 4 |
| transform2 (m) | (0.038927, -0.033300, 0.057130) |
| **Physical** | |
| Mass | 0.000981 kg (0.981 g) |
| Volume | 1.249538e-07 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 6.076239e-04 m² |
| Body count | 8 |
| CoM (component-local, m) | (0.000006, 0.001142, -0.004392) |
| CoM (global, m) | (0.038933, -0.032158, 0.052738) |
| CoM (global, mm) | (38.93, -32.16, 52.74) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 2.567368e-08, 2.996322e-08, 8.445502e-09 |
| Ixy, Ixz, Iyz | -7.833238e-12, 4.183955e-11, 4.908969e-09 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 5.470414e-09, 1.103949e-08, 7.165887e-09 |
| Ixy, Ixz, Iyz | -9.012322e-13, 1.518149e-11, -1.183622e-11 |
| Bounding box (m) | 0.0089 × 0.0038 × 0.0082 |
| Bounding box (mm) | 8.94 × 3.76 × 8.15 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |
| **Per-body breakdown** | |
| Body 0: Body1 | mass=0.980g, material=Steel, inertia_src=api |
| Body 1: Body2 | mass=0.000g, material=Steel, inertia_src=api |
| Body 2: Body3 | mass=0.000g, material=Steel, inertia_src=api |
| Body 3: Body4 | mass=0.001g, material=Steel, inertia_src=api |
| Body 4: Body5 | mass=0.000g, material=Steel, inertia_src=api |
| Body 5: Body6 | mass=0.000g, material=Steel, inertia_src=api |
| Body 6: Body7 | mass=0.000g, material=Steel, inertia_src=api |
| Body 7: Body8 | mass=0.000g, material=Steel, inertia_src=api |

#### 🔧 COMPONENT: `GEMINI_336_PCBA_2_1_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1+GEMINI_336_PCBA_2_1_1:1` |
| Component name | GEMINI_336_PCBA_2_1_1 |
| Depth | 4 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM → PCBA_ASM_ASM_1_ASM → GEMINI_336_PCBA_2_1_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 4 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |
| **Physical** | |
| Mass | 0.011552 kg (11.552 g) |
| Volume | 1.471533e-06 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 2.724866e-03 m² |
| Body count | 1 |
| CoM (component-local, m) | (-0.000270, 0.000194, -0.011400) |
| CoM (global, m) | (0.049212, 0.000194, 0.039007) |
| CoM (global, mm) | (49.21, 0.19, 39.01) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 1.861650e-06, 5.835279e-06, 4.691682e-06 |
| Ixy, Ixz, Iyz | 1.754894e-08, -3.558429e-08, 2.557963e-08 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 3.599766e-07, 4.333199e-06, 4.690403e-06 |
| Ixy, Ixz, Iyz | 1.694262e-08, -2.713152e-22, -1.356576e-22 |
| Bounding box (m) | 0.0665 × 0.0200 × 0.0012 |
| Bounding box (mm) | 66.50 × 20.00 × 1.20 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |

### Depth 5

#### 🔧 COMPONENT: `SCREW_CM2X035_035X1_1_3_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+BRACKET_ASM_1_ASM_3_ASM_1_ASM:1+1_ASM_2_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:1` |
| Component name | SCREW_CM2X035-035X1_1_3_1 |
| Depth | 5 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → BRACKET_ASM_1_ASM_3_ASM_1_ASM → 1_ASM_2_ASM_1_ASM_1_ASM → SCREW_CM2X035_035X1_1_3_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+BRACKET_ASM_1_ASM_3_ASM_1_ASM:1+1_ASM_2_ASM_1_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.043659, -0.026500, 0.063601) |
| Global position (mm) | (43.66, -26.50, 63.60) |
| Local transform (m) | (-0.026500, 0.008000, -0.012000) |
| Assembly context depth | 5 |
| transform2 (m) | (0.043659, -0.026500, 0.063601) |
| **Physical** | |
| Mass | 0.000191 kg (0.191 g) |
| Volume | 2.438398e-08 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 6.571879e-05 m² |
| Body count | 1 |
| CoM (component-local, m) | (-0.000000, 0.000000, -0.001403) |
| CoM (global, m) | (0.043659, -0.026500, 0.062198) |
| CoM (global, mm) | (43.66, -26.50, 62.20) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 1.119827e-09, 1.119827e-09, 1.797679e-10 |
| Ixy, Ixz, Iyz | -2.099917e-17, 3.085614e-17, -4.941448e-19 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 7.428576e-10, 7.428575e-10, 1.797679e-10 |
| Ixy, Ixz, Iyz | -2.099917e-17, 9.494856e-17, -2.577228e-18 |
| Bounding box (m) | 0.0035 × 0.0035 × 0.0061 |
| Bounding box (mm) | 3.50 × 3.50 × 6.10 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |

#### 🔧 COMPONENT: `SCREW_CM2X035_035X1_1_3_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+BRACKET_ASM_1_ASM_3_ASM_1_ASM:1+1_ASM_2_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:2` |
| Component name | SCREW_CM2X035-035X1_1_3_1 |
| Depth | 5 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → BRACKET_ASM_1_ASM_3_ASM_1_ASM → 1_ASM_2_ASM_1_ASM_1_ASM → SCREW_CM2X035_035X1_1_3_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+BRACKET_ASM_1_ASM_3_ASM_1_ASM:1+1_ASM_2_ASM_1_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.035064, -0.026500, 0.050106) |
| Global position (mm) | (35.06, -26.50, 50.11) |
| Local transform (m) | (-0.026500, -0.008000, -0.012000) |
| Assembly context depth | 5 |
| transform2 (m) | (0.035064, -0.026500, 0.050106) |
| **Physical** | |
| Mass | 0.000191 kg (0.191 g) |
| Volume | 2.438398e-08 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 6.571879e-05 m² |
| Body count | 1 |
| CoM (component-local, m) | (-0.000000, 0.000000, -0.001403) |
| CoM (global, m) | (0.035064, -0.026500, 0.048702) |
| CoM (global, mm) | (35.06, -26.50, 48.70) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 1.119827e-09, 1.119827e-09, 1.797679e-10 |
| Ixy, Ixz, Iyz | -2.099917e-17, 3.085614e-17, -4.941448e-19 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 7.428576e-10, 7.428575e-10, 1.797679e-10 |
| Ixy, Ixz, Iyz | -2.099917e-17, 9.494856e-17, -2.577228e-18 |
| Bounding box (m) | 0.0035 × 0.0035 × 0.0061 |
| Bounding box (mm) | 3.50 × 3.50 × 6.10 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |

#### 🔧 COMPONENT: `SCREW_CM2X035_035X1_1_3_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:3` |
| Component name | SCREW_CM2X035-035X1_1_3_1 |
| Depth | 5 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM → 2_ASM_3_ASM_1_ASM_1_ASM → SCREW_CM2X035_035X1_1_3_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.044742, -0.039900, 0.058880) |
| Global position (mm) | (44.74, -39.90, 58.88) |
| Local transform (m) | (-0.039900, 0.004600, -0.008550) |
| Assembly context depth | 5 |
| transform2 (m) | (0.044742, -0.039900, 0.058880) |
| **Physical** | |
| Mass | 0.000191 kg (0.191 g) |
| Volume | 2.438398e-08 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 6.571879e-05 m² |
| Body count | 1 |
| CoM (component-local, m) | (-0.000000, 0.000000, -0.001403) |
| CoM (global, m) | (0.044742, -0.039900, 0.057477) |
| CoM (global, mm) | (44.74, -39.90, 57.48) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 1.119827e-09, 1.119827e-09, 1.797679e-10 |
| Ixy, Ixz, Iyz | -2.099917e-17, 3.085614e-17, -4.941448e-19 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 7.428576e-10, 7.428575e-10, 1.797679e-10 |
| Ixy, Ixz, Iyz | -2.099917e-17, 9.494856e-17, -2.577228e-18 |
| Bounding box (m) | 0.0035 × 0.0035 × 0.0061 |
| Bounding box (mm) | 3.50 × 3.50 × 6.10 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |

#### 🔧 COMPONENT: `SCREW_CM2X035_035X1_1_3_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:4` |
| Component name | SCREW_CM2X035-035X1_1_3_1 |
| Depth | 5 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM → 2_ASM_3_ASM_1_ASM_1_ASM → SCREW_CM2X035_035X1_1_3_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.044742, 0.039900, 0.058880) |
| Global position (mm) | (44.74, 39.90, 58.88) |
| Local transform (m) | (0.039900, 0.004600, -0.008550) |
| Assembly context depth | 5 |
| transform2 (m) | (0.044742, 0.039900, 0.058880) |
| **Physical** | |
| Mass | 0.000191 kg (0.191 g) |
| Volume | 2.438398e-08 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 6.571879e-05 m² |
| Body count | 1 |
| CoM (component-local, m) | (-0.000000, 0.000000, -0.001403) |
| CoM (global, m) | (0.044742, 0.039900, 0.057477) |
| CoM (global, mm) | (44.74, 39.90, 57.48) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 1.119827e-09, 1.119827e-09, 1.797679e-10 |
| Ixy, Ixz, Iyz | -2.099917e-17, 3.085614e-17, -4.941448e-19 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 7.428576e-10, 7.428575e-10, 1.797679e-10 |
| Ixy, Ixz, Iyz | -2.099917e-17, 9.494856e-17, -2.577228e-18 |
| Bounding box (m) | 0.0035 × 0.0035 × 0.0061 |
| Bounding box (mm) | 3.50 × 3.50 × 6.10 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |

#### 🔧 COMPONENT: `SCREW_CM2X035_035X1_1_3_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:5` |
| Component name | SCREW_CM2X035-035X1_1_3_1 |
| Depth | 5 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM → 2_ASM_3_ASM_1_ASM_1_ASM → SCREW_CM2X035_035X1_1_3_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.039800, 0.039900, 0.051120) |
| Global position (mm) | (39.80, 39.90, 51.12) |
| Local transform (m) | (0.039900, -0.004600, -0.008550) |
| Assembly context depth | 5 |
| transform2 (m) | (0.039800, 0.039900, 0.051120) |
| **Physical** | |
| Mass | 0.000191 kg (0.191 g) |
| Volume | 2.438398e-08 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 6.571879e-05 m² |
| Body count | 1 |
| CoM (component-local, m) | (-0.000000, 0.000000, -0.001403) |
| CoM (global, m) | (0.039800, 0.039900, 0.049717) |
| CoM (global, mm) | (39.80, 39.90, 49.72) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 1.119827e-09, 1.119827e-09, 1.797679e-10 |
| Ixy, Ixz, Iyz | -2.099917e-17, 3.085614e-17, -4.941448e-19 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 7.428576e-10, 7.428575e-10, 1.797679e-10 |
| Ixy, Ixz, Iyz | -2.099917e-17, 9.494856e-17, -2.577228e-18 |
| Bounding box (m) | 0.0035 × 0.0035 × 0.0061 |
| Bounding box (mm) | 3.50 × 3.50 × 6.10 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |

#### 🔧 COMPONENT: `SCREW_CM2X035_035X1_1_3_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:6` |
| Component name | SCREW_CM2X035-035X1_1_3_1 |
| Depth | 5 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM → 2_ASM_3_ASM_1_ASM_1_ASM → SCREW_CM2X035_035X1_1_3_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.039800, -0.039900, 0.051120) |
| Global position (mm) | (39.80, -39.90, 51.12) |
| Local transform (m) | (-0.039900, -0.004600, -0.008550) |
| Assembly context depth | 5 |
| transform2 (m) | (0.039800, -0.039900, 0.051120) |
| **Physical** | |
| Mass | 0.000191 kg (0.191 g) |
| Volume | 2.438398e-08 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 6.571879e-05 m² |
| Body count | 1 |
| CoM (component-local, m) | (-0.000000, 0.000000, -0.001403) |
| CoM (global, m) | (0.039800, -0.039900, 0.049717) |
| CoM (global, mm) | (39.80, -39.90, 49.72) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 1.119827e-09, 1.119827e-09, 1.797679e-10 |
| Ixy, Ixz, Iyz | -2.099917e-17, 3.085614e-17, -4.941448e-19 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 7.428576e-10, 7.428575e-10, 1.797679e-10 |
| Ixy, Ixz, Iyz | -2.099917e-17, 9.494856e-17, -2.577228e-18 |
| Bounding box (m) | 0.0035 × 0.0035 × 0.0061 |
| Bounding box (mm) | 3.50 × 3.50 × 6.10 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |

#### 🔧 COMPONENT: `111_1_1_1_1_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+111_1_1_ASM_1_ASM_1_ASM:1+111_1_1_1_1_1:1` |
| Component name | 111_1_1_1_1_1 |
| Depth | 5 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM → 111_1_1_ASM_1_ASM_1_ASM → 111_1_1_1_1_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+111_1_1_ASM_1_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 5 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |
| **Physical** | |
| Mass | 0.007243 kg (7.243 g) |
| Volume | 9.227295e-07 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 2.518184e-03 m² |
| Body count | 1 |
| CoM (component-local, m) | (-0.000000, -0.000000, 0.011600) |
| CoM (global, m) | (0.049483, -0.000000, 0.062007) |
| CoM (global, mm) | (49.48, -0.00, 62.01) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 1.209610e-06, 5.655167e-06, 4.914654e-06 |
| Ixy, Ixz, Iyz | -2.425741e-12, 1.831518e-12, 6.816749e-13 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 2.349348e-07, 4.680491e-06, 4.914654e-06 |
| Ixy, Ixz, Iyz | -2.425739e-12, 8.854698e-22, 1.997971e-22 |
| Bounding box (m) | 0.0833 × 0.0186 × 0.0008 |
| Bounding box (mm) | 83.33 × 18.61 × 0.80 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |

#### 🔧 COMPONENT: `111_1_1_2_1_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+111_1_1_ASM_1_ASM_1_ASM:1+111_1_1_2_1_1:1` |
| Component name | 111_1_1_2_1_1 |
| Depth | 5 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM → 111_1_1_ASM_1_ASM_1_ASM → 111_1_1_2_1_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+111_1_1_ASM_1_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 5 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |
| **Physical** | |
| Mass | 0.000121 kg (0.121 g) |
| Volume | 1.539380e-08 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 3.122743e-04 m² |
| Body count | 1 |
| CoM (component-local, m) | (-0.025000, -0.000000, 0.011150) |
| CoM (global, m) | (0.024483, -0.000000, 0.061557) |
| CoM (global, mm) | (24.48, -0.00, 61.56) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 1.650371e-08, 9.202956e-08, 7.848646e-08 |
| Ixy, Ixz, Iyz | -1.361758e-23, 3.368453e-08, 8.723762e-25 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 1.480407e-09, 1.480407e-09, 2.960613e-09 |
| Ixy, Ixz, Iyz | -1.021318e-23, -6.617445e-24, -6.459839e-25 |
| Bounding box (m) | 0.0140 × 0.0140 × 0.0001 |
| Bounding box (mm) | 14.00 × 14.00 × 0.10 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |

#### 🔧 COMPONENT: `111_1_1_3_1_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+111_1_1_ASM_1_ASM_1_ASM:1+111_1_1_3_1_1:1` |
| Component name | 111_1_1_3_1_1 |
| Depth | 5 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM → 111_1_1_ASM_1_ASM_1_ASM → 111_1_1_3_1_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+111_1_1_ASM_1_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 5 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |
| **Physical** | |
| Mass | 0.000121 kg (0.121 g) |
| Volume | 1.539380e-08 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 3.122743e-04 m² |
| Body count | 1 |
| CoM (component-local, m) | (0.025000, 0.000000, 0.011150) |
| CoM (global, m) | (0.074483, -0.000000, 0.061557) |
| CoM (global, mm) | (74.48, -0.00, 61.56) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 1.650371e-08, 9.202956e-08, 7.848646e-08 |
| Ixy, Ixz, Iyz | -2.042637e-24, -3.368453e-08, -3.298007e-24 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 1.480407e-09, 1.480407e-09, 2.960613e-09 |
| Ixy, Ixz, Iyz | 4.766153e-24, 0.000000e+00, -2.612873e-25 |
| Bounding box (m) | 0.0140 × 0.0140 × 0.0001 |
| Bounding box (mm) | 14.00 × 14.00 × 0.10 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |

#### 🔧 COMPONENT: `SILICONE_PAD_2_1_1_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+SILICONE_PAD_2_ASM_1_ASM_1_ASM:1+SILICONE_PAD_2_1_1_1:1` |
| Component name | SILICONE_PAD_2_1_1_1 |
| Depth | 5 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM → SILICONE_PAD_2_ASM_1_ASM_1_ASM → SILICONE_PAD_2_1_1_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+SILICONE_PAD_2_ASM_1_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 5 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |
| **Physical** | |
| Mass | 0.002288 kg (2.288 g) |
| Volume | 2.914197e-07 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 4.826182e-04 m² |
| Body count | 1 |
| CoM (component-local, m) | (0.017500, -0.011504, 0.000696) |
| CoM (global, m) | (0.066983, -0.011504, 0.051103) |
| CoM (global, mm) | (66.98, -11.50, 51.10) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 3.724931e-07, 7.775708e-07, 1.023455e-06 |
| Ixy, Ixz, Iyz | 4.605680e-07, -2.784402e-08, 1.227290e-08 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 6.860939e-08, 7.587322e-08, 2.008699e-08 |
| Ixy, Ixz, Iyz | 1.437022e-14, 2.716697e-14, -6.031757e-09 |
| Bounding box (m) | 0.0090 × 0.0100 × 0.0195 |
| Bounding box (mm) | 9.00 × 9.97 × 19.50 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |

#### 🔧 COMPONENT: `SILICONE_PAD_2_2_1_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+SILICONE_PAD_2_ASM_1_ASM_1_ASM:1+SILICONE_PAD_2_2_1_1:1` |
| Component name | SILICONE_PAD_2_2_1_1 |
| Depth | 5 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM → UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM → SILICONE_PAD_2_ASM_1_ASM_1_ASM → SILICONE_PAD_2_2_1_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+SILICONE_PAD_2_ASM_1_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.049483, -0.000000, 0.050407) |
| Global position (mm) | (49.48, -0.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 5 |
| transform2 (m) | (0.049483, -0.000000, 0.050407) |
| **Physical** | |
| Mass | 0.002287 kg (2.287 g) |
| Volume | 2.913898e-07 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 4.826182e-04 m² |
| Body count | 1 |
| CoM (component-local, m) | (-0.017500, -0.011505, 0.000695) |
| CoM (global, m) | (0.031983, -0.011505, 0.051102) |
| CoM (global, mm) | (31.98, -11.50, 51.10) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 3.724656e-07, 7.774947e-07, 1.023360e-06 |
| Ixy, Ixz, Iyz | -4.605275e-07, 2.782589e-08, 1.226262e-08 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 6.860555e-08, 7.586993e-08, 2.008618e-08 |
| Ixy, Ixz, Iyz | 1.401512e-14, 2.718931e-14, -6.030341e-09 |
| Bounding box (m) | 0.0090 × 0.0100 × 0.0195 |
| Bounding box (mm) | 9.00 × 9.97 × 19.50 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |

#### 🔧 COMPONENT: `DS_AS_FOR_1_1_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+_I02_ASM_3_ASM_1_ASM:1+DS-AS_FOR_1_1_1:1` |
| Component name | DS-AS_FOR_1_1_1 |
| Depth | 5 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM → GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM → I02_ASM_3_ASM_1_ASM → DS_AS_FOR_1_1_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+_I02_ASM_3_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.049483, 0.025000, 0.050407) |
| Global position (mm) | (49.48, 25.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 5 |
| transform2 (m) | (0.049483, 0.025000, 0.050407) |
| **Physical** | |
| Mass | 0.003557 kg (3.557 g) |
| Volume | 4.531626e-07 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 8.606952e-04 m² |
| Body count | 2 |
| CoM (component-local, m) | (-0.000000, -0.000000, 0.005540) |
| CoM (global, m) | (0.049483, 0.025000, 0.055947) |
| CoM (global, mm) | (49.48, 25.00, 55.95) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 1.471671e-07, 1.471694e-07, 3.407679e-08 |
| Ixy, Ixz, Iyz | 2.359308e-13, -2.579843e-12, 1.869756e-12 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 3.799465e-08, 3.799698e-08, 3.407679e-08 |
| Ixy, Ixz, Iyz | 2.359396e-13, -2.896976e-12, -1.158956e-12 |
| Bounding box (m) | 0.0200 × 0.0200 × 0.0132 |
| Bounding box (mm) | 20.00 × 20.00 × 13.22 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Opaque_128_64_64 |
| Color (RGB 0-1) | (0.502, 0.251, 0.251) |
| Color (RGB 0-255) | (128, 64, 64) |
| **Per-body breakdown** | |
| Body 0: Body1 | mass=3.557g, material=Steel, inertia_src=api |
| Body 1: Body2 | mass=0.000g, material=Steel, inertia_src=api |

#### 🔧 COMPONENT: `DS_AS_FOR_1_1_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+_I02_ASM_3_ASM_1_ASM:2+DS-AS_FOR_1_1_1:1` |
| Component name | DS-AS_FOR_1_1_1 |
| Depth | 5 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM → GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM → I02_ASM_3_ASM_1_ASM → DS_AS_FOR_1_1_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+_I02_ASM_3_ASM_1_ASM:2` |
| **Transforms** | |
| Global position (m) | (0.049483, -0.025000, 0.050407) |
| Global position (mm) | (49.48, -25.00, 50.41) |
| Local transform (m) | (0.000000, 0.000000, 0.000000) |
| Assembly context depth | 5 |
| transform2 (m) | (0.049483, -0.025000, 0.050407) |
| **Physical** | |
| Mass | 0.003557 kg (3.557 g) |
| Volume | 4.531626e-07 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 8.606952e-04 m² |
| Body count | 2 |
| CoM (component-local, m) | (-0.000000, -0.000000, 0.005540) |
| CoM (global, m) | (0.049483, -0.025000, 0.055947) |
| CoM (global, mm) | (49.48, -25.00, 55.95) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 1.471671e-07, 1.471694e-07, 3.407679e-08 |
| Ixy, Ixz, Iyz | 2.359308e-13, -2.579843e-12, 1.869756e-12 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 3.799465e-08, 3.799698e-08, 3.407679e-08 |
| Ixy, Ixz, Iyz | 2.359396e-13, -2.896976e-12, -1.158956e-12 |
| Bounding box (m) | 0.0200 × 0.0200 × 0.0132 |
| Bounding box (mm) | 20.00 × 20.00 × 13.22 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Opaque_128_64_64 |
| Color (RGB 0-1) | (0.502, 0.251, 0.251) |
| Color (RGB 0-255) | (128, 64, 64) |
| **Per-body breakdown** | |
| Body 0: Body1 | mass=3.557g, material=Steel, inertia_src=api |
| Body 1: Body2 | mass=0.000g, material=Steel, inertia_src=api |

#### 📦 SUBASSEMBLY: `PART2_ASM_1_ASM_1_ASM_1_ASM`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1+810_805_518_516_8PIN_ASM_1_ASM__ASM:1+PART2_ASM_1_ASM_1_ASM_1_ASM:1` |
| Component name | PART2_ASM_1_ASM_1_ASM_1_ASM |
| Depth | 5 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM → PCBA_ASM_ASM_1_ASM → 810_805_518_516_8PIN_ASM_1_ASM_ASM → PART2_ASM_1_ASM_1_ASM_1_ASM |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1+810_805_518_516_8PIN_ASM_1_ASM__ASM:1` |
| Child occurrences | 1 |
| **Transforms** | |
| Global position (m) | (0.027171, 0.020675, 0.053947) |
| Global position (mm) | (27.17, 20.67, 53.95) |
| Local transform (m) | (-0.000000, 0.000000, -0.000000) |
| Assembly context depth | 5 |
| transform2 (m) | (0.027171, 0.020675, 0.053947) |

### Depth 6

#### 🔧 COMPONENT: `810_805_518_516_8PIN_1_1_2_1`

| Property | Value |
|----------|-------|
| Full path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1+810_805_518_516_8PIN_ASM_1_ASM__ASM:1+PART2_ASM_1_ASM_1_ASM_1_ASM:1+810_805_518_516_8PIN_1_1_2_1:1` |
| Component name | 810_805_518_516_8PIN_1_1_2_1 |
| Depth | 6 |
| Path segments | imu → 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM → GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM → PCBA_ASM_ASM_1_ASM → 810_805_518_516_8PIN_ASM_1_ASM_ASM → PART2_ASM_1_ASM_1_ASM_1_ASM → 810_805_518_516_8PIN_1_1_2_1 |
| Parent path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1+810_805_518_516_8PIN_ASM_1_ASM__ASM:1+PART2_ASM_1_ASM_1_ASM_1_ASM:1` |
| **Transforms** | |
| Global position (m) | (0.027171, 0.020675, 0.053947) |
| Global position (mm) | (27.17, 20.67, 53.95) |
| Local transform (m) | (-0.000000, 0.000000, -0.000000) |
| Assembly context depth | 6 |
| transform2 (m) | (0.027171, 0.020675, 0.053947) |
| **Physical** | |
| Mass | 0.000496 kg (0.496 g) |
| Volume | 6.323326e-08 m³ |
| Density | 7850.0 kg/m³ |
| Surface area | 3.287395e-04 m² |
| Body count | 1 |
| CoM (component-local, m) | (0.009000, 0.009185, -0.007160) |
| CoM (global, m) | (0.036171, 0.029860, 0.046786) |
| CoM (global, mm) | (36.17, 29.86, 46.79) |
| **Inertia at origin (kg·m²)** | |
| Ixx, Iyy, Izz | 6.853168e-08, 7.093340e-08, 8.761373e-08 |
| Ixy, Ixz, Iyz | -4.103258e-08, 3.198769e-08, 3.261114e-08 |
| **Inertia at CoM (kg·m²)** | |
| Ixx, Iyy, Izz | 1.207738e-09, 5.277843e-09, 5.531602e-09 |
| Ixy, Ixz, Iyz | -7.142060e-17, 5.395585e-17, -3.346238e-11 |
| Bounding box (m) | 0.0100 × 0.0050 × 0.0030 |
| Bounding box (mm) | 10.00 × 5.00 × 2.98 |
| **Material & Appearance** | |
| Material | Steel |
| Appearance | Steel_Satin |
| Color (RGB 0-1) | (0.627, 0.627, 0.627) |
| Color (RGB 0-255) | (160, 160, 160) |

## Joints

#### 🔧 Joint: `Left_Foot` (regular)

| Property | Value |
|----------|-------|
| Defining component | rivetrobot (rivetrobot v6) |
| Suppressed | False |
| Motion type | revolute (enum=1) |
| Axis | (-0.0000, -1.0000, 0.0000) |
| **Connections** | |
| Parent (occ2) | `shin_left` |
| Parent path | `shin_left:1` |
| Child (occ1) | `foot_left` |
| Child path | `foot_left:1` |
| **Geometry (all sources, raw cm)** | |
| geometryOrOriginOne | (-12.4791, 14.2250, -24.9382) |
| geometryOrOriginTwo | (-12.4791, 14.2250, -24.9382) |
| occ1.transform | (0.3117, 1.6839, -0.0488) ctx_depth=0 |
| occ1.global (assembled) | (0.3117, 1.6839, -0.0488) |
| occ2.transform | (0.3117, 1.6839, -0.0488) ctx_depth=0 |
| occ2.global (assembled) | (0.3117, 1.6839, -0.0488) |
| **Picked origin (m)** | (-0.124791, 0.142250, -0.249382) via `geometryOrOriginOne` |
| Rotation limits (rad) | [-0.2618, 0.5236] |

#### 🔧 Joint: `Left_Hip_Pitch` (regular)

| Property | Value |
|----------|-------|
| Defining component | rivetrobot (rivetrobot v6) |
| Suppressed | False |
| Motion type | revolute (enum=1) |
| Axis | (0.0000, 1.0000, 0.0000) |
| **Connections** | |
| Parent (occ2) | `arm_left` |
| Parent path | `arm_left:1` |
| Child (occ1) | `thigh_left` |
| Child path | `thigh_left:1` |
| **Geometry (all sources, raw cm)** | |
| geometryOrOriginOne | (-9.3750, 14.1750, -4.1107) |
| geometryOrOriginTwo | (-9.3750, 14.1750, -4.1107) |
| occ1.transform | (0.3117, 1.6839, -0.0488) ctx_depth=0 |
| occ1.global (assembled) | (0.3117, 1.6839, -0.0488) |
| occ2.transform | (0.0000, 1.6839, -0.0000) ctx_depth=0 |
| occ2.global (assembled) | (0.0000, 1.6839, -0.0000) |
| **Picked origin (m)** | (-0.093750, 0.141750, -0.041107) via `geometryOrOriginOne` |
| Rotation limits (rad) | [-0.4363, 1.0472] |

#### 🔧 Joint: `Left_Hip_Roll` (regular)

| Property | Value |
|----------|-------|
| Defining component | rivetrobot (rivetrobot v6) |
| Suppressed | False |
| Motion type | revolute (enum=1) |
| Axis | (-1.0000, -0.0000, -0.0000) |
| **Connections** | |
| Parent (occ2) | `Yaw_L` |
| Parent path | `Yaw_L:1` |
| Child (occ1) | `arm_left` |
| Child path | `arm_left:1` |
| **Geometry (all sources, raw cm)** | |
| geometryOrOriginOne | (-8.5104, 7.2500, -4.2448) |
| geometryOrOriginTwo | (-8.5104, 7.2500, -4.2448) |
| occ1.transform | (0.0000, 1.6839, -0.0000) ctx_depth=0 |
| occ1.global (assembled) | (0.0000, 1.6839, -0.0000) |
| occ2.transform | (-0.0000, 1.0000, 0.0000) ctx_depth=0 |
| occ2.global (assembled) | (-0.0000, 1.0000, 0.0000) |
| **Picked origin (m)** | (-0.085104, 0.072500, -0.042448) via `geometryOrOriginOne` |
| Rotation limits (rad) | [-0.3491, 0.3491] |

#### 🔧 Joint: `Left_Hip_Yaw` (regular)

| Property | Value |
|----------|-------|
| Defining component | rivetrobot (rivetrobot v6) |
| Suppressed | False |
| Motion type | revolute (enum=1) |
| Axis | (0.0000, 0.0000, 1.0000) |
| **Connections** | |
| Parent (occ2) | `base_link` |
| Parent path | `base_link:1` |
| Child (occ1) | `Yaw_L` |
| Child path | `Yaw_L:1` |
| **Geometry (all sources, raw cm)** | |
| geometryOrOriginOne | (-10.3104, 6.0000, 1.1836) |
| geometryOrOriginTwo | (-10.3104, 6.0000, 1.1836) |
| occ1.transform | (-0.0000, 1.0000, 0.0000) ctx_depth=0 |
| occ1.global (assembled) | (-0.0000, 1.0000, 0.0000) |
| occ2.transform | (0.0000, 0.0000, 0.0000) ctx_depth=0 |
| occ2.global (assembled) | (0.0000, 0.0000, 0.0000) |
| **Picked origin (m)** | (-0.103104, 0.060000, 0.011836) via `geometryOrOriginOne` |
| Rotation limits (rad) | [-0.3491, 0.2618] |

#### 🔧 Joint: `Left_Knee` (regular)

| Property | Value |
|----------|-------|
| Defining component | rivetrobot (rivetrobot v6) |
| Suppressed | False |
| Motion type | revolute (enum=1) |
| Axis | (-0.0000, -1.0000, 0.0000) |
| **Connections** | |
| Parent (occ2) | `thigh_left` |
| Parent path | `thigh_left:1` |
| Child (occ1) | `shin_left` |
| Child path | `shin_left:1` |
| **Geometry (all sources, raw cm)** | |
| geometryOrOriginOne | (-17.1883, 14.1750, -11.9995) |
| geometryOrOriginTwo | (-17.1883, 14.1750, -11.9995) |
| occ1.transform | (0.3117, 1.6839, -0.0488) ctx_depth=0 |
| occ1.global (assembled) | (0.3117, 1.6839, -0.0488) |
| occ2.transform | (0.3117, 1.6839, -0.0488) ctx_depth=0 |
| occ2.global (assembled) | (0.3117, 1.6839, -0.0488) |
| **Picked origin (m)** | (-0.171883, 0.141750, -0.119995) via `geometryOrOriginOne` |
| Rotation limits (rad) | [-0.5236, 0.6109] |

#### 🔧 Joint: `Right_Foot` (regular)

| Property | Value |
|----------|-------|
| Defining component | rivetrobot (rivetrobot v6) |
| Suppressed | False |
| Motion type | revolute (enum=1) |
| Axis | (0.0000, -1.0000, -0.0000) |
| **Connections** | |
| Parent (occ2) | `shin_right` |
| Parent path | `shin_right:1` |
| Child (occ1) | `foot_right` |
| Child path | `foot_right:1` |
| **Geometry (all sources, raw cm)** | |
| geometryOrOriginOne | (-12.4791, -14.2750, -24.9382) |
| geometryOrOriginTwo | (-12.4791, -14.2750, -24.9382) |
| occ1.transform | (0.3117, -1.7339, -0.0488) ctx_depth=0 |
| occ1.global (assembled) | (0.3117, -1.7339, -0.0488) |
| occ2.transform | (0.3117, -1.6839, -0.0488) ctx_depth=0 |
| occ2.global (assembled) | (0.3117, -1.6839, -0.0488) |
| **Picked origin (m)** | (-0.124791, -0.142750, -0.249382) via `geometryOrOriginOne` |
| Rotation limits (rad) | [-0.2618, 0.5236] |

#### 🔧 Joint: `Right_Hip_Pitch` (regular)

| Property | Value |
|----------|-------|
| Defining component | rivetrobot (rivetrobot v6) |
| Suppressed | False |
| Motion type | revolute (enum=1) |
| Axis | (0.0000, -1.0000, 0.0000) |
| **Connections** | |
| Parent (occ2) | `arm_right` |
| Parent path | `arm_right:1` |
| Child (occ1) | `thigh_right` |
| Child path | `thigh_right:1` |
| **Geometry (all sources, raw cm)** | |
| geometryOrOriginOne | (-9.3750, -14.1750, -4.1107) |
| geometryOrOriginTwo | (-9.3750, -14.1750, -4.1107) |
| occ1.transform | (0.3117, -1.6839, -0.0488) ctx_depth=0 |
| occ1.global (assembled) | (0.3117, -1.6839, -0.0488) |
| occ2.transform | (0.0000, -1.6839, -0.0000) ctx_depth=0 |
| occ2.global (assembled) | (0.0000, -1.6839, -0.0000) |
| **Picked origin (m)** | (-0.093750, -0.141750, -0.041107) via `geometryOrOriginOne` |
| Rotation limits (rad) | [-1.0472, 0.4363] |

#### 🔧 Joint: `Right_Hip_Roll` (regular)

| Property | Value |
|----------|-------|
| Defining component | rivetrobot (rivetrobot v6) |
| Suppressed | False |
| Motion type | revolute (enum=1) |
| Axis | (-1.0000, -0.0000, -0.0000) |
| **Connections** | |
| Parent (occ2) | `Yaw_R` |
| Parent path | `Yaw_R:1` |
| Child (occ1) | `arm_right` |
| Child path | `arm_right:1` |
| **Geometry (all sources, raw cm)** | |
| geometryOrOriginOne | (-8.5104, -7.2500, -4.2448) |
| geometryOrOriginTwo | (-8.5104, -7.2500, -4.2448) |
| occ1.transform | (0.0000, -1.6839, -0.0000) ctx_depth=0 |
| occ1.global (assembled) | (0.0000, -1.6839, -0.0000) |
| occ2.transform | (0.0000, -1.0000, 0.0000) ctx_depth=0 |
| occ2.global (assembled) | (0.0000, -1.0000, 0.0000) |
| **Picked origin (m)** | (-0.085104, -0.072500, -0.042448) via `geometryOrOriginOne` |
| Rotation limits (rad) | [-0.3491, 0.3491] |

#### 🔧 Joint: `Right_Hip_Yaw` (regular)

| Property | Value |
|----------|-------|
| Defining component | rivetrobot (rivetrobot v6) |
| Suppressed | False |
| Motion type | revolute (enum=1) |
| Axis | (0.0000, 0.0000, 1.0000) |
| **Connections** | |
| Parent (occ2) | `base_link` |
| Parent path | `base_link:1` |
| Child (occ1) | `Yaw_R` |
| Child path | `Yaw_R:1` |
| **Geometry (all sources, raw cm)** | |
| geometryOrOriginOne | (-10.3104, -6.0000, 1.1836) |
| geometryOrOriginTwo | (-10.3104, -6.0000, 1.1836) |
| occ1.transform | (0.0000, -1.0000, 0.0000) ctx_depth=0 |
| occ1.global (assembled) | (0.0000, -1.0000, 0.0000) |
| occ2.transform | (0.0000, 0.0000, 0.0000) ctx_depth=0 |
| occ2.global (assembled) | (0.0000, 0.0000, 0.0000) |
| **Picked origin (m)** | (-0.103104, -0.060000, 0.011836) via `geometryOrOriginOne` |
| Rotation limits (rad) | [-0.2618, 0.3491] |

#### 🔧 Joint: `Right_Knee` (regular)

| Property | Value |
|----------|-------|
| Defining component | rivetrobot (rivetrobot v6) |
| Suppressed | False |
| Motion type | revolute (enum=1) |
| Axis | (0.0000, -1.0000, -0.0000) |
| **Connections** | |
| Parent (occ2) | `thigh_right` |
| Parent path | `thigh_right:1` |
| Child (occ1) | `shin_right` |
| Child path | `shin_right:1` |
| **Geometry (all sources, raw cm)** | |
| geometryOrOriginOne | (-17.1883, -14.1750, -11.9995) |
| geometryOrOriginTwo | (-17.1883, -14.1750, -11.9995) |
| occ1.transform | (0.3117, -1.6839, -0.0488) ctx_depth=0 |
| occ1.global (assembled) | (0.3117, -1.6839, -0.0488) |
| occ2.transform | (0.3117, -1.6839, -0.0488) ctx_depth=0 |
| occ2.global (assembled) | (0.3117, -1.6839, -0.0488) |
| **Picked origin (m)** | (-0.171883, -0.141750, -0.119995) via `geometryOrOriginOne` |
| Rotation limits (rad) | [-0.5236, 0.6109] |

#### 🔧 Joint: `Rigid_14` (regular)

| Property | Value |
|----------|-------|
| Defining component | rivetrobot (rivetrobot v6) |
| Suppressed | False |
| Motion type | rigid (enum=0) |
| Axis | (0.0000, 0.0000, 1.0000) |
| **Connections** | |
| Parent (occ2) | `base_link` |
| Parent path | `base_link:1` |
| Child (occ1) | `SILICONE_PAD_2_1_1_1` |
| Child path | `imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+SILICONE_PAD_2_ASM_1_ASM_1_ASM:1+SILICONE_PAD_2_1_1_1:1` |
| **Geometry (all sources, raw cm)** | |
| geometryOrOriginOne | (4.1552, 1.7500, 4.0282) |
| geometryOrOriginTwo | (4.1552, 1.7500, 4.0282) |
| occ1.transform | (0.0000, 0.0000, 0.0000) ctx_depth=5 |
| occ1.global (assembled) | (4.9483, -0.0000, 5.0407) |
| occ2.transform | (0.0000, 0.0000, 0.0000) ctx_depth=0 |
| occ2.global (assembled) | (0.0000, 0.0000, 0.0000) |
| **Picked origin (m)** | (0.041552, 0.017500, 0.040282) via `geometryOrOriginOne` |

## Quick Comparison Table

Compare these values with Fusion 360 Properties panel (right-click → Properties).

| Component | Mass (g) | World X,Y,Z (mm) | CoM X,Y,Z (mm) | Material |
|-----------|----------|-------------------|-----------------|----------|
| Yaw_L | 631.727 | (-0.00, 10.00, 0.00) | (-109.21, 72.23, -41.69) | RS06 |
| Yaw_R | 631.727 | (0.00, -10.00, 0.00) | (-109.21, -72.63, -41.69) | RS06 |
| arm_left | 99.578 | (0.00, 16.84, -0.00) | (-82.89, -68.10, 42.33) | Aluminum_6061 |
| arm_right | 99.578 | (0.00, -16.84, -0.00) | (-82.89, -101.78, -42.33) | Aluminum_6061 |
| BatteryMount | 5282.090 | (0.00, 0.00, 0.00) | (-200.19, -0.00, 4.17) | BatterySidePlate |
| foot_left | 66.062 | (3.12, 16.84, -0.49) | (-98.80, -107.01, 287.21) | Foot |
| foot_right | 66.062 | (3.12, -17.34, -0.49) | (-98.80, -141.18, -288.19) | Foot |
| SCREW_CM2X035_035X1_1_3_1 | 0.191 | (43.66, -26.50, 63.60) | (43.66, -26.50, 62.20) | Steel |
| SCREW_CM2X035_035X1_1_3_1 | 0.191 | (35.06, -26.50, 50.11) | (35.06, -26.50, 48.70) | Steel |
| BRACKET_MAX_2_1_1 | 44.185 | (49.48, -0.00, 50.41) | (48.24, -0.58, 44.22) | Steel |
| SCREW_CM2X035_035X1_1_3_1 | 0.191 | (44.74, -39.90, 58.88) | (44.74, -39.90, 57.48) | Steel |
| SCREW_CM2X035_035X1_1_3_1 | 0.191 | (44.74, 39.90, 58.88) | (44.74, 39.90, 57.48) | Steel |
| SCREW_CM2X035_035X1_1_3_1 | 0.191 | (39.80, 39.90, 51.12) | (39.80, 39.90, 49.72) | Steel |
| SCREW_CM2X035_035X1_1_3_1 | 0.191 | (39.80, -39.90, 51.12) | (39.80, -39.90, 49.72) | Steel |
| PRT0002_2_1_1 | 1.273 | (49.48, -0.00, 50.41) | (82.74, -1.96, 36.60) | Steel |
| 00_2_35673_1_1 | 134.570 | (49.48, -0.00, 50.41) | (49.50, 0.31, 44.90) | Steel |
| 00_2_36696_1_1 | 7.785 | (49.48, -0.00, 50.41) | (49.42, 0.00, 61.24) | Steel |
| 111_1_1_1_1_1 | 7.243 | (49.48, -0.00, 50.41) | (49.48, -0.00, 62.01) | Steel |
| 111_1_1_2_1_1 | 0.121 | (49.48, -0.00, 50.41) | (24.48, -0.00, 61.56) | Steel |
| 111_1_1_3_1_1 | 0.121 | (49.48, -0.00, 50.41) | (74.48, -0.00, 61.56) | Steel |
| SEALING_SILICA_GEL_AG_2_1_1 | 5.080 | (49.48, -0.00, 50.41) | (49.60, 0.00, 59.55) | Steel |
| SILICONE_PAD_2_1_1_1 | 2.288 | (49.48, -0.00, 50.41) | (66.98, -11.50, 51.10) | Steel |
| SILICONE_PAD_2_2_1_1 | 2.287 | (49.48, -0.00, 50.41) | (31.98, -11.50, 51.10) | Steel |
| LENS_1_1_1 | 1.097 | (57.67, 10.99, 45.20) | (60.35, 11.00, 45.20) | Steel |
| OE_1_1_1 | 0.038 | (53.01, -0.00, 48.16) | (53.01, -0.00, 52.99) | Steel |
| DS_AS_FOR_1_1_1 | 3.557 | (49.48, 25.00, 50.41) | (49.48, 25.00, 55.95) | Steel |
| DS_AS_FOR_1_1_1 | 3.557 | (49.48, -25.00, 50.41) | (49.48, -25.00, 55.95) | Steel |
| 810_805_518_516_8PIN_1_1_2_1 | 0.496 | (27.17, 20.67, 53.95) | (36.17, 29.86, 46.79) | Steel |
| CX_24P_ASM_3_1_1 | 0.981 | (38.93, -33.30, 57.13) | (38.93, -32.16, 52.74) | Steel |
| GEMINI_336_PCBA_2_1_1 | 11.552 | (49.48, -0.00, 50.41) | (49.21, 0.19, 39.01) | Steel |
| shin_left | 708.394 | (3.12, 16.84, -0.49) | (-142.87, -91.36, 201.78) | RS02 |
| shin_right | 708.393 | (3.12, -16.84, -0.49) | (-142.87, -125.04, -202.76) | RS02 |
| thigh_left | 1847.482 | (3.12, 16.84, -0.49) | (-132.78, -131.69, 79.40) | Aluminum_6061 |
| thigh_right | 1847.482 | (3.12, -16.84, -0.49) | (-132.78, -165.36, -80.38) | Aluminum_6061 |

## Joint Origins Comparison

All origins shown in multiple coordinate systems for debugging.

| Joint | Source | Origin (cm, raw) | Origin (m, picked) | Motion | Axis |
|-------|--------|------------------|-------------------|--------|------|
| Left_Foot | geometryOrOriginOne | goo1(-12.48, 14.23, -24.94) | (-0.1248, 0.1423, -0.2494) | revolute | (-0.0, -1.0, 0.0) |
| Left_Hip_Pitch | geometryOrOriginOne | goo1(-9.38, 14.18, -4.11) | (-0.0938, 0.1418, -0.0411) | revolute | (0.0, 1.0, 0.0) |
| Left_Hip_Roll | geometryOrOriginOne | goo1(-8.51, 7.25, -4.24) | (-0.0851, 0.0725, -0.0424) | revolute | (-1.0, -0.0, -0.0) |
| Left_Hip_Yaw | geometryOrOriginOne | goo1(-10.31, 6.00, 1.18) | (-0.1031, 0.0600, 0.0118) | revolute | (0.0, 0.0, 1.0) |
| Left_Knee | geometryOrOriginOne | goo1(-17.19, 14.18, -12.00) | (-0.1719, 0.1418, -0.1200) | revolute | (-0.0, -1.0, 0.0) |
| Right_Foot | geometryOrOriginOne | goo1(-12.48, -14.28, -24.94) | (-0.1248, -0.1428, -0.2494) | revolute | (0.0, -1.0, -0.0) |
| Right_Hip_Pitch | geometryOrOriginOne | goo1(-9.38, -14.18, -4.11) | (-0.0938, -0.1418, -0.0411) | revolute | (0.0, -1.0, 0.0) |
| Right_Hip_Roll | geometryOrOriginOne | goo1(-8.51, -7.25, -4.24) | (-0.0851, -0.0725, -0.0424) | revolute | (-1.0, -0.0, -0.0) |
| Right_Hip_Yaw | geometryOrOriginOne | goo1(-10.31, -6.00, 1.18) | (-0.1031, -0.0600, 0.0118) | revolute | (0.0, 0.0, 1.0) |
| Right_Knee | geometryOrOriginOne | goo1(-17.19, -14.18, -12.00) | (-0.1719, -0.1418, -0.1200) | revolute | (0.0, -1.0, -0.0) |
| Rigid_14 | geometryOrOriginOne | goo1(4.16, 1.75, 4.03) | (0.0416, 0.0175, 0.0403) | rigid | (0.0, 0.0, 1.0) |
