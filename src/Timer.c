#include "Timer.h"
#include <avr/interrupt.h>
#include <avr/io.h>

#ifdef TEST
char TCCR0B;
char TIMSK0;
char DDRB;
#endif

void Timer_Init(void)
{
    cli();

    TCCR0B = 0x03;
    TIMSK0 = 0x01;

    sei();
}