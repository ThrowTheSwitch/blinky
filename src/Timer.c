#include "Timer.h"
#include <avr/interrupt.h>
#include <avr/io.h>

int ticks = 0;
BOOL toggle = FALSE;

void Timer_Init(void)
{
    cli();

    TCCR0B = 0x03;
    TIMSK0 = 0x01;

    sei();
}

BOOL Timer_ToggleRequested(void)
{
    BOOL ret = toggle;
    toggle = FALSE;
    return ret;
}

ISR(TIMER0_OVF_vect)
{
    ticks++;
    if (ticks == 500)
    {
        toggle = TRUE;
        ticks = 0;
    }
}