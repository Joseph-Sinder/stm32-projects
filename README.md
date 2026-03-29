# STM32 Projects

Embedded Systems projects on the STM32L476RG Nucleo-64. This repository is used to learn bare-metal and HAL development skills in STM-32.

## Hardware
- STM32L476RGT6 Nucleo-64
- ST-Link/V2-1 (onboard)

## Tools
- STM32CubeIDE
- PuTTY (Serial Terminal, COM3, Baud Rate: 115200)

## Projects
| Project | Description |
|---------|-------------|
| 01-blink | Blink LED using bare-metal register access |
| 02-uart | Transmit message to PuTTY via UART |
| 03-adc | Calculate temperature via ADC, transmit to PuTTY via UART |
| 04-timer | Transmit message to PuTTY via UART each second via timer |
| 05-exti | Transmit message to PuTTY via UART on button press via interrupt |
| 06-dma | Transmit message to PuTTY via UART using DMA |
