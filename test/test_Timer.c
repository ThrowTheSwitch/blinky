#include "unity.h"
#include "Timer.h"
#include "Mockinterrupt.h"

extern char TCCR0B;
extern char TIMSK0;
extern char DDRB;

extern BOOL toggle;

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Timer_should_initialize_ticks_to_0(void)
{
    TEST_ASSERT_EQUAL(0, ticks);
}


void test_Timer_Init_should_initialize_timer_to_overflow_at_1ms_interval(void)
{
    cli_Expect();
    sei_Expect();

    Timer_Init();

    TEST_ASSERT_EQUAL(3, TCCR0B);
    TEST_ASSERT_EQUAL(1, TIMSK0);
}

void test_Timer_ToggleRequested_should_return_toggle_status_and_reset_if_signaled(void)
{
    toggle = FALSE;

    TEST_ASSERT_FALSE(Timer_ToggleRequested());

    toggle = TRUE;

    TEST_ASSERT_TRUE(Timer_ToggleRequested());

    TEST_ASSERT_FALSE(Timer_ToggleRequested());
}


void test_ISR_should_signal_every_500ms(void)
{
    ticks = 0;
    toggle = FALSE;

    isr();

    TEST_ASSERT_EQUAL(1, ticks);
    TEST_ASSERT_FALSE(toggle);

    ticks = 499;

    isr();

    TEST_ASSERT_EQUAL(0, ticks);
    TEST_ASSERT_TRUE(toggle);
}

