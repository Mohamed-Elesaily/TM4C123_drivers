/*
 * systick.h
 *
 *  Created on: Mar 27, 2020
 *      Author: Mohamed Elesaily
 */
#include"../std.h"
#include"../tm4c123gh6pm.h"
#ifndef SYSTICK_SYSTICK_H_
#define SYSTICK_SYSTICK_H_

#define COUNT 0x00010000
#define ENABLE 5
#define MS 16000
void systick_init();
void systick_wait(uint32_t delay);
void systick_delay_ms(uint32_t delay);





#endif /* SYSTICK_SYSTICK_H_ */
