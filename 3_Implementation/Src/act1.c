#include "act1.h"

/**
 * @brief function for declaring peripherals led,button,heater.
 * 
 */
void peripherals(){
SET_LED_AS_OUTPUT;
 SET_BUTTON_AS_INPUT;
 SET_HEATER_AS_INPUT;
 PULL_UP_BUTTON;
 PULL_UP_HEATER ;


}
