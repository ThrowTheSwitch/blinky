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
    System_AbortRequested_ExpectAndReturn(FALSE);
    System_AbortRequested_ExpectAndReturn(FALSE);
    System_AbortRequested_ExpectAndReturn(TRUE);

    AppMain();
}

