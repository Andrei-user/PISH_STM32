/*
 * joystick_drv.c
 *
 *  Created on: Feb 28, 2026
 *      Author: andre
 */

#include "joystick_drv.h"
#include "pish_adc_drv.h"
#include "pish_gpio_dr.h"
#include "pish_rcc_drv.h"

void Joystick_Init(void)
{
    // Включаем тактирование GPIO
    RCC->AHB1ENR.B.GPIOAEN = 1;
    RCC->AHB1ENR.B.GPIOBEN = 1;

    // Настройка пинов X/Y в аналоговый режим
    GPIOA->MODER.B.MODER2 = 3; // PA2
    GPIOA->MODER.B.MODER3 = 3; // PA3

    // Настройка кнопки PB0 как вход с подтяжкой
    GPIOB->MODER.B.MODER0 = 0; // input
    GPIOB->PUPDR.B.PUPDR0 = 1; // pull-up

    // Инициализация ADC
    PISH_ADC_Init();
}

uint16_t Joystick_ReadX(void)
{
    return PISH_ADC_ReadX();
}

uint16_t Joystick_ReadY(void)
{
    return PISH_ADC_ReadY();
}

uint8_t Joystick_ReadBtn(void)
{
    return GPIOB->IDR.B.IDR0; // 0 = нажата, 1 = не нажата
}
