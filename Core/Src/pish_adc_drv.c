/*
 * pish_adc_drv.c
 *
 *  Created on: Feb 28, 2026
 *      Author: andre
 */
#include "pish_adc_drv.h"
#include "pish_f411_sfr.h"
#include "pish_rcc_drv.h"

// Вспомогательная функция для чтения канала ADC
static uint16_t read_channel(uint8_t channel)
{
    // Выбираем канал
    ADC1->SQR3.R = channel;

    // Настройка времени выборки (по умолчанию)
    if(channel <= 9)
    {
        ADC1->SMPR2.R &= ~(7 << (channel * 3));
        ADC1->SMPR2.R |=  (4 << (channel * 3)); // 84 cycles
    }
    else
    {
        uint8_t ch = channel - 10;
        ADC1->SMPR1.R &= ~(7 << (ch * 3));
        ADC1->SMPR1.R |=  (4 << (ch * 3));
    }

    // Старт преобразования
    ADC1->CR2.B.SWSTART = 1;

    // Ждём окончания
    while(!ADC1->SR.B.EOC);

    return ADC1->DR.R;
}

void PISH_ADC_Init(void)
{
    // Включаем тактирование ADC1
    RCC->APB2ENR.B.ADC1EN = 1;

    // Включаем ADC1
    ADC1->CR2.B.ADON = 1;
}

uint16_t PISH_ADC_ReadX(void)
{
    return read_channel(2); // PA2 → ADC1_IN2
}

uint16_t PISH_ADC_ReadY(void)
{
    return read_channel(3); // PA3 → ADC1_IN3
}
