/**
 * @file Activity_1.c
 * @author Harsh R Moon
 * @brief this initial conditions must br true to run code
 * @version 0.1
 * @date 2022-02-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include "Activity_1.h"

/**
 * @brief TO INITIALISE PORTS
 * 
 */
void initialise()
{
    DDRB|=(1<<PB0);
    DDRD&=~(3<<PD0);
    PORTD|=(3<<PD0);
}
