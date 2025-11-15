#include "pish_f411_sfr.h"

void PISH_Timer_Init()
{
	// Включаем тактирование
	RCC->AHB1ENR.B.GPIOAEN = 1;
	RCC->APB1ENR.B.TIM2EN = 1;

	// Настройка выводов GPIO
	GPIOA->AFRL.B.AFRL5 = 1;
	GPIOA->MODER.B.MODER5 = 2U;
	GPIOA->OTYPER.B.OT5 = 0;
	GPIOA->OSPEEDR.B.OSPEEDR5 = 3;

	//Установка предделителя
	TIM2->PSC.B.PSC = 10 - 1; // 10 МГц, 0.1 мкс
	// Частота ШИМ
	TIM2->ARR.R = 100; //Период 10 мкс, частота ШИМ 100 кГц
	// Скважность ШИМ
	TIM2->CCR1.R = 50;
//	TIM2->CNT.R =0;
//	The PWM mode can be selected independently on each channel (one PWM per OCx
//	output) by writing 110 (PWM mode 1) or ‘111 (PWM mode 2) in the OCxM bits in the
//	TIMx_CCMRx register. The user must enable the corresponding preload register by setting
//	the OCxPE bit in the TIMx_CCMRx register, and eventually the auto-reload preload register
//	by setting the ARPE bit in the TIMx_CR1 register.
	TIM2->CCMR1.CCMR1_Output.OC1M = 0b110;
	TIM2->CCMR1.CCMR1_Output.OC1PE = 1;
	TIM2->CR1.B.ARPE =1;

	//Update timer registers
	TIM2->EGR.B.UG = 1;
	// Enable channel 1
	TIM2->CCER.B.CC1E =1;
	// Enable timer 2
	TIM2->CR1.B.CEN = 1;
}

void PISH_Timer_SetDuty(uint8_t duty)
{
	// Скважность ШИМ
	TIM2->CCR1.R = duty;
}



