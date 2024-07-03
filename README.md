# STMicroelectronics NUCLEO-H745ZI-Q bare-metal examples (without HAL)

All from the following examples running at *400MHz* on Cortex-M7. The Cortex-M4 isn't currently used.

**ATTENTION:**
In the default setup from the board, the solder bridges are in *direct SMPS* power supply mode. In this mode,
the overdrive mode VOS0 (480MHz) isn't supported.

## GPIO example

This is a small example which toggles LD2 (yellow user LED) with the user button B1 (blue button). LD3 (red LED) is used as heartbeat. It uses the Coretx-M7 SysTick timer.
