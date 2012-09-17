#include "unity.h"
#include "main.h"
#include "MockSystem.h"
#include "MockLED.h"
#include "MockTimer.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_AppMain_should_initialize_modules_and_run_until_abort_requested(void)
{
    LED_Init_Expect();
    Timer_Init_Expect();

    // Test that no toggle happens
    System_AbortRequested_ExpectAndReturn(FALSE);
    Timer_ToggleRequested_ExpectAndReturn(FALSE);

    // Test that toggle happens when requested
    System_AbortRequested_ExpectAndReturn(FALSE);
    Timer_ToggleRequested_ExpectAndReturn(TRUE);
    LED_Toggle_Expect();

    System_AbortRequested_ExpectAndReturn(TRUE);

    AppMain();
}

