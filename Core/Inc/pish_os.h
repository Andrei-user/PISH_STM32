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
}OSThread;

typedef  void(*OSThreadHandler)();
void OS_Init();

void OS_AddThread(OSThread* thread,
				  OSThreadHandler handler,
				  void *stk,
				  uint32_t stk_size);

void OS_Shed();


#endif /* INC_PISH_OS_H_ */
