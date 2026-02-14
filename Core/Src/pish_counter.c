/*
 * pish_counter.c
 *
 *  Created on: Feb 14, 2026
 *      Author: andre
 */


#include "pish_counter.h"
#include "stdint.h"
#include "stm32f4xx_it.h"

static uint32_t counter_value = 0;
static uint8_t counter_enable = 0;
static uint32_t counter_upper_value = 0;


void COUNTER_arm(uint16_t value)
{
	counter_value = 0;
	counter_upper_value = value;
	counter_enable = 1;
}
event_t COUNTER_getEvent()
{
	if(!counter_enable)
	{
		return EVENT_NOTHING;
	}
	if(counter_value < counter_upper_value)
	{
		return EVENT_NOTHING;
	}
	counter_enable = 0;
	return EVENT_COUNTER;
}

uint16_t COUNTER_getValue()
{
	counter_value++;
	return counter_value;
}
