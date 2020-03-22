/*
 * GPIO.c
 *
 *  Created on: Mar 22, 2020
 *      Author: Mohamed Elesaily
 */
#include"GPIO.h"

#include"../tm4c123gh6pm.h"
void port_init(uint32_t port){
    
    SYSCTL_RCGCGPIO_R |=  SETPIN(port);
    
}
void port_direction(uint32_t port, uint32_t num){
    switch(port){
        case 0:
            GPIO_PORTA_DIR_R  = num;
            break;
        case 1:
            GPIO_PORTB_DIR_R = num ;
            break;
        case 2:
            GPIO_PORTC_DIR_R = num ;
            break;
        case 3:
            GPIO_PORTD_DIR_R = num ;
            break;
        case 4:
            GPIO_PORTE_DIR_R = num ;
            break;
        case 5:
            GPIO_PORTF_DIR_R = num;
        break;      
        default:    break;   
    }
}

void pin_direction(uint32_t port, uint32_t pin){
       switch(port){
        case 0:
            GPIO_PORTA_DIR_R |= SETPIN(pin);
            break;
        case 1:
            GPIO_PORTB_DIR_R |= SETPIN(pin);
            break;
        case 2:
            GPIO_PORTC_DIR_R |= SETPIN(pin);
            break;
        case 3:
            GPIO_PORTD_DIR_R  |= SETPIN(pin);
            break;
        case 4:
           GPIO_PORTE_DIR_R |= SETPIN(pin);
            break;
        case 5:
            GPIO_PORTF_DIR_R  |= SETPIN(pin);
        break;      
        default:    break;   
    }

}

void digitalEnable(uint32_t port, uint32_t num){
    switch(port){
        case 0:
            GPIO_PORTA_DEN_R  = num;
            break;
        case 1:
            GPIO_PORTB_DEN_R = num ;
            break;
        case 2:
           GPIO_PORTC_DEN_R = num ;
            break;
        case 3:
            GPIO_PORTD_DEN_R = num ;
            break;
        case 4:
            GPIO_PORTE_DEN_R = num ;
            break;
        case 5:
            GPIO_PORTF_DEN_R = num;
        break;      
        default:    break;   
    }
}
void digitalEnablePin(uint32_t port, uint32_t pin){
    switch(port){
        case 0:
            GPIO_PORTA_DEN_R  |= SETPIN(pin);
            break;
        case 1:
            GPIO_PORTB_DEN_R  |= SETPIN(pin);
            break;
        case 2:
           GPIO_PORTC_DEN_R |= SETPIN(pin) ;
            break;
        case 3:
            GPIO_PORTD_DEN_R |= SETPIN(pin) ;
            break;
        case 4:
            GPIO_PORTE_DEN_R |= SETPIN(pin) ;
            break;
        case 5:
            GPIO_PORTF_DEN_R |= SETPIN(pin);
        break;      
        default:    break;   
    }
}


void digitalWrite(uint32_t port, uint32_t num){
    switch(port){
        case 0:
            GPIO_PORTA_DATA_R  = num;
            break;
        case 1:
            GPIO_PORTB_DATA_R  = num;
            break;
        case 2:
            GPIO_PORTC_DATA_R  = num;
            break;
        case 3:
            GPIO_PORTD_DATA_R  = num;
            break;
        case 4:
            GPIO_PORTE_DATA_R  = num;
            break;
        case 5:
        GPIO_PORTF_DATA_R  = num;
        break;   
        default: break;      
    }
}

void digitalWritePin(uint32_t port, uint32_t pin){
    switch(port){
        case 0:
            GPIO_PORTA_DATA_R  |= SETPIN(pin);
            break;
        case 1:
            GPIO_PORTB_DATA_R  |= SETPIN(pin);
            break;
        case 2:
            GPIO_PORTC_DATA_R  |= SETPIN(pin);
            break;
        case 3:
            GPIO_PORTD_DATA_R  |= SETPIN(pin);
            break;
        case 4:
            GPIO_PORTE_DATA_R  |= SETPIN(pin);
            break;
        case 5:
            GPIO_PORTF_DATA_R  |= SETPIN(pin);
        break;      
        default:    break;   
    }
}

int32_t digitalRead(uint32_t port, uint32_t pin){
    switch(port){
        case 0:
            return READPIN(GPIO_PORTB_DATA_R,pin);
            break;
        case 1:
            return READPIN(GPIO_PORTB_DATA_R,pin);
            break;
        case 2:
            return READPIN(GPIO_PORTB_DATA_R,pin);
            break;
        case 3:
            return READPIN(GPIO_PORTB_DATA_R,pin);
            break;
        case 4:
            return READPIN(GPIO_PORTB_DATA_R,pin);
            break;
        case 5:
            return READPIN(GPIO_PORTB_DATA_R,pin);
        break;      
        default:    break;   
    }
}



