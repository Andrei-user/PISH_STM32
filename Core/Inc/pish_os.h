/*
 * pish_os.h
 *
 *  Created on: Feb 28, 2026
 *      Author: andre
 */

#ifndef INC_PISH_OS_H_
#define INC_PISH_OS_H_

typedef struct
{
	void *sp;
	uint32_t timeout;
	uint8_t prio;
}OSThread;

typedef  void(*OSThreadHandler)();
void OS_Init(void* stkPtr, uint32_t stkSize);

void OS_AddThread(OSThread* thread,
				  uint8_t prio,
				  OSThreadHandler handler,
				  void *stk,
				  uint32_t stk_size);

void OS_Shed();

void OS_delay(uint32_t ticks);

void OS_Tick();

#endif /* INC_PISH_OS_H_ */
