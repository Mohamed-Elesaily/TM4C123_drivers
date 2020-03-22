/*
 * GPIO.h
 *
 *  Created on: Mar 22, 2020
 *      Author: msm
 */

#ifndef GPIO_GPIO_H_
#define GPIO_GPIO_H_
// MACROS //
#define SETPIN(PIN) (1<<PIN)
#define CLPIN(PIN) (0<<PIN)
#define READPIN(PORT,PIN)(1 & (PORT>>PIN))
// PORTS
#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3
#define PORTE 4
#define PORTF 5

// PINS
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
#endif /* GPIO_GPIO_H_ */
