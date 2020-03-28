/*
 * GPIO.c
 *
 *  Created on: Mar 22, 2020
 *      Author: Mohamed Elesaily
 */
#include"GPIO.h"

void port_init(uint32_t port){
    
    
    SETPIN(SYSCTL_RCGCGPIO_R,port);
    
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

void pin_direction(uint32_t port, uint32_t pin, uint32_t io){
       switch(port){
        case 0:
           (io == 1)? SETPIN(GPIO_PORTA_DIR_R,pin):CLPIN(GPIO_PORTA_DIR_R,pin);
            break;
        case 1:
            (io == 1)? SETPIN(GPIO_PORTB_DIR_R,pin):CLPIN(GPIO_PORTB_DIR_R,pin);
            break;
        case 2:
            (io == 1)? SETPIN(GPIO_PORTC_DIR_R,pin):CLPIN(GPIO_PORTC_DIR_R,pin);
            break;
        case 3:
             (io == 1)? SETPIN(GPIO_PORTD_DIR_R,pin):CLPIN(GPIO_PORTD_DIR_R,pin);
            break;
        case 4:
            (io == 1)? SETPIN(GPIO_PORTE_DIR_R,pin):CLPIN(GPIO_PORTE_DIR_R,pin);
            break;
        case 5:
            (io == 1)? SETPIN(GPIO_PORTF_DIR_R,pin):CLPIN(GPIO_PORTF_DIR_R,pin);
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
            SETPIN(GPIO_PORTA_DEN_R, pin);
            break;
        case 1:
            SETPIN(GPIO_PORTB_DEN_R, pin);
            break;
        case 2:
           SETPIN(GPIO_PORTC_DEN_R, pin);
            break;
        case 3:
            SETPIN(GPIO_PORTD_DEN_R, pin);
            break;
        case 4:
            SETPIN(GPIO_PORTE_DEN_R, pin);
            break;
        case 5:
            SETPIN(GPIO_PORTF_DEN_R, pin);
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

void digitalWritePin(uint32_t port, uint32_t pin, uint32_t num){
    switch(port){
        case 0:
             (num == 1)? SETPIN(GPIO_PORTA_DATA_R,pin):CLPIN(GPIO_PORTA_DATA_R,pin);
            break;
        case 1:
             (num == 1)? SETPIN(GPIO_PORTB_DATA_R,pin):CLPIN(GPIO_PORTB_DATA_R,pin);
            break;
        case 2:
             (num == 1)? SETPIN(GPIO_PORTC_DATA_R,pin):CLPIN(GPIO_PORTC_DATA_R,pin);
            break;
        case 3:
            (num == 1)? SETPIN(GPIO_PORTD_DATA_R,pin):CLPIN(GPIO_PORTD_DATA_R,pin);
            break;
        case 4:
             (num == 1)? SETPIN(GPIO_PORTE_DATA_R,pin):CLPIN(GPIO_PORTE_DATA_R,pin);
            break;
        case 5:
             (num == 1)? SETPIN(GPIO_PORTF_DATA_R,pin):CLPIN(GPIO_PORTF_DATA_R,pin);
        break;      
        default:    break;   
    }
}

uint32_t digitalRead(uint32_t port, uint32_t pin){
    uint32_t value = 0;
    switch(port){
        case 0:
            value = READPIN(GPIO_PORTA_DATA_R,pin);
            break;
        case 1:
            value  = READPIN(GPIO_PORTB_DATA_R,pin);
            break;
        case 2:
            value = READPIN(GPIO_PORTC_DATA_R,pin);
            break;
        case 3:
            value =  READPIN(GPIO_PORTD_DATA_R,pin);
            break;
        case 4:
            value =  READPIN(GPIO_PORTE_DATA_R,pin);
            break;
        case 5:
            value =  READPIN(GPIO_PORTF_DATA_R,pin);
        break;  
            
        default:    break;   
    }
    return value;
}



