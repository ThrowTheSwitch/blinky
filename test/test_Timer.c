#include "unity.h"
#include "Timer.h"
#include "Mockinterrupt.h"

extern char TCCR0B;
extern char TIMSK0;
extern char DDRB;

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Timer_Init_should_initialize_timer_to_overflow_at_1ms_interval(void)
{
    cli_Expect();
    sei_Expect();

    Timer_Init();

    TEST_ASSERT_EQUAL(3, TCCR0B);
    TEST_ASSERT_EQUAL(1, TIMSK0);
}

