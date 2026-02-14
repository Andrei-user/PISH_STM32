/*
 * sowt_timer.h
 *
 *  Created on: Feb 14, 2026
 *      Author: andre
 */

#ifndef SRC_SOWT_TIMER_H_
#define SRC_SOWT_TIMER_H_
#include "pish_types.h"
#include "stdint.h"


void STIMER_arm(uint16_t delay);
event_t STIMER_getEvent();

#endif /* SRC_SOWT_TIMER_H_ */
