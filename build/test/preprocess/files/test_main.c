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





    System_AbortRequested_CMockExpectAndReturn(21, (0));

    Timer_ToggleRequested_CMockExpectAndReturn(22, (0));





    System_AbortRequested_CMockExpectAndReturn(25, (0));

    Timer_ToggleRequested_CMockExpectAndReturn(26, (1));

    LED_Toggle_CMockExpect(27);



    System_AbortRequested_CMockExpectAndReturn(29, (1));



    AppMain();

}
