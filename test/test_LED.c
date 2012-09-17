#include "unity.h"
#include "LED.h"
#include <avr/io.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_LED_Init_should_initialize_the_LED_OFF(void)
{
    PORTB = 0x55;

    LED_Init();

    TEST_ASSERT_EQUAL_HEX8(0, PORTB);
}

