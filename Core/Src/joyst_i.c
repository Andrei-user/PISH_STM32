#include "joyst_i.h"
#include "pish_adc_drv.h"
#include "pish_gpio_dr.h"
#include "pish_uart_drv.h"
#include <stdio.h>

void JOYST_Init(void)
{
    // Включаем GPIOB
    RCC->AHB1ENR.B.GPIOBEN = 1;

    // На PB0 ставим вход с подтягом (без EXTI, пока)
    GPIOB->MODER.B.MODER0 = 0;   // Input
    GPIOB->PUPDR.B.PUPDR0 = 0b01; // Pull‑up (1 = не нажата, 0 = нажата)

    PISH_ADC_Init();   // ADC1 уже настроен в pish_adc_drv
}

int JOYST_Read_X(void)
{
    return (int)PISH_ADC_ReadX();   // 0 channel (PA0)
}

int JOYST_Read_Y(void)
{
    return (int)PISH_ADC_ReadY();   // 1 channel (PA1)
}

uint8_t JOYST_Read_Button(void)
{
    // 0 = нажата, 1 = не нажата, подтяг +5 В (3.3 В) на PB0
    return !PISH_GPIO_Read(JOYST_PIN_SW_PORT, JOYST_PIN_SW);
}

void JOYST_PrintState(joyst_state_t *state)
{
    char buff[80];
    int len = sprintf(buff,
        "X: %d | Y: %d | Button: %d\n\r",
        state->x,
        state->y,
        state->btn
    );
    (void)len;
    PISH_UART_WriteStr(USART2, (uint8_t*)buff);
}
