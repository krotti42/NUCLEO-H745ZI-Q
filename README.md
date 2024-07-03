# STMicroelectronics NUCLEO-H745ZI-Q bare-metal examples (without HAL)

All from the following examples running at *400MHz* on Cortex-M7. The Cortex-M4 isn't currently used.

**ATTENTION:**  
In the default setup from the board, the solder bridges are in *direct SMPS* power supply mode. In this mode,
the overdrive mode VOS0 (480MHz) isn't supported.

**NOTE:**  
These examples doesn't require *STM32CubeIDE*. The only tools to build these examples is GCC for ARM (arm-none-eabi) and the GNU binutils.

## GPIO example

This is a small example which toggles LD2 (yellow user LED) with the user button B1 (blue button). LD3 (red LED) is used as heartbeat. It uses the Coretx-M7 SysTick timer.

### How to build

Simple type `make` in the `gpio` directory.

### TODO

- Add a delay function for button bouncing.
