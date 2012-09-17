#include "unity.h"
#include "main.h"
#include "MockTimer.h"
#include "MockSystem.h"
#include "MockLED.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_AppMain_should_initialize_modules_and_run_until_abort_requested(void)

{

    LED_Init_CMockExpect(17);

    Timer_Init_CMockExpect(18);

    System_AbortRequested_CMockExpectAndReturn(19, (0));

    System_AbortRequested_CMockExpectAndReturn(20, (0));

    System_AbortRequested_CMockExpectAndReturn(21, (1));



    AppMain();

}
