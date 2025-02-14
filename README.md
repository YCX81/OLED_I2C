# U8g2移植STM32F103C8T6，使用硬件iic通过DMA发送，HAL库编写，测试程序为移动方块并实时显示FPS

#### 项目分析
该项目设计用于通过STM32F103C8T6控制OLED显示屏，使用U8g2库来管理图形显示任务。

#### 主要组件：
1. **OLED显示屏**：基于SSD1306芯片，通过I2C与STM32通信。
2. **u8g2库**：用于在OLED上显示内容。
3. **I2C通信**：通过I2C协议在STM32和OLED显示屏之间进行数据传输。
4. **动画效果**：项目实现了一个简单的动画，显示一个在屏幕上水平移动的方块，同时显示帧率。

#### 主流程：
- `main.c`文件处理程序的初始化和主循环。它初始化MCU，设置I2C，并不断更新显示，显示移动的方块和帧率。
- `oled.c`和`oled.h`文件提供了初始化和与OLED显示屏通信的功能，使用了U8g2库。
- I2C通信确保数据正确地传输到OLED显示屏。

---

### English Version ReadMe

#### Project Analysis
This project is designed to control an OLED display using STM32F103C8T6, with the U8g2 library handling graphical display tasks.

#### Key Components:
1. **OLED Display**: Based on the SSD1306 chip, it communicates with the STM32 via I2C.
2. **u8g2 Library**: Used to render content on the OLED display.
3. **I2C Communication**: I2C is used to transfer data between the STM32 and the OLED.
4. **Animation**: The project features a simple animation where a square moves horizontally across the screen, and the frame rate is displayed.

#### Main Flow:
- The `main.c` file handles the initialization and main loop of the program. It sets up the MCU, configures I2C, and continuously updates the display with the moving box and the frame rate.
- The `oled.c` and `oled.h` files define functions to initialize and communicate with the OLED display using the U8g2 library.
- The I2C functions ensure that data is transmitted correctly to the OLED display.

