/*
 * pish_os.h
 *
 *  Created on: Feb 28, 2026
 *      Author: andre
 */

#ifndef INC_PISH_OS_H_
#define INC_PISH_OS_H_

void OS_Init();

void OS_AddThread(void *sp);

void OS_Shed();


#endif /* INC_PISH_OS_H_ */
