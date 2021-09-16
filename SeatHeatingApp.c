/**
 * @file main.c
 * @author Tejaswi devina (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define F_CPU 16000000UL
#include "act1.h"
#include "act2.h"
#include "act3.h"
#include "act4.h"

#include<avr/io.h>
#include<util/delay.h>

int main(void)
{
    peripheral_init(); //Initialise the button input registers
    Init_ADC(); //Initialise the ADC
    TimerWaveGenMode(); // Initialise timer
    uint16_t temp;
    int d;

    /**
     * @brief Infinite loop to run the microcontroller
     * 
     */
    while(1)
    {
       if(BUTTON_ON & HEATER_ON)
       {
                _delay_ms(2000);
                LED_ON; //make 0th bit of port B as 1, makes led glow
                temp = Read_ADC(0);
                d=outputbyPWM(temp);
                _delay_ms(20);
                USARTInit(103);
            USARTWriteChar(d);
            
                
            }
            else
            {
            
                _delay_ms(20);
                OCR1A = 0; //make PWM output 0 if switch is off
                LED_OFF; // make led off*/
            }
        
    }

 return 0;   
}
