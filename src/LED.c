#include "LED.h"
#include <avr/io.h>
#include <avr/sfr_defs.h>

void LED_Init(void)
{
    PORTB = 0;
}
