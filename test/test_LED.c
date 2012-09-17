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
    DDRB = 0;

    LED_Init();

    TEST_ASSERT_BIT_HIGH(DDB5, DDRB);

    TEST_ASSERT_EQUAL_HEX8(0, PORTB);
}

void test_LED_Toggle_should_toggle_the_LED(void)
{
    PORTB = 0;

    LED_Toggle();

    TEST_ASSERT_EQUAL_HEX8(_BV(PORTB5), PORTB);

    LED_Toggle();

    TEST_ASSERT_EQUAL_HEX8(0, PORTB);

    PORTB = 0xFF;

    LED_Toggle();

    TEST_ASSERT_BIT_LOW(PORTB5, PORTB);

    PORTB = 0x20;

    LED_Toggle();

    TEST_ASSERT_BIT_LOW(PORTB5, PORTB);

    PORTB = 0x05;

    LED_Toggle();

    TEST_ASSERT_BIT_HIGH(PORTB5, PORTB);
}


