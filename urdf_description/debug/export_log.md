# Export Log: rivetrobot v6

**Generated:** 2026-10-25T18:47:31.600083

```
[18:46:56] fusion2URDF v3.1.1
[18:46:56] Time: 2026-10-25T18:46:56.207107
[18:46:56] Design: rivetrobot v6
[18:46:56] Components: 46
[18:46:56] 
=== PHASE 1: EXTRACTION ===
[18:46:56]   Document unit: in
[18:46:56] 
=== EXTRACTION: OCCURRENCES ===
[18:46:56]   [LEAF] d=0 Yaw_L
[18:46:56]     path: Yaw_L:1
[18:46:56]     global_pos: (-0.000000, 0.010000, 0.000000) m
[18:46:56]     mass: 0.631727 kg, bodies: 2
[18:46:56]     com_global: (-0.109209, 0.072232, -0.041686) m
[18:46:56]     com_component_local: (-0.109209, 0.062232, -0.041686) m
[18:46:56]     inertia@origin: ixx=4.066389e-03 iyy=9.015467e-03 izz=1.035544e-02 kg·m²
[18:46:56]     inertia@com:    ixx=5.220559e-04 iyy=3.834018e-04 izz=3.745933e-04 kg·m²
[18:46:56]     material: RS06
[18:46:56]     color: RGB(0.98, 0.71, 0.00) [Opaque_250_182_1]
[18:46:56]     bbox: (0.0540 x 0.0845 x 0.0953) m
[18:46:56]   [LEAF] d=0 Yaw_R
[18:46:56]     path: Yaw_R:1
[18:46:56]     global_pos: (0.000000, -0.010000, 0.000000) m
[18:46:56]     mass: 0.631727 kg, bodies: 2
[18:46:56]     com_global: (-0.109209, -0.072631, -0.041686) m
[18:46:56]     com_component_local: (-0.109209, -0.062631, -0.041686) m
[18:46:56]     inertia@origin: ixx=4.097893e-03 iyy=9.015467e-03 izz=1.038695e-02 kg·m²
[18:46:56]     inertia@com:    ixx=5.220905e-04 iyy=3.834018e-04 izz=3.746279e-04 kg·m²
[18:46:56]     material: RS06
[18:46:56]     color: RGB(0.98, 0.71, 0.00) [Opaque_250_182_1]
[18:46:56]     bbox: (0.0540 x 0.0845 x 0.0953) m
[18:46:56]   [LEAF] d=1 BatteryMount
[18:46:56]     path: base_link:1+BatteryMount:1
[18:46:56]     global_pos: (0.000000, 0.000000, 0.000000) m
[18:46:56]     mass: 5.282090 kg, bodies: 7
[18:46:56]     com_global: (-0.200194, -0.000000, 0.004168) m
[18:46:56]     com_component_local: (-0.200194, -0.000000, 0.004168) m
[18:46:56]     inertia@origin: ixx=1.222422e-02 iyy=2.216992e-01 izz=2.168973e-01 kg·m²
[18:46:56]     inertia@com:    ixx=1.213248e-02 iyy=9.913968e-03 izz=5.203732e-03 kg·m²
[18:46:56]     material: BatterySidePlate
[18:46:56]     color: RGB(0.31, 0.31, 0.31) [Plate]
[18:46:56]     bbox: (0.0781 x 0.1180 x 0.1697) m
[18:46:56]   [SUBASM+BODY] d=0 base_link
[18:46:56]     path: base_link:1
[18:46:56]     global_pos: (0.000000, 0.000000, 0.000000) m
[18:46:56]     mass: 7.241954 kg, bodies: 25
[18:46:56]     com_global: (-0.083491, -0.000151, 0.020761) m
[18:46:56]     com_component_local: (-0.083491, -0.000151, 0.020761) m
[18:46:56]     inertia@origin: ixx=4.535661e-02 iyy=1.181978e-01 izz=1.217185e-01 kg·m²
[18:46:56]     inertia@com:    ixx=4.223514e-02 iyy=6.459412e-02 izz=7.123597e-02 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.20, 0.20, 0.20) [Opaque_50_50_50]
[18:46:56]     bbox: (0.3515 x 0.2169 x 0.2418) m
[18:46:56]   [LEAF] d=0 thigh_right
[18:46:56]     path: thigh_right:1
[18:46:56]     global_pos: (0.003117, -0.016839, -0.000488) m
[18:46:56]     mass: 1.847482 kg, bodies: 4
[18:46:56]     com_global: (-0.132781, -0.165364, -0.080381) m
[18:46:56]     com_component_local: (-0.135898, -0.148525, -0.079892) m
[18:46:56]     inertia@origin: ixx=5.728162e-02 iyy=5.413435e-02 izz=7.956662e-02 kg·m²
[18:46:56]     inertia@com:    ixx=4.734522e-03 iyy=8.222514e-03 izz=4.691757e-03 kg·m²
[18:46:56]     material: Aluminum_6061
[18:46:56]     color: RGB(0.96, 0.96, 0.96) [Aluminum_Satin]
[18:46:56]     bbox: (0.1872 x 0.0566 x 0.1885) m
[18:46:56]   [LEAF] d=0 foot_right
[18:46:56]     path: foot_right:1
[18:46:56]     global_pos: (0.003117, -0.017339, -0.000488) m
[18:46:56]     mass: 0.066062 kg, bodies: 1
[18:46:56]     com_global: (-0.098805, -0.141182, -0.288189) m
[18:46:56]     com_component_local: (-0.101921, -0.123844, -0.287701) m
[18:46:56]     inertia@origin: ixx=6.532383e-03 iyy=6.325516e-03 izz=1.852797e-03 kg·m²
[18:46:56]     inertia@com:    ixx=5.107256e-05 iyy=1.711682e-04 izz=1.533255e-04 kg·m²
[18:46:56]     material: Foot
[18:46:56]     color: RGB(0.31, 0.31, 0.31) [Plate]
[18:46:56]     bbox: (0.1700 x 0.0541 x 0.0944) m
[18:46:56]   [LEAF] d=0 shin_right
[18:46:56]     path: shin_right:1
[18:46:56]     global_pos: (0.003117, -0.016839, -0.000488) m
[18:46:56]     mass: 0.708393 kg, bodies: 5
[18:46:56]     com_global: (-0.142872, -0.125038, -0.202755) m
[18:46:56]     com_component_local: (-0.145988, -0.108199, -0.202267) m
[18:46:56]     inertia@origin: ixx=4.013654e-02 iyy=4.743277e-02 izz=2.407619e-02 kg·m²
[18:46:56]     inertia@com:    ixx=2.861626e-03 iyy=3.353418e-03 izz=6.852746e-04 kg·m²
[18:46:56]     material: RS02
[18:46:56]     color: RGB(0.54, 0.54, 0.54) [Aluminum_Anodized_Glossy_Grey]
[18:46:56]     bbox: (0.1254 x 0.0454 x 0.1999) m
[18:46:56]   [LEAF] d=0 arm_right
[18:46:56]     path: arm_right:1
[18:46:56]     global_pos: (0.000000, -0.016839, -0.000000) m
[18:46:56]     mass: 0.099578 kg, bodies: 1
[18:46:56]     com_global: (-0.082891, -0.101781, -0.042327) m
[18:46:56]     com_component_local: (-0.082891, -0.084943, -0.042327) m
[18:46:56]     inertia@origin: ixx=1.002328e-03 iyy=8.865217e-04 izz=1.500040e-03 kg·m²
[18:46:56]     inertia@com:    ixx=1.054438e-04 iyy=2.392334e-05 izz=9.735478e-05 kg·m²
[18:46:56]     material: Aluminum_6061
[18:46:56]     color: RGB(0.85, 0.35, 0.35) [Aluminum_Anodized_Rough_Red]
[18:46:56]     bbox: (0.0422 x 0.0928 x 0.0470) m
[18:46:56]   [LEAF] d=0 thigh_left
[18:46:56]     path: thigh_left:1
[18:46:56]     global_pos: (0.003117, 0.016839, -0.000488) m
[18:46:56]     mass: 1.847482 kg, bodies: 4
[18:46:56]     com_global: (-0.132782, -0.131687, 0.079404) m
[18:46:56]     com_component_local: (-0.135898, -0.148525, 0.079893) m
[18:46:56]     inertia@origin: ixx=5.728182e-02 iyy=5.413475e-02 izz=7.956686e-02 kg·m²
[18:46:56]     inertia@com:    ixx=4.734527e-03 iyy=8.222554e-03 izz=4.691792e-03 kg·m²
[18:46:56]     material: Aluminum_6061
[18:46:56]     color: RGB(0.96, 0.96, 0.96) [Aluminum_Satin]
[18:46:56]     bbox: (0.1872 x 0.0566 x 0.1885) m
[18:46:56]   [LEAF] d=0 foot_left
[18:46:56]     path: foot_left:1
[18:46:56]     global_pos: (0.003117, 0.016839, -0.000488) m
[18:46:56]     mass: 0.066062 kg, bodies: 1
[18:46:56]     com_global: (-0.098805, -0.107005, 0.287212) m
[18:46:56]     com_component_local: (-0.101921, -0.123844, 0.287701) m
[18:46:56]     inertia@origin: ixx=6.532383e-03 iyy=6.325516e-03 izz=1.852797e-03 kg·m²
[18:46:56]     inertia@com:    ixx=5.107256e-05 iyy=1.711682e-04 izz=1.533255e-04 kg·m²
[18:46:56]     material: Foot
[18:46:56]     color: RGB(0.31, 0.31, 0.31) [Plate]
[18:46:56]     bbox: (0.1700 x 0.0541 x 0.0944) m
[18:46:56]   [LEAF] d=0 shin_left
[18:46:56]     path: shin_left:1
[18:46:56]     global_pos: (0.003117, 0.016839, -0.000488) m
[18:46:56]     mass: 0.708394 kg, bodies: 5
[18:46:56]     com_global: (-0.142872, -0.091361, 0.201778) m
[18:46:56]     com_component_local: (-0.145988, -0.108199, 0.202267) m
[18:46:56]     inertia@origin: ixx=4.013660e-02 iyy=4.743283e-02 izz=2.407620e-02 kg·m²
[18:46:56]     inertia@com:    ixx=2.861628e-03 iyy=3.353421e-03 izz=6.852758e-04 kg·m²
[18:46:56]     material: RS02
[18:46:56]     color: RGB(0.54, 0.54, 0.54) [Aluminum_Anodized_Glossy_Grey]
[18:46:56]     bbox: (0.1254 x 0.0454 x 0.1999) m
[18:46:56]   [LEAF] d=0 arm_left
[18:46:56]     path: arm_left:1
[18:46:56]     global_pos: (0.000000, 0.016839, -0.000000) m
[18:46:56]     mass: 0.099578 kg, bodies: 1
[18:46:56]     com_global: (-0.082891, -0.068105, 0.042327) m
[18:46:56]     com_component_local: (-0.082891, -0.084943, 0.042327) m
[18:46:56]     inertia@origin: ixx=1.002332e-03 iyy=8.865244e-04 izz=1.500046e-03 kg·m²
[18:46:56]     inertia@com:    ixx=1.054441e-04 iyy=2.392344e-05 izz=9.735515e-05 kg·m²
[18:46:56]     material: Aluminum_6061
[18:46:56]     color: RGB(0.85, 0.35, 0.35) [Aluminum_Anodized_Rough_Red]
[18:46:56]     bbox: (0.0422 x 0.0928 x 0.0470) m
[18:46:56]   [LEAF] d=4 00_2_35673_1_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+00_2-35673_1_1:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]     mass: 0.134570 kg, bodies: 1
[18:46:56]     com_global: (0.049498, 0.000310, 0.044896) m
[18:46:56]     com_component_local: (0.000015, 0.000310, -0.005511) m
[18:46:56]     inertia@origin: ixx=2.555560e-05 iyy=1.116031e-04 izz=1.043885e-04 kg·m²
[18:46:56]     inertia@com:    ixx=2.145554e-05 iyy=1.075160e-04 izz=1.043756e-04 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0895 x 0.0250 x 0.0300) m
[18:46:56]   [LEAF] d=4 00_2_36696_1_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+00_2-36696_1_1:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]     mass: 0.007785 kg, bodies: 3
[18:46:56]     com_global: (0.049419, 0.000000, 0.061244) m
[18:46:56]     com_component_local: (-0.000064, 0.000000, 0.010837) m
[18:46:56]     inertia@origin: ixx=1.134816e-06 iyy=5.018111e-06 izz=4.323666e-06 kg·m²
[18:46:56]     inertia@com:    ixx=2.204855e-07 iyy=4.103749e-06 izz=4.323634e-06 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0834 x 0.0187 x 0.0030) m
[18:46:56]   [LEAF] d=5 SILICONE_PAD_2_1_1_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+SILICONE_PAD_2_ASM_1_ASM_1_ASM:1+SILICONE_PAD_2_1_1_1:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]     mass: 0.002288 kg, bodies: 1
[18:46:56]     com_global: (0.066983, -0.011504, 0.051103) m
[18:46:56]     com_component_local: (0.017500, -0.011504, 0.000696) m
[18:46:56]     inertia@origin: ixx=3.724931e-07 iyy=7.775708e-07 izz=1.023455e-06 kg·m²
[18:46:56]     inertia@com:    ixx=6.860939e-08 iyy=7.587322e-08 izz=2.008699e-08 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0090 x 0.0100 x 0.0195) m
[18:46:56]   [LEAF] d=5 SILICONE_PAD_2_2_1_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+SILICONE_PAD_2_ASM_1_ASM_1_ASM:1+SILICONE_PAD_2_2_1_1:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]     mass: 0.002287 kg, bodies: 1
[18:46:56]     com_global: (0.031983, -0.011505, 0.051102) m
[18:46:56]     com_component_local: (-0.017500, -0.011505, 0.000695) m
[18:46:56]     inertia@origin: ixx=3.724656e-07 iyy=7.774947e-07 izz=1.023360e-06 kg·m²
[18:46:56]     inertia@com:    ixx=6.860555e-08 iyy=7.586993e-08 izz=2.008618e-08 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0090 x 0.0100 x 0.0195) m
[18:46:56]   [SUBASM] d=4 SILICONE_PAD_2_ASM_1_ASM_1_ASM
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+SILICONE_PAD_2_ASM_1_ASM_1_ASM:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]   [LEAF] d=4 SEALING_SILICA_GEL_AG_2_1_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+SEALING_SILICA_GEL-AG_2_1_1:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]     mass: 0.005080 kg, bodies: 1
[18:46:56]     com_global: (0.049605, 0.000000, 0.059555) m
[18:46:56]     com_component_local: (0.000122, 0.000000, 0.009148) m
[18:46:56]     inertia@origin: ixx=5.205280e-07 iyy=1.899338e-06 izz=1.566256e-06 kg·m²
[18:46:56]     inertia@com:    ixx=9.544164e-08 iyy=1.474176e-06 izz=1.566180e-06 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0646 x 0.0146 x 0.0023) m
[18:46:56]   [LEAF] d=5 111_1_1_1_1_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+111_1_1_ASM_1_ASM_1_ASM:1+111_1_1_1_1_1:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]     mass: 0.007243 kg, bodies: 1
[18:46:56]     com_global: (0.049483, -0.000000, 0.062007) m
[18:46:56]     com_component_local: (-0.000000, -0.000000, 0.011600) m
[18:46:56]     inertia@origin: ixx=1.209610e-06 iyy=5.655167e-06 izz=4.914654e-06 kg·m²
[18:46:56]     inertia@com:    ixx=2.349348e-07 iyy=4.680491e-06 izz=4.914654e-06 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0833 x 0.0186 x 0.0008) m
[18:46:56]   [LEAF] d=5 111_1_1_2_1_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+111_1_1_ASM_1_ASM_1_ASM:1+111_1_1_2_1_1:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]     mass: 0.000121 kg, bodies: 1
[18:46:56]     com_global: (0.024483, -0.000000, 0.061557) m
[18:46:56]     com_component_local: (-0.025000, -0.000000, 0.011150) m
[18:46:56]     inertia@origin: ixx=1.650371e-08 iyy=9.202956e-08 izz=7.848646e-08 kg·m²
[18:46:56]     inertia@com:    ixx=1.480407e-09 iyy=1.480407e-09 izz=2.960613e-09 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0140 x 0.0140 x 0.0001) m
[18:46:56]   [LEAF] d=5 111_1_1_3_1_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+111_1_1_ASM_1_ASM_1_ASM:1+111_1_1_3_1_1:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]     mass: 0.000121 kg, bodies: 1
[18:46:56]     com_global: (0.074483, -0.000000, 0.061557) m
[18:46:56]     com_component_local: (0.025000, 0.000000, 0.011150) m
[18:46:56]     inertia@origin: ixx=1.650371e-08 iyy=9.202956e-08 izz=7.848646e-08 kg·m²
[18:46:56]     inertia@com:    ixx=1.480407e-09 iyy=1.480407e-09 izz=2.960613e-09 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0140 x 0.0140 x 0.0001) m
[18:46:56]   [SUBASM] d=4 111_1_1_ASM_1_ASM_1_ASM
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+111_1_1_ASM_1_ASM_1_ASM:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]   [SUBASM] d=3 UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]   [LEAF] d=4 BRACKET_MAX_2_1_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+BRACKET_ASM_1_ASM_3_ASM_1_ASM:1+BRACKET_MAX_2_1_1:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]     mass: 0.044185 kg, bodies: 2
[18:46:56]     com_global: (0.048239, -0.000578, 0.044217) m
[18:46:56]     com_component_local: (-0.001243, -0.000578, -0.006190) m
[18:46:56]     inertia@origin: ixx=3.477127e-06 iyy=2.483773e-05 izz=2.421983e-05 kg·m²
[18:46:56]     inertia@com:    ixx=1.769262e-06 iyy=2.307632e-05 izz=2.413678e-05 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0810 x 0.0227 x 0.0173) m
[18:46:56]   [LEAF] d=5 SCREW_CM2X035_035X1_1_3_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+BRACKET_ASM_1_ASM_3_ASM_1_ASM:1+1_ASM_2_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:1
[18:46:56]     global_pos: (0.043659, -0.026500, 0.063601) m
[18:46:56]     mass: 0.000191 kg, bodies: 1
[18:46:56]     com_global: (0.043659, -0.026500, 0.062198) m
[18:46:56]     com_component_local: (-0.000000, 0.000000, -0.001403) m
[18:46:56]     inertia@origin: ixx=1.119827e-09 iyy=1.119827e-09 izz=1.797679e-10 kg·m²
[18:46:56]     inertia@com:    ixx=7.428576e-10 iyy=7.428575e-10 izz=1.797679e-10 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0035 x 0.0035 x 0.0061) m
[18:46:56]   [LEAF] d=5 SCREW_CM2X035_035X1_1_3_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+BRACKET_ASM_1_ASM_3_ASM_1_ASM:1+1_ASM_2_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:2
[18:46:56]     global_pos: (0.035064, -0.026500, 0.050106) m
[18:46:56]     mass: 0.000191 kg, bodies: 1
[18:46:56]     com_global: (0.035064, -0.026500, 0.048702) m
[18:46:56]     com_component_local: (-0.000000, 0.000000, -0.001403) m
[18:46:56]     inertia@origin: ixx=1.119827e-09 iyy=1.119827e-09 izz=1.797679e-10 kg·m²
[18:46:56]     inertia@com:    ixx=7.428576e-10 iyy=7.428575e-10 izz=1.797679e-10 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0035 x 0.0035 x 0.0061) m
[18:46:56]   [SUBASM] d=4 1_ASM_2_ASM_1_ASM_1_ASM
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+BRACKET_ASM_1_ASM_3_ASM_1_ASM:1+1_ASM_2_ASM_1_ASM_1_ASM:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]   [SUBASM] d=3 BRACKET_ASM_1_ASM_3_ASM_1_ASM
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+BRACKET_ASM_1_ASM_3_ASM_1_ASM:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]   [LEAF] d=4 PRT0002_2_1_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+PRT0002_2_1_1:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]     mass: 0.001273 kg, bodies: 1
[18:46:56]     com_global: (0.082743, -0.001955, 0.036604) m
[18:46:56]     com_component_local: (0.033260, -0.001955, -0.013803) m
[18:46:56]     inertia@origin: ixx=2.838803e-07 iyy=1.660576e-06 izz=1.455489e-06 kg·m²
[18:46:56]     inertia@com:    ixx=3.653633e-08 iyy=1.023626e-08 izz=4.276098e-08 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0115 x 0.0186 x 0.0055) m
[18:46:56]   [LEAF] d=5 SCREW_CM2X035_035X1_1_3_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:3
[18:46:56]     global_pos: (0.044742, -0.039900, 0.058880) m
[18:46:56]     mass: 0.000191 kg, bodies: 1
[18:46:56]     com_global: (0.044742, -0.039900, 0.057477) m
[18:46:56]     com_component_local: (-0.000000, 0.000000, -0.001403) m
[18:46:56]     inertia@origin: ixx=1.119827e-09 iyy=1.119827e-09 izz=1.797679e-10 kg·m²
[18:46:56]     inertia@com:    ixx=7.428576e-10 iyy=7.428575e-10 izz=1.797679e-10 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0035 x 0.0035 x 0.0061) m
[18:46:56]   [LEAF] d=5 SCREW_CM2X035_035X1_1_3_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:4
[18:46:56]     global_pos: (0.044742, 0.039900, 0.058880) m
[18:46:56]     mass: 0.000191 kg, bodies: 1
[18:46:56]     com_global: (0.044742, 0.039900, 0.057477) m
[18:46:56]     com_component_local: (-0.000000, 0.000000, -0.001403) m
[18:46:56]     inertia@origin: ixx=1.119827e-09 iyy=1.119827e-09 izz=1.797679e-10 kg·m²
[18:46:56]     inertia@com:    ixx=7.428576e-10 iyy=7.428575e-10 izz=1.797679e-10 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0035 x 0.0035 x 0.0061) m
[18:46:56]   [LEAF] d=5 SCREW_CM2X035_035X1_1_3_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:5
[18:46:56]     global_pos: (0.039800, 0.039900, 0.051120) m
[18:46:56]     mass: 0.000191 kg, bodies: 1
[18:46:56]     com_global: (0.039800, 0.039900, 0.049717) m
[18:46:56]     com_component_local: (-0.000000, 0.000000, -0.001403) m
[18:46:56]     inertia@origin: ixx=1.119827e-09 iyy=1.119827e-09 izz=1.797679e-10 kg·m²
[18:46:56]     inertia@com:    ixx=7.428576e-10 iyy=7.428575e-10 izz=1.797679e-10 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0035 x 0.0035 x 0.0061) m
[18:46:56]   [LEAF] d=5 SCREW_CM2X035_035X1_1_3_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:6
[18:46:56]     global_pos: (0.039800, -0.039900, 0.051120) m
[18:46:56]     mass: 0.000191 kg, bodies: 1
[18:46:56]     com_global: (0.039800, -0.039900, 0.049717) m
[18:46:56]     com_component_local: (-0.000000, 0.000000, -0.001403) m
[18:46:56]     inertia@origin: ixx=1.119827e-09 iyy=1.119827e-09 izz=1.797679e-10 kg·m²
[18:46:56]     inertia@com:    ixx=7.428576e-10 iyy=7.428575e-10 izz=1.797679e-10 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0035 x 0.0035 x 0.0061) m
[18:46:56]   [SUBASM] d=4 2_ASM_3_ASM_1_ASM_1_ASM
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]   [SUBASM] d=3 LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]   [SUBASM] d=2 GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]   [LEAF] d=5 DS_AS_FOR_1_1_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+_I02_ASM_3_ASM_1_ASM:1+DS-AS_FOR_1_1_1:1
[18:46:56]     global_pos: (0.049483, 0.025000, 0.050407) m
[18:46:56]     mass: 0.003557 kg, bodies: 2
[18:46:56]     com_global: (0.049483, 0.025000, 0.055947) m
[18:46:56]     com_component_local: (-0.000000, -0.000000, 0.005540) m
[18:46:56]     inertia@origin: ixx=1.471671e-07 iyy=1.471694e-07 izz=3.407679e-08 kg·m²
[18:46:56]     inertia@com:    ixx=3.799465e-08 iyy=3.799698e-08 izz=3.407679e-08 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.50, 0.25, 0.25) [Opaque_128_64_64]
[18:46:56]     bbox: (0.0200 x 0.0200 x 0.0132) m
[18:46:56]   [SUBASM] d=4 I02_ASM_3_ASM_1_ASM
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+_I02_ASM_3_ASM_1_ASM:1
[18:46:56]     global_pos: (0.049483, 0.025000, 0.050407) m
[18:46:56]   [LEAF] d=4 LENS_1_1_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+LENS__1_1_1:1
[18:46:56]     global_pos: (0.057667, 0.010995, 0.045200) m
[18:46:56]     mass: 0.001097 kg, bodies: 2
[18:46:56]     com_global: (0.060354, 0.010995, 0.045201) m
[18:46:56]     com_component_local: (0.002687, 0.000000, 0.000000) m
[18:46:56]     inertia@origin: ixx=5.247661e-09 iyy=1.271461e-08 izz=1.271599e-08 kg·m²
[18:46:56]     inertia@com:    ixx=5.247661e-09 iyy=4.793726e-09 izz=4.795102e-09 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.50, 0.25, 0.25) [Opaque_128_64_64]
[18:46:56]     bbox: (0.0082 x 0.0100 x 0.0100) m
[18:46:56]   [LEAF] d=4 OE_1_1_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+OE_1_1_1:1
[18:46:56]     global_pos: (0.053008, -0.000000, 0.048162) m
[18:46:56]     mass: 0.000038 kg, bodies: 3
[18:46:56]     com_global: (0.053009, -0.000000, 0.052987) m
[18:46:56]     com_component_local: (0.000001, -0.000000, 0.004825) m
[18:46:56]     inertia@origin: ixx=9.131799e-10 iyy=9.131458e-10 izz=6.724949e-11 kg·m²
[18:46:56]     inertia@com:    ixx=3.427814e-11 iyy=3.424400e-11 izz=6.724946e-11 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.76, 0.77, 0.75) [Opaque_193_196_192]
[18:46:56]     bbox: (0.0200 x 0.0200 x 0.0071) m
[18:46:56]   [LEAF] d=5 DS_AS_FOR_1_1_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+_I02_ASM_3_ASM_1_ASM:2+DS-AS_FOR_1_1_1:1
[18:46:56]     global_pos: (0.049483, -0.025000, 0.050407) m
[18:46:56]     mass: 0.003557 kg, bodies: 2
[18:46:56]     com_global: (0.049483, -0.025000, 0.055947) m
[18:46:56]     com_component_local: (-0.000000, -0.000000, 0.005540) m
[18:46:56]     inertia@origin: ixx=1.471671e-07 iyy=1.471694e-07 izz=3.407679e-08 kg·m²
[18:46:56]     inertia@com:    ixx=3.799465e-08 iyy=3.799698e-08 izz=3.407679e-08 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.50, 0.25, 0.25) [Opaque_128_64_64]
[18:46:56]     bbox: (0.0200 x 0.0200 x 0.0132) m
[18:46:56]   [SUBASM] d=4 I02_ASM_3_ASM_1_ASM
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+_I02_ASM_3_ASM_1_ASM:2
[18:46:56]     global_pos: (0.049483, -0.025000, 0.050407) m
[18:46:56]   [SUBASM] d=3 GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]   [LEAF] d=4 GEMINI_336_PCBA_2_1_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1+GEMINI_336_PCBA_2_1_1:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]     mass: 0.011552 kg, bodies: 1
[18:46:56]     com_global: (0.049212, 0.000194, 0.039007) m
[18:46:56]     com_component_local: (-0.000270, 0.000194, -0.011400) m
[18:46:56]     inertia@origin: ixx=1.861650e-06 iyy=5.835279e-06 izz=4.691682e-06 kg·m²
[18:46:56]     inertia@com:    ixx=3.599766e-07 iyy=4.333199e-06 izz=4.690403e-06 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0665 x 0.0200 x 0.0012) m
[18:46:56]   [LEAF] d=4 CX_24P_ASM_3_1_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1+CX-24P_ASM_3_1_1:1
[18:46:56]     global_pos: (0.038927, -0.033300, 0.057130) m
[18:46:56]     mass: 0.000981 kg, bodies: 8
[18:46:56]     com_global: (0.038933, -0.032158, 0.052738) m
[18:46:56]     com_component_local: (0.000006, 0.001142, -0.004392) m
[18:46:56]     inertia@origin: ixx=2.567368e-08 iyy=2.996322e-08 izz=8.445502e-09 kg·m²
[18:46:56]     inertia@com:    ixx=5.470414e-09 iyy=1.103949e-08 izz=7.165887e-09 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0089 x 0.0038 x 0.0082) m
[18:46:56]   [LEAF] d=6 810_805_518_516_8PIN_1_1_2_1
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1+810_805_518_516_8PIN_ASM_1_ASM__ASM:1+PART2_ASM_1_ASM_1_ASM_1_ASM:1+810_805_518_516_8PIN_1_1_2_1:1
[18:46:56]     global_pos: (0.027171, 0.020675, 0.053947) m
[18:46:56]     mass: 0.000496 kg, bodies: 1
[18:46:56]     com_global: (0.036171, 0.029860, 0.046786) m
[18:46:56]     com_component_local: (0.009000, 0.009185, -0.007160) m
[18:46:56]     inertia@origin: ixx=6.853168e-08 iyy=7.093340e-08 izz=8.761373e-08 kg·m²
[18:46:56]     inertia@com:    ixx=1.207738e-09 iyy=5.277843e-09 izz=5.531602e-09 kg·m²
[18:46:56]     material: Steel
[18:46:56]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[18:46:56]     bbox: (0.0100 x 0.0050 x 0.0030) m
[18:46:56]   [SUBASM] d=5 PART2_ASM_1_ASM_1_ASM_1_ASM
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1+810_805_518_516_8PIN_ASM_1_ASM__ASM:1+PART2_ASM_1_ASM_1_ASM_1_ASM:1
[18:46:56]     global_pos: (0.027171, 0.020675, 0.053947) m
[18:46:56]   [SUBASM] d=4 810_805_518_516_8PIN_ASM_1_ASM_ASM
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1+810_805_518_516_8PIN_ASM_1_ASM__ASM:1
[18:46:56]     global_pos: (0.027171, 0.020675, 0.053947) m
[18:46:56]   [SUBASM] d=3 PCBA_ASM_ASM_1_ASM
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]   [SUBASM] d=2 GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]   [SUBASM] d=1 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM
[18:46:56]     path: imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]   [SUBASM] d=0 imu
[18:46:56]     path: imu:1
[18:46:56]     global_pos: (0.049483, -0.000000, 0.050407) m
[18:46:56]   Extracted 52 occurrences
[18:46:56] 
=== EXTRACTION: JOINTS ===
[18:46:56]   WARNING:   regular joint in component 'rivetrobot v6': failed to read geometry: 'Joint' object has no attribute 'geometry'
[18:46:56]   [REGULAR in rivetrobot] Right_Hip_Yaw
[18:46:56]     parent(occ2): base_link path=base_link:1
[18:46:56]     child(occ1):  Yaw_R path=Yaw_R:1
[18:46:56]     geometryOrOriginOne: (-10.3104, -6.0000, 1.1836) cm
[18:46:56]     geometryOrOriginTwo: (-10.3104, -6.0000, 1.1836) cm
[18:46:56]     occ1.transform: (0.0000, -1.0000, 0.0000) cm (ctx_depth=0)
[18:46:56]     occ1.global:    (0.0000, -1.0000, 0.0000) cm
[18:46:56]     occ2.transform: (0.0000, 0.0000, 0.0000) cm (ctx_depth=0)
[18:46:56]     occ2.global:    (0.0000, 0.0000, 0.0000) cm
[18:46:56]  -> origin_global: (-0.103104, -0.060000, 0.011836) m [via geometryOrOriginOne]
[18:46:56]     motion: revolute, axis: (0.000, 0.000, 1.000)
[18:46:56]     rotation limits: [-0.2618, 0.3491] rad
[18:46:56]   WARNING:   regular joint in component 'rivetrobot v6': failed to read geometry: 'Joint' object has no attribute 'geometry'
[18:46:56]   [REGULAR in rivetrobot] Left_Hip_Yaw
[18:46:56]     parent(occ2): base_link path=base_link:1
[18:46:56]     child(occ1):  Yaw_L path=Yaw_L:1
[18:46:56]     geometryOrOriginOne: (-10.3104, 6.0000, 1.1836) cm
[18:46:56]     geometryOrOriginTwo: (-10.3104, 6.0000, 1.1836) cm
[18:46:56]     occ1.transform: (-0.0000, 1.0000, 0.0000) cm (ctx_depth=0)
[18:46:56]     occ1.global:    (-0.0000, 1.0000, 0.0000) cm
[18:46:56]     occ2.transform: (0.0000, 0.0000, 0.0000) cm (ctx_depth=0)
[18:46:56]     occ2.global:    (0.0000, 0.0000, 0.0000) cm
[18:46:56]  -> origin_global: (-0.103104, 0.060000, 0.011836) m [via geometryOrOriginOne]
[18:46:56]     motion: revolute, axis: (0.000, 0.000, 1.000)
[18:46:56]     rotation limits: [-0.3491, 0.2618] rad
[18:46:56]   WARNING:   regular joint in component 'rivetrobot v6': failed to read geometry: 'Joint' object has no attribute 'geometry'
[18:46:56]   [REGULAR in rivetrobot] Right_Hip_Roll
[18:46:56]     parent(occ2): Yaw_R path=Yaw_R:1
[18:46:56]     child(occ1):  arm_right path=arm_right:1
[18:46:56]     geometryOrOriginOne: (-8.5104, -7.2500, -4.2448) cm
[18:46:56]     geometryOrOriginTwo: (-8.5104, -7.2500, -4.2448) cm
[18:46:56]     occ1.transform: (0.0000, -1.6839, -0.0000) cm (ctx_depth=0)
[18:46:56]     occ1.global:    (0.0000, -1.6839, -0.0000) cm
[18:46:56]     occ2.transform: (0.0000, -1.0000, 0.0000) cm (ctx_depth=0)
[18:46:56]     occ2.global:    (0.0000, -1.0000, 0.0000) cm
[18:46:56]  -> origin_global: (-0.085104, -0.072500, -0.042448) m [via geometryOrOriginOne]
[18:46:56]     motion: revolute, axis: (-1.000, -0.000, -0.000)
[18:46:56]     rotation limits: [-0.3491, 0.3491] rad
[18:46:56]   WARNING:   regular joint in component 'rivetrobot v6': failed to read geometry: 'Joint' object has no attribute 'geometry'
[18:46:56]   [REGULAR in rivetrobot] Left_Hip_Roll
[18:46:56]     parent(occ2): Yaw_L path=Yaw_L:1
[18:46:56]     child(occ1):  arm_left path=arm_left:1
[18:46:56]     geometryOrOriginOne: (-8.5104, 7.2500, -4.2448) cm
[18:46:56]     geometryOrOriginTwo: (-8.5104, 7.2500, -4.2448) cm
[18:46:56]     occ1.transform: (0.0000, 1.6839, -0.0000) cm (ctx_depth=0)
[18:46:56]     occ1.global:    (0.0000, 1.6839, -0.0000) cm
[18:46:56]     occ2.transform: (-0.0000, 1.0000, 0.0000) cm (ctx_depth=0)
[18:46:56]     occ2.global:    (-0.0000, 1.0000, 0.0000) cm
[18:46:56]  -> origin_global: (-0.085104, 0.072500, -0.042448) m [via geometryOrOriginOne]
[18:46:56]     motion: revolute, axis: (-1.000, -0.000, -0.000)
[18:46:56]     rotation limits: [-0.3491, 0.3491] rad
[18:46:56]   WARNING:   regular joint in component 'rivetrobot v6': failed to read geometry: 'Joint' object has no attribute 'geometry'
[18:46:56]   [REGULAR in rivetrobot] Right_Knee
[18:46:56]     parent(occ2): thigh_right path=thigh_right:1
[18:46:56]     child(occ1):  shin_right path=shin_right:1
[18:46:56]     geometryOrOriginOne: (-17.1883, -14.1750, -11.9995) cm
[18:46:56]     geometryOrOriginTwo: (-17.1883, -14.1750, -11.9995) cm
[18:46:56]     occ1.transform: (0.3117, -1.6839, -0.0488) cm (ctx_depth=0)
[18:46:56]     occ1.global:    (0.3117, -1.6839, -0.0488) cm
[18:46:56]     occ2.transform: (0.3117, -1.6839, -0.0488) cm (ctx_depth=0)
[18:46:56]     occ2.global:    (0.3117, -1.6839, -0.0488) cm
[18:46:56]  -> origin_global: (-0.171883, -0.141750, -0.119995) m [via geometryOrOriginOne]
[18:46:56]     motion: revolute, axis: (0.000, -1.000, -0.000)
[18:46:56]     rotation limits: [-0.5236, 0.6109] rad
[18:46:56]   WARNING:   regular joint in component 'rivetrobot v6': failed to read geometry: 'Joint' object has no attribute 'geometry'
[18:46:56]   [REGULAR in rivetrobot] Left_Foot
[18:46:56]     parent(occ2): shin_left path=shin_left:1
[18:46:56]     child(occ1):  foot_left path=foot_left:1
[18:46:56]     geometryOrOriginOne: (-12.4791, 14.2250, -24.9382) cm
[18:46:56]     geometryOrOriginTwo: (-12.4791, 14.2250, -24.9382) cm
[18:46:56]     occ1.transform: (0.3117, 1.6839, -0.0488) cm (ctx_depth=0)
[18:46:56]     occ1.global:    (0.3117, 1.6839, -0.0488) cm
[18:46:56]     occ2.transform: (0.3117, 1.6839, -0.0488) cm (ctx_depth=0)
[18:46:56]     occ2.global:    (0.3117, 1.6839, -0.0488) cm
[18:46:56]  -> origin_global: (-0.124791, 0.142250, -0.249382) m [via geometryOrOriginOne]
[18:46:56]     motion: revolute, axis: (-0.000, -1.000, 0.000)
[18:46:56]     rotation limits: [-0.2618, 0.5236] rad
[18:46:56]   WARNING:   regular joint in component 'rivetrobot v6': failed to read geometry: 'Joint' object has no attribute 'geometry'
[18:46:56]   [REGULAR in rivetrobot] Left_Knee
[18:46:56]     parent(occ2): thigh_left path=thigh_left:1
[18:46:56]     child(occ1):  shin_left path=shin_left:1
[18:46:56]     geometryOrOriginOne: (-17.1883, 14.1750, -11.9995) cm
[18:46:56]     geometryOrOriginTwo: (-17.1883, 14.1750, -11.9995) cm
[18:46:56]     occ1.transform: (0.3117, 1.6839, -0.0488) cm (ctx_depth=0)
[18:46:56]     occ1.global:    (0.3117, 1.6839, -0.0488) cm
[18:46:56]     occ2.transform: (0.3117, 1.6839, -0.0488) cm (ctx_depth=0)
[18:46:56]     occ2.global:    (0.3117, 1.6839, -0.0488) cm
[18:46:56]  -> origin_global: (-0.171883, 0.141750, -0.119995) m [via geometryOrOriginOne]
[18:46:56]     motion: revolute, axis: (-0.000, -1.000, 0.000)
[18:46:56]     rotation limits: [-0.5236, 0.6109] rad
[18:46:56]   WARNING:   regular joint in component 'rivetrobot v6': failed to read geometry: 'Joint' object has no attribute 'geometry'
[18:46:56]   [REGULAR in rivetrobot] Right_Foot
[18:46:56]     parent(occ2): shin_right path=shin_right:1
[18:46:56]     child(occ1):  foot_right path=foot_right:1
[18:46:56]     geometryOrOriginOne: (-12.4791, -14.2750, -24.9382) cm
[18:46:56]     geometryOrOriginTwo: (-12.4791, -14.2750, -24.9382) cm
[18:46:56]     occ1.transform: (0.3117, -1.7339, -0.0488) cm (ctx_depth=0)
[18:46:56]     occ1.global:    (0.3117, -1.7339, -0.0488) cm
[18:46:56]     occ2.transform: (0.3117, -1.6839, -0.0488) cm (ctx_depth=0)
[18:46:56]     occ2.global:    (0.3117, -1.6839, -0.0488) cm
[18:46:56]  -> origin_global: (-0.124791, -0.142750, -0.249382) m [via geometryOrOriginOne]
[18:46:56]     motion: revolute, axis: (0.000, -1.000, -0.000)
[18:46:56]     rotation limits: [-0.2618, 0.5236] rad
[18:46:56]   WARNING:   regular joint in component 'rivetrobot v6': failed to read geometry: 'Joint' object has no attribute 'geometry'
[18:46:56]   [REGULAR in rivetrobot] Right_Hip_Pitch
[18:46:56]     parent(occ2): arm_right path=arm_right:1
[18:46:56]     child(occ1):  thigh_right path=thigh_right:1
[18:46:56]     geometryOrOriginOne: (-9.3750, -14.1750, -4.1107) cm
[18:46:56]     geometryOrOriginTwo: (-9.3750, -14.1750, -4.1107) cm
[18:46:56]     occ1.transform: (0.3117, -1.6839, -0.0488) cm (ctx_depth=0)
[18:46:56]     occ1.global:    (0.3117, -1.6839, -0.0488) cm
[18:46:56]     occ2.transform: (0.0000, -1.6839, -0.0000) cm (ctx_depth=0)
[18:46:56]     occ2.global:    (0.0000, -1.6839, -0.0000) cm
[18:46:56]  -> origin_global: (-0.093750, -0.141750, -0.041107) m [via geometryOrOriginOne]
[18:46:56]     motion: revolute, axis: (0.000, -1.000, 0.000)
[18:46:56]     rotation limits: [-1.0472, 0.4363] rad
[18:46:56]   WARNING:   regular joint in component 'rivetrobot v6': failed to read geometry: 'Joint' object has no attribute 'geometry'
[18:46:56]   [REGULAR in rivetrobot] Left_Hip_Pitch
[18:46:56]     parent(occ2): arm_left path=arm_left:1
[18:46:56]     child(occ1):  thigh_left path=thigh_left:1
[18:46:56]     geometryOrOriginOne: (-9.3750, 14.1750, -4.1107) cm
[18:46:56]     geometryOrOriginTwo: (-9.3750, 14.1750, -4.1107) cm
[18:46:56]     occ1.transform: (0.3117, 1.6839, -0.0488) cm (ctx_depth=0)
[18:46:56]     occ1.global:    (0.3117, 1.6839, -0.0488) cm
[18:46:56]     occ2.transform: (0.0000, 1.6839, -0.0000) cm (ctx_depth=0)
[18:46:56]     occ2.global:    (0.0000, 1.6839, -0.0000) cm
[18:46:56]  -> origin_global: (-0.093750, 0.141750, -0.041107) m [via geometryOrOriginOne]
[18:46:56]     motion: revolute, axis: (0.000, 1.000, 0.000)
[18:46:56]     rotation limits: [-0.4363, 1.0472] rad
[18:46:56]   WARNING:   regular joint in component 'rivetrobot v6': failed to read geometry: 'Joint' object has no attribute 'geometry'
[18:46:56]   [REGULAR in rivetrobot] Rigid_14
[18:46:56]     parent(occ2): base_link path=base_link:1
[18:46:56]     child(occ1):  SILICONE_PAD_2_1_1_1 path=imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+SILICONE_PAD_2_ASM_1_ASM_1_ASM:1+SILICONE_PAD_2_1_1_1:1
[18:46:56]     geometryOrOriginOne: (4.1552, 1.7500, 4.0282) cm
[18:46:56]     geometryOrOriginTwo: (4.1552, 1.7500, 4.0282) cm
[18:46:56]     occ1.transform: (0.0000, 0.0000, 0.0000) cm (ctx_depth=5)
[18:46:56]     occ1.global:    (4.9483, -0.0000, 5.0407) cm
[18:46:56]     occ2.transform: (0.0000, 0.0000, 0.0000) cm (ctx_depth=0)
[18:46:56]     occ2.global:    (0.0000, 0.0000, 0.0000) cm
[18:46:56]  -> origin_global: (0.041552, 0.017500, 0.040282) m [via geometryOrOriginOne]
[18:46:56]     motion: rigid, axis: (0.000, 0.000, 1.000)
[18:46:56]   Extracted 11 unique joints
[18:46:56] 
=== EXTRACTION: RIGID GROUPS ===
[18:46:56]   Rigid Group 1: []
[18:46:56]   Extracted 1 rigid groups
[18:46:56] 
=== EXTRACTION SUMMARY ===
[18:46:56]   Occurrences: 52 (18 subassemblies, 34 leaf components)
[18:46:56]   Joints: 11 (0 as-built, 11 regular)
[18:46:56]   Max nesting depth: 6
[18:47:01] 
=== PHASE 1: DEBUG DATA ===
[18:47:01]   extraction_report.md
[18:47:01]   snapshot.json
[18:47:01]   fusion_transforms.json
[18:47:01] 
=== PHASE 2: BUILD ROBOT MODEL ===
[18:47:01] 
=== MODEL: ASSEMBLY HIERARCHY ===
[18:47:01]   Assembly: base_link d=0 offset=(0.0, 0.0, 0.0) mm
[18:47:01]   Assembly: SILICONE_PAD_2_ASM_1_ASM_1_ASM d=4 offset=(49.5, -0.0, 50.4) mm
[18:47:01]   Assembly: 111_1_1_ASM_1_ASM_1_ASM d=4 offset=(49.5, -0.0, 50.4) mm
[18:47:01]   Assembly: UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM d=3 offset=(49.5, -0.0, 50.4) mm
[18:47:01]   Assembly: 1_ASM_2_ASM_1_ASM_1_ASM d=4 offset=(49.5, -0.0, 50.4) mm
[18:47:01]   Assembly: BRACKET_ASM_1_ASM_3_ASM_1_ASM d=3 offset=(49.5, -0.0, 50.4) mm
[18:47:01]   Assembly: 2_ASM_3_ASM_1_ASM_1_ASM d=4 offset=(49.5, -0.0, 50.4) mm
[18:47:01]   Assembly: LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM d=3 offset=(49.5, -0.0, 50.4) mm
[18:47:01]   Assembly: GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM d=2 offset=(49.5, -0.0, 50.4) mm
[18:47:01]   Assembly: I02_ASM_3_ASM_1_ASM d=4 offset=(49.5, 25.0, 50.4) mm
[18:47:01]   Assembly: I02_ASM_3_ASM_1_ASM d=4 offset=(49.5, -25.0, 50.4) mm
[18:47:01]   Assembly: GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM d=3 offset=(49.5, -0.0, 50.4) mm
[18:47:01]   Assembly: PART2_ASM_1_ASM_1_ASM_1_ASM d=5 offset=(27.2, 20.7, 53.9) mm
[18:47:01]   Assembly: 810_805_518_516_8PIN_ASM_1_ASM_ASM d=4 offset=(27.2, 20.7, 53.9) mm
[18:47:01]   Assembly: PCBA_ASM_ASM_1_ASM d=3 offset=(49.5, -0.0, 50.4) mm
[18:47:01]   Assembly: GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM d=2 offset=(49.5, -0.0, 50.4) mm
[18:47:01]   Assembly: 00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM d=1 offset=(49.5, -0.0, 50.4) mm
[18:47:01]   Assembly: imu d=0 offset=(49.5, -0.0, 50.4) mm
[18:47:01]   Assembly: rivetrobot (synthetic root, wraps design-root leaves so phase 2 has a macro to xacro:include)
[18:47:01]   Yaw_L → rivetrobot
[18:47:01]   Yaw_R → rivetrobot
[18:47:01]   BatteryMount → base_link
[18:47:01]   base_link → rivetrobot
[18:47:01]   thigh_right → rivetrobot
[18:47:01]   foot_right → rivetrobot
[18:47:01]   shin_right → rivetrobot
[18:47:01]   arm_right → rivetrobot
[18:47:01]   thigh_left → rivetrobot
[18:47:01]   foot_left → rivetrobot
[18:47:01]   shin_left → rivetrobot
[18:47:01]   arm_left → rivetrobot
[18:47:01]   00_2_35673_1_1 → UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM
[18:47:01]   00_2_36696_1_1 → UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM
[18:47:01]   SILICONE_PAD_2_1_1_1 → SILICONE_PAD_2_ASM_1_ASM_1_ASM
[18:47:01]   SILICONE_PAD_2_2_1_1 → SILICONE_PAD_2_ASM_1_ASM_1_ASM
[18:47:01]   SEALING_SILICA_GEL_AG_2_1_1 → UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM
[18:47:01]   111_1_1_1_1_1 → 111_1_1_ASM_1_ASM_1_ASM
[18:47:01]   111_1_1_2_1_1 → 111_1_1_ASM_1_ASM_1_ASM
[18:47:01]   111_1_1_3_1_1 → 111_1_1_ASM_1_ASM_1_ASM
[18:47:01]   BRACKET_MAX_2_1_1 → BRACKET_ASM_1_ASM_3_ASM_1_ASM
[18:47:01]   SCREW_CM2X035_035X1_1_3_1 → 1_ASM_2_ASM_1_ASM_1_ASM
[18:47:01]   SCREW_CM2X035_035X1_1_3_1 → 1_ASM_2_ASM_1_ASM_1_ASM
[18:47:01]   PRT0002_2_1_1 → LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM
[18:47:01]   SCREW_CM2X035_035X1_1_3_1 → 2_ASM_3_ASM_1_ASM_1_ASM
[18:47:01]   SCREW_CM2X035_035X1_1_3_1 → 2_ASM_3_ASM_1_ASM_1_ASM
[18:47:01]   SCREW_CM2X035_035X1_1_3_1 → 2_ASM_3_ASM_1_ASM_1_ASM
[18:47:01]   SCREW_CM2X035_035X1_1_3_1 → 2_ASM_3_ASM_1_ASM_1_ASM
[18:47:01]   DS_AS_FOR_1_1_1 → I02_ASM_3_ASM_1_ASM
[18:47:01]   LENS_1_1_1 → GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM
[18:47:01]   OE_1_1_1 → GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM
[18:47:01]   DS_AS_FOR_1_1_1 → I02_ASM_3_ASM_1_ASM
[18:47:01]   GEMINI_336_PCBA_2_1_1 → PCBA_ASM_ASM_1_ASM
[18:47:01]   CX_24P_ASM_3_1_1 → PCBA_ASM_ASM_1_ASM
[18:47:01]   810_805_518_516_8PIN_1_1_2_1 → PART2_ASM_1_ASM_1_ASM_1_ASM
[18:47:01] 
=== MODEL: RIGID GROUP MERGE ===
[18:47:01]   WARNING:   Rigid group 'Rigid Group 1': no visual members — skipping merge
[18:47:01]   base_link: anchor=base_link merged_name=base_link members=2 mass=12524.04 g bbox=(351.5 × 216.9 × 241.8) mm
[18:47:01]   base_link: dropped base_link/BatteryMount (base_link:1+BatteryMount:1) -> rivetrobot/base_link
[18:47:01]   AUTO rigid island: base_link (2 members) -> base_link
[18:47:01]   imu: anchor=00_2_35673_1_1 merged_name=imu members=23 mass=227.38 g bbox=(89.5 × 25.3 × 34.4) mm
[18:47:01]   imu: dropped 1_ASM_2_ASM_1_ASM_1_ASM/SCREW_CM2X035_035X1_1_3_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+BRACKET_ASM_1_ASM_3_ASM_1_ASM:1+1_ASM_2_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:1) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped 1_ASM_2_ASM_1_ASM_1_ASM/SCREW_CM2X035_035X1_1_3_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+BRACKET_ASM_1_ASM_3_ASM_1_ASM:1+1_ASM_2_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:2) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped BRACKET_ASM_1_ASM_3_ASM_1_ASM/BRACKET_MAX_2_1_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+BRACKET_ASM_1_ASM_3_ASM_1_ASM:1+BRACKET_MAX_2_1_1:1) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped 2_ASM_3_ASM_1_ASM_1_ASM/SCREW_CM2X035_035X1_1_3_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:3) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped 2_ASM_3_ASM_1_ASM_1_ASM/SCREW_CM2X035_035X1_1_3_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:4) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped 2_ASM_3_ASM_1_ASM_1_ASM/SCREW_CM2X035_035X1_1_3_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:5) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped 2_ASM_3_ASM_1_ASM_1_ASM/SCREW_CM2X035_035X1_1_3_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+2_ASM_3_ASM_1_ASM_1_ASM:1+SCREW_CM2X035-035X1_1_3_1:6) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM/PRT0002_2_1_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+LOWER_HOU_ASM_1_ASM_2_ASM_1_ASM:1+PRT0002_2_1_1:1) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_36696_1_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+00_2-36696_1_1:1) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped 111_1_1_ASM_1_ASM_1_ASM/111_1_1_1_1_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+111_1_1_ASM_1_ASM_1_ASM:1+111_1_1_1_1_1:1) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped 111_1_1_ASM_1_ASM_1_ASM/111_1_1_2_1_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+111_1_1_ASM_1_ASM_1_ASM:1+111_1_1_2_1_1:1) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped 111_1_1_ASM_1_ASM_1_ASM/111_1_1_3_1_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+111_1_1_ASM_1_ASM_1_ASM:1+111_1_1_3_1_1:1) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/SEALING_SILICA_GEL_AG_2_1_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+SEALING_SILICA_GEL-AG_2_1_1:1) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped SILICONE_PAD_2_ASM_1_ASM_1_ASM/SILICONE_PAD_2_1_1_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+SILICONE_PAD_2_ASM_1_ASM_1_ASM:1+SILICONE_PAD_2_1_1_1:1) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped SILICONE_PAD_2_ASM_1_ASM_1_ASM/SILICONE_PAD_2_2_1_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_MD_ASM_3_ASM_1_ASM_1_ASM:1+UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM:1+SILICONE_PAD_2_ASM_1_ASM_1_ASM:1+SILICONE_PAD_2_2_1_1:1) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM/LENS_1_1_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+LENS__1_1_1:1) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM/OE_1_1_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+OE_1_1_1:1) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped I02_ASM_3_ASM_1_ASM/DS_AS_FOR_1_1_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+_I02_ASM_3_ASM_1_ASM:1+DS-AS_FOR_1_1_1:1) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped I02_ASM_3_ASM_1_ASM/DS_AS_FOR_1_1_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+GEMINI_II_HEAD_ASSEMBLY_ASM_1_A_ASM:1+_I02_ASM_3_ASM_1_ASM:2+DS-AS_FOR_1_1_1:1) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped PART2_ASM_1_ASM_1_ASM_1_ASM/810_805_518_516_8PIN_1_1_2_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1+810_805_518_516_8PIN_ASM_1_ASM__ASM:1+PART2_ASM_1_ASM_1_ASM_1_ASM:1+810_805_518_516_8PIN_1_1_2_1:1) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped PCBA_ASM_ASM_1_ASM/CX_24P_ASM_3_1_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1+CX-24P_ASM_3_1_1:1) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   imu: dropped PCBA_ASM_ASM_1_ASM/GEMINI_336_PCBA_2_1_1 (imu:1+00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM:1+GEMINI_336_STACK_ASM_3_ASM_1_AS_ASM:1+_PCBA_ASM_ASM_1_ASM:1+GEMINI_336_PCBA_2_1_1:1) -> UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1
[18:47:01]   AUTO rigid island: imu (23 members) -> imu
[18:47:01] 
=== MODEL: RESOLVE JOINT PATHS ===
[18:47:01]   Right_Hip_Yaw        rivetrobot/base_link → rivetrobot/Yaw_R  [revolute] internal
[18:47:01]   Left_Hip_Yaw         rivetrobot/base_link → rivetrobot/Yaw_L  [revolute] internal
[18:47:01]   Right_Hip_Roll       rivetrobot/Yaw_R → rivetrobot/arm_right  [revolute] internal
[18:47:01]   Left_Hip_Roll        rivetrobot/Yaw_L → rivetrobot/arm_left  [revolute] internal
[18:47:01]   Right_Knee           rivetrobot/thigh_right → rivetrobot/shin_right  [revolute] internal
[18:47:01]   Left_Foot            rivetrobot/shin_left → rivetrobot/foot_left  [revolute] internal
[18:47:01]   Left_Knee            rivetrobot/thigh_left → rivetrobot/shin_left  [revolute] internal
[18:47:01]   Right_Foot           rivetrobot/shin_right → rivetrobot/foot_right  [revolute] internal
[18:47:01]   Right_Hip_Pitch      rivetrobot/arm_right → rivetrobot/thigh_right  [revolute] internal
[18:47:01]   Left_Hip_Pitch       rivetrobot/arm_left → rivetrobot/thigh_left  [revolute] internal
[18:47:01]   Rigid_14             rivetrobot/base_link → UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/00_2_35673_1_1  [rigid] MOUNT
[18:47:01] 
=== MODEL: DETECT ROOT ===
[18:47:01]   Parent-only nodes: 1
[18:47:01]     rivetrobot/base_link
[18:47:01]   → Root: rivetrobot/base_link
[18:47:01] 
=== MODEL: RESOLVE NAMES ===
[18:47:01]   Yaw_L (rivetrobot) → Yaw_L
[18:47:01]   Yaw_R (rivetrobot) → Yaw_R
[18:47:01]   arm_left (rivetrobot) → arm_left
[18:47:01]   arm_right (rivetrobot) → arm_right
[18:47:01]   base_link (rivetrobot) → base_link
[18:47:01]   foot_left (rivetrobot) → foot_left
[18:47:01]   foot_right (rivetrobot) → foot_right
[18:47:01]   imu (UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM) → imu
[18:47:01]   shin_left (rivetrobot) → shin_left
[18:47:01]   shin_right (rivetrobot) → shin_right
[18:47:01]   thigh_left (rivetrobot) → thigh_left
[18:47:01]   thigh_right (rivetrobot) → thigh_right
[18:47:01]   Root link URDF name: base_link
[18:47:01] 
=== MODEL: BUILD LINKS ===
[18:47:01]   base_link: MERGED (2 members) mass=12524.04 g
[18:47:01]   imu: MERGED (23 members) mass=227.38 g
[18:47:01]   Built 12 links
[18:47:01] 
=== MODEL: BUILD JOINTS ===
[18:47:01]   NOTE: joint origin rpy derived from child occurrence's transform2 rotation (was hardcoded 0,0,0 pre-2026-04-13)
[18:47:01]   Right_Hip_Yaw: mesh bake offset = (103.10, 50.00, -11.84) mm [child-local frame]
[18:47:01]   Right_Hip_Yaw: base_link → Yaw_R [revolute]
[18:47:01]     origin_xyz: (-0.103104, -0.060000, 0.011836) m [joint_minus_parent]
[18:47:01]     origin_global: (-0.103104, -0.060000, 0.011836) m
[18:47:01]   Left_Hip_Yaw: mesh bake offset = (103.10, -50.00, -11.84) mm [child-local frame]
[18:47:01]   Left_Hip_Yaw: base_link → Yaw_L [revolute]
[18:47:01]     origin_xyz: (-0.103104, 0.060000, 0.011836) m [joint_minus_parent]
[18:47:01]     origin_global: (-0.103104, 0.060000, 0.011836) m
[18:47:01]   Rigid_14: joint origin rpy = (2.137906, 0.000000, 1.570796) rad (+122.49°, +0.00°, +90.00°) [from child transform2 rotation]
[18:47:01]   Rigid_14: base_link → imu [fixed]
[18:47:01]     origin_xyz: (0.049483, -0.000000, 0.050407) m [child_minus_parent]
[18:47:01]     origin_global: (0.041552, 0.017500, 0.040282) m
[18:47:01]   Right_Hip_Roll: mesh bake offset = (85.10, 55.66, 42.45) mm [child-local frame]
[18:47:01]   Right_Hip_Roll: parent bake correction += (103.10, 50.00, -11.84) mm [world frame]
[18:47:01]   Right_Hip_Roll: Yaw_R → arm_right [revolute]
[18:47:01]     origin_xyz: (0.018000, -0.012500, -0.054284) m [joint_minus_parent]
[18:47:01]     origin_global: (-0.085104, -0.072500, -0.042448) m
[18:47:01]   Left_Hip_Roll: mesh bake offset = (85.10, 55.66, -42.45) mm [child-local frame]
[18:47:01]   Left_Hip_Roll: parent bake correction += (103.10, -50.00, -11.84) mm [world frame]
[18:47:01]   Left_Hip_Roll: joint origin rpy = (-3.141593, 0.000000, 0.000000) rad (-180.00°, +0.00°, +0.00°) [from child transform2 rotation]
[18:47:01]   Left_Hip_Roll: Yaw_L → arm_left [revolute]
[18:47:01]     origin_xyz: (0.018000, 0.012500, -0.054284) m [joint_minus_parent]
[18:47:01]     origin_global: (-0.085104, 0.072500, -0.042448) m
[18:47:01]   Right_Hip_Pitch: mesh bake offset = (96.87, 124.91, 40.62) mm [child-local frame]
[18:47:01]   Right_Hip_Pitch: parent bake correction += (85.10, 55.66, 42.45) mm [world frame]
[18:47:01]   Right_Hip_Pitch: arm_right → thigh_right [revolute]
[18:47:01]     origin_xyz: (-0.008647, -0.069250, 0.001341) m [joint_minus_parent]
[18:47:01]     origin_global: (-0.093750, -0.141750, -0.041107) m
[18:47:01]   Left_Hip_Pitch: mesh bake offset = (96.87, 124.91, -40.62) mm [child-local frame]
[18:47:01]   Left_Hip_Pitch: parent bake correction += (85.10, -55.66, 42.45) mm [world frame]
[18:47:01]   Left_Hip_Pitch: origin_xyz rotated into parent-local frame: (-0.008647, 0.069250, 0.001341) → (-0.008647, -0.069250, -0.001341) m
[18:47:01]  Left_Hip_Pitch: axis remapped world -> joint/child frame: (0.000, 1.000, 0.000) -> (-0.000, -1.000, -0.000)
[18:47:01]   Left_Hip_Pitch: arm_left → thigh_left [revolute]
[18:47:01]     origin_xyz: (-0.008647, -0.069250, -0.001341) m [joint_minus_parent]
[18:47:01]     origin_global: (-0.093750, 0.141750, -0.041107) m
[18:47:01]   Right_Knee: mesh bake offset = (175.00, 124.91, 119.51) mm [child-local frame]
[18:47:01]   Right_Knee: parent bake correction += (96.87, 124.91, 40.62) mm [world frame]
[18:47:01]   Right_Knee: thigh_right → shin_right [revolute]
[18:47:01]     origin_xyz: (-0.078133, -0.000000, -0.078888) m [joint_minus_parent]
[18:47:01]     origin_global: (-0.171883, -0.141750, -0.119995) m
[18:47:01]   Left_Knee: mesh bake offset = (175.00, 124.91, -119.51) mm [child-local frame]
[18:47:01]   Left_Knee: parent bake correction += (96.87, -124.91, 40.62) mm [world frame]
[18:47:01]   Left_Knee: origin_xyz rotated into parent-local frame: (-0.078133, 0.000000, -0.078888) → (-0.078133, -0.000000, 0.078888) m
[18:47:01]  Left_Knee: axis remapped world -> joint/child frame: (-0.000, -1.000, 0.000) -> (-0.000, 1.000, -0.000)
[18:47:01]   Left_Knee: thigh_left → shin_left [revolute]
[18:47:01]     origin_xyz: (-0.078133, -0.000000, 0.078888) m [joint_minus_parent]
[18:47:01]     origin_global: (-0.171883, 0.141750, -0.119995) m
[18:47:01]   Right_Foot: mesh bake offset = (127.91, 125.41, 248.89) mm [child-local frame]
[18:47:01]   Right_Foot: parent bake correction += (175.00, 124.91, 119.51) mm [world frame]
[18:47:01]   Right_Foot: shin_right → foot_right [revolute]
[18:47:01]     origin_xyz: (0.047092, -0.001000, -0.129387) m [joint_minus_parent]
[18:47:01]     origin_global: (-0.124791, -0.142750, -0.249382) m
[18:47:01]   Left_Foot: mesh bake offset = (127.91, 125.41, -248.89) mm [child-local frame]
[18:47:01]   Left_Foot: parent bake correction += (175.00, -124.91, 119.51) mm [world frame]
[18:47:01]   Left_Foot: origin_xyz rotated into parent-local frame: (0.047092, 0.000500, -0.129387) → (0.047092, -0.000500, 0.129387) m
[18:47:01]  Left_Foot: axis remapped world -> joint/child frame: (-0.000, -1.000, 0.000) -> (-0.000, 1.000, 0.000)
[18:47:01]   Left_Foot: shin_left → foot_left [revolute]
[18:47:01]     origin_xyz: (0.047092, -0.000500, 0.129387) m [joint_minus_parent]
[18:47:01]     origin_global: (-0.124791, 0.142250, -0.249382) m
[18:47:01]   Built 11 joints
[18:47:01] 
=== MODEL: VALIDATE ===
[18:47:01]   Validation passed (0 warnings)
[18:47:01] 
[18:47:01] Kinematic tree:
[18:47:01]   base_link (12524g) [MERGED]
[18:47:01]     ─⟳─ Right_Hip_Yaw [revolute]
[18:47:01]       Yaw_R (632g)
[18:47:01]         ─⟳─ Right_Hip_Roll [revolute]
[18:47:01]           arm_right (100g)
[18:47:01]             ─⟳─ Right_Hip_Pitch [revolute]
[18:47:01]               thigh_right (1847g)
[18:47:01]                 ─⟳─ Right_Knee [revolute]
[18:47:01]                   shin_right (708g)
[18:47:01]                     ─⟳─ Right_Foot [revolute]
[18:47:01]                       foot_right (66g)
[18:47:01]     ─⟳─ Left_Hip_Yaw [revolute]
[18:47:01]       Yaw_L (632g)
[18:47:01]         ─⟳─ Left_Hip_Roll [revolute]
[18:47:01]           arm_left (100g)
[18:47:01]             ─⟳─ Left_Hip_Pitch [revolute]
[18:47:01]               thigh_left (1847g)
[18:47:01]                 ─⟳─ Left_Knee [revolute]
[18:47:01]                   shin_left (708g)
[18:47:01]                     ─⟳─ Left_Foot [revolute]
[18:47:01]                       foot_left (66g)
[18:47:01]     ─── Rigid_14 [fixed]
[18:47:01]       imu (227g) [MERGED]
[18:47:01] 
=== MODEL SUMMARY ===
[18:47:01]   Robot: rivetrobot
[18:47:01]   Root link: base_link
[18:47:01]   Links: 12
[18:47:01]   Joints: 11
[18:47:01]   Assemblies: 18
[18:47:01]   Warnings: 0
[18:47:01]   Errors: 0
[18:47:09] 
=== MESH EXPORT ===
[18:47:09]   Yaw_L:
[18:47:10]     OBJ exported (3589772 bytes)
[18:47:10]     MTL preserved from Fusion (multi-material)
[18:47:10]     DAE written → meshes/rivetrobot/Yaw_L.dae (OBJ retained for collision fit)
[18:47:10]   Yaw_R:
[18:47:11]     OBJ exported (3607919 bytes)
[18:47:11]     MTL preserved from Fusion (multi-material)
[18:47:11]     DAE written → meshes/rivetrobot/Yaw_R.dae (OBJ retained for collision fit)
[18:47:11]   base_link:
[18:47:11]     base_link: rigid group has body-owning subassembly member(s) - using per-member export
[18:47:18]     Merged rigid group (2 members, 35710 verts, 71700 faces)
[18:47:18]     DAE written → meshes/rivetrobot/base_link.dae (OBJ retained for collision fit)
[18:47:18]   thigh_right:
[18:47:20]     OBJ exported (20244237 bytes)
[18:47:20]     MTL preserved from Fusion (multi-material)
[18:47:21]     DAE written → meshes/rivetrobot/thigh_right.dae (OBJ retained for collision fit)
[18:47:21]   foot_right:
[18:47:21]     OBJ exported (905788 bytes)
[18:47:21]     MTL preserved from Fusion (multi-material)
[18:47:21]     DAE written → meshes/rivetrobot/foot_right.dae (OBJ retained for collision fit)
[18:47:21]   shin_right:
[18:47:22]     OBJ exported (2925441 bytes)
[18:47:22]     MTL preserved from Fusion (multi-material)
[18:47:22]     DAE written → meshes/rivetrobot/shin_right.dae (OBJ retained for collision fit)
[18:47:22]   arm_right:
[18:47:22]     OBJ exported (269466 bytes)
[18:47:22]     MTL preserved from Fusion (multi-material)
[18:47:22]     DAE written → meshes/rivetrobot/arm_right.dae (OBJ retained for collision fit)
[18:47:22]   thigh_left:
[18:47:23]     OBJ exported (20129646 bytes)
[18:47:23]     MTL preserved from Fusion (multi-material)
[18:47:24]     DAE written → meshes/rivetrobot/thigh_left.dae (OBJ retained for collision fit)
[18:47:24]   foot_left:
[18:47:24]     OBJ exported (903421 bytes)
[18:47:24]     MTL preserved from Fusion (multi-material)
[18:47:24]     DAE written → meshes/rivetrobot/foot_left.dae (OBJ retained for collision fit)
[18:47:24]   shin_left:
[18:47:24]     OBJ exported (2918278 bytes)
[18:47:24]     MTL preserved from Fusion (multi-material)
[18:47:25]     DAE written → meshes/rivetrobot/shin_left.dae (OBJ retained for collision fit)
[18:47:25]   arm_left:
[18:47:25]     OBJ exported (268732 bytes)
[18:47:25]     MTL preserved from Fusion (multi-material)
[18:47:25]     DAE written → meshes/rivetrobot/arm_left.dae (OBJ retained for collision fit)
[18:47:25]   imu:
[18:47:25]     Merge target: sub-asm '00_GEMINI_336_3D_ALL_ASM_ASM_1_ASM' (members=23)
[18:47:28]     MTL preserved from Fusion (multi-material)
[18:47:28]     Merged OBJ written via Fusion API (39456.0 KB)
[18:47:30]     DAE written → meshes/UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM/imu.dae (OBJ retained for collision fit)
[18:47:30] 
  Mesh export summary:
[18:47:30]     Visual (OBJ+MTL):              12
[18:47:30]     Collision sub-component (STL):  0
[18:47:30]     Collision body + warning (STL): 0
[18:47:30]     Skipped (no Fusion ref):        0
[18:47:30] 
=== PHASE 3: SCREENSHOT ===
[18:47:31]   → images/robot.png
[18:47:31] 
=== PACKAGE: GENERATE ===
[18:47:31]   Package: rivetrobot_description
[18:47:31]   Output:  /Users/haydenwilliams/Documents/Echo/urdf_description/rivetrobot_description
[18:47:31] 
=== COLLISION: RESOLVE ===
[18:47:31]   Yaw_L: primitive (box [54.0 x 84.5 x 95.3] mm)
[18:47:31]   Yaw_R: primitive (box [54.0 x 84.5 x 95.3] mm)
[18:47:31]   base_link: primitive (box [87.1 x 87.7 x 57.7] mm)
[18:47:31]   thigh_right: primitive (box [219.6 x 118.1 x 53.7] mm)
[18:47:31]   foot_right: primitive (box [170.0 x 54.1 x 94.4] mm)
[18:47:31]   shin_right: primitive (cylinder r=39.4 h=42.9 mm)
[18:47:31]   arm_right: primitive (box [42.2 x 92.8 x 47.0] mm)
[18:47:31]   thigh_left: primitive (box [219.6 x 118.1 x 53.7] mm)
[18:47:31]   foot_left: primitive (box [170.0 x 54.1 x 94.4] mm)
[18:47:31]   shin_left: primitive (cylinder r=39.4 h=42.9 mm)
[18:47:31]   arm_left: primitive (box [42.2 x 92.8 x 47.0] mm)
[18:47:31]   imu: primitive (box [89.4 x 26.7 x 28.2] mm)
[18:47:31] 
  Collision summary:
[18:47:31]     Explicit:        0
[18:47:31]     Primitive (STL): 12
[18:47:31]     Convex hull STL: 0
[18:47:31]     Visual reuse:    0
[18:47:31]     Visual fallback: 0
[18:47:31] 
=== COLLISION: GENERATE STL ===
[18:47:31]   Yaw_L: box -> 12 tris (0.7 KB)
[18:47:31]   Yaw_R: box -> 12 tris (0.7 KB)
[18:47:31]   base_link: box -> 12 tris (0.7 KB)
[18:47:31]   thigh_right: box -> 12 tris (0.7 KB)
[18:47:31]   foot_right: box -> 12 tris (0.7 KB)
[18:47:31]   shin_right: cylinder -> 96 tris (4.8 KB)
[18:47:31]   arm_right: box -> 12 tris (0.7 KB)
[18:47:31]   thigh_left: box -> 12 tris (0.7 KB)
[18:47:31]   foot_left: box -> 12 tris (0.7 KB)
[18:47:31]   shin_left: cylinder -> 96 tris (4.8 KB)
[18:47:31]   arm_left: box -> 12 tris (0.7 KB)
[18:47:31]   imu: box -> 12 tris (0.7 KB)
[18:47:31] 
  Generated 12 collision STL files
[18:47:31] 
=== PACKAGE: FRAMES ===
[18:47:31]   -> debug/frame_model.json (pre-frame cache)
[18:47:31]   Frame convention: ros
[18:47:31]   Frame overrides:  config/frame_overrides.csv
[18:47:31]   Rebased links:    8/12
[18:47:31] 
=== PACKAGE: XACRO ===
[18:47:31]   → urdf/assemblies/UPPER_HOUS_ASM_1_ASM_2_ASM_1_ASM.urdf.xacro
[18:47:31]   → urdf/assemblies/rivetrobot.urdf.xacro
[18:47:31]   → urdf/rivetrobot.urdf.xacro
[18:47:31] 
=== PACKAGE: URDF (flat, for validation) ===
[18:47:31]   → urdf/rivetrobot.urdf
[18:47:31] 
=== PACKAGE: ROS2 FILES ===
[18:47:31]   → package.xml
[18:47:31]   → CMakeLists.txt
[18:47:31]   → launch/display.launch.py
[18:47:31]   → rviz/display.rviz
[18:47:31]   → config/joint_state.yaml
[18:47:31]   → config/ros2_controllers.yaml
[18:47:31] 
=== PACKAGE: SUPPLEMENTARY DATA ===
[18:47:31]   → robot_data.yaml
[18:47:31]   -> docs/transforms.md
[18:47:31] 
=== PACKAGE: README ===
[18:47:31]   → README.md
[18:47:31]   Cleaned up 24 retained OBJ/MTL files
[18:47:31]   Removed 16 empty generated directories
[18:47:31] 
=== PACKAGE: COMPLETE ===
[18:47:31]   Package generated: /Users/haydenwilliams/Documents/Echo/urdf_description/rivetrobot_description
[18:47:31]   Xacro: urdf/rivetrobot.urdf.xacro (+ 2 assembly macros)
[18:47:31]   URDF:  urdf/rivetrobot.urdf (flat, for validation)
[18:47:31]   Launch: ros2 launch rivetrobot_description display.launch.py
[18:47:31] 
=== EXPORT COMPLETE ===
```
