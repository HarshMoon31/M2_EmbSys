/**
 * @file Activity_1.h
 * @author Harsh R Moon
 * @brief Inistialising input output ports
 * @version 0.1
 * @date 2022-02-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

void initialise();

#define occupied (!(PIND&(3<<PD0)))

#endif
