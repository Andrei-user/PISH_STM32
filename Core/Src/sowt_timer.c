/*
 * sowt_timer.c
 *
 *  Created on: Feb 14, 2026
 *      Author: andre
 */


#include "sowt_timer.h"
#include "stdint.h"
#include "stm32f4xx_it.h"

static uint32_t armed_at_ticks = 0;
static uint8_t timer_enable = 0;
static uint32_t timer_delay = 0;


void STIMER_arm(uint16_t delay)
{
	armed_at_ticks = get_Ticks();
	timer_delay = delay;
	timer_enable = 1;
}
event_t STIMER_getEvent()
{
	if(!timer_enable)
	{
		return EVENT_NOTHING;
	}
	if(get_Ticks() - armed_at_ticks < timer_delay)
	{
		return EVENT_NOTHING;
	}
	timer_enable = 0;
	return EVENT_TIMER;
}
