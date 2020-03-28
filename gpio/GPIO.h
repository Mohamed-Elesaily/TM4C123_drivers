/*
 * GPIO.h
 *
 *  Created on: Mar 22, 2020
 *      Author: Mohamed Elesaily
 */
#include"std.h"

#include"../tm4c123gh6pm.h"
#ifndef GPIO_GPIO_H_
#define GPIO_GPIO_H_
// MACROS //

#define SETPIN(DATA, PIN) (DATA |= (1<<PIN))
#define CLPIN(DATA,PIN) (DATA &= (~(1<<PIN)))
#define READPIN(DATA,PIN)(1 & (DATA>>PIN))
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

#define IN 0
#define OUT 1
void port_init(uint32_t port);
void port_direction(uint32_t port, uint32_t num);
void pin_direction(uint32_t port, uint32_t pin, uint32_t io);

void digitalEnable(uint32_t port, uint32_t num);
void digitalEnablePin(uint32_t port, uint32_t pin);

void digitalWrite(uint32_t port, uint32_t num);
void digitalWritePin(uint32_t port, uint32_t pin, uint32_t num);
uint32_t digitalRead(uint32_t port, uint32_t pin);
#endif /* GPIO_GPIO_H_ */
