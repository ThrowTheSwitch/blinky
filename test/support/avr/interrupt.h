#ifndef _AVR_INTERRUPT_H_
#define _AVR_INTERRUPT_H_

#include <avr/io.h>

void sei(void); // Redefine the macro as a function so that it can be mocked by CMock
void cli(void); // Redefine the macro as a function so that it can be mocked by CMock
#define ISR(vector)

#endif
