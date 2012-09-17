#include "LED.h"
#include <avr/io.h>
#include <avr/sfr_defs.h>

void LED_Init(void)
{
    PORTB = 0;
    DDRB |= _BV(DDB5);
}

void LED_Toggle(void)
{
    PORTB ^= _BV(PORTB5);
}
