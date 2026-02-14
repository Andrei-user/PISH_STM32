/*
 * pish_counter.h
 *
 *  Created on: Feb 14, 2026
 *      Author: andre
 */

#ifndef INC_PISH_COUNTER_H_
#define INC_PISH_COUNTER_H_

#include "pish_types.h"
#include "stdint.h"


void COUNTER_arm(uint16_t delay);
event_t COUNTER_getEvent();
uint16_t COUNTER_getValue();

#endif /* INC_PISH_COUNTER_H_ */
