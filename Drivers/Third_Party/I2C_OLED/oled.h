/* oled.h */
#ifndef __OLED_H__
#define __OLED_H__
#include "u8g2.h"

#define OLED_ADDRESS 0x78  // oled模块从机地址

extern

    void
    oled_init();
uint8_t u8x8_byte_hw_i2c(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int,
                         void *arg_ptr);
uint8_t u8x8_stm32_gpio_and_delay(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int,
                                  void *arg_ptr);

#endif
