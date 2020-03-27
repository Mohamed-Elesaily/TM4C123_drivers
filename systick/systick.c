/*
 * systick.c
 *
 *  Created on: Mar 27, 2020
 *      Author: Mohamed Elesaily
 */
#include"systick.h"
void systick_init(){
    NVIC_ST_CTRL_R = 0;
    NVIC_ST_RELOAD_R = 0x00FFFFFF;
    NVIC_ST_CURRENT_R = 0;
    NVIC_ST_CTRL_R = ENABLE;
}
void systick_wait(uint32_t delay){
    NVIC_ST_RELOAD_R = delay-1;
    while((NVIC_ST_CTRL_R & COUNT) == 0);

}
void systick_delay_ms(uint32_t delay){

    uint32_t i;
    for(i=0;i<delay;i++){
        systick_wait(MS);
    }
}

