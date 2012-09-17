#include "unity.h"
#include "main.h"
#include "MockSystem.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_AppMain_should_run_until_abort_requested(void)

{

    System_AbortRequested_CMockExpectAndReturn(15, (0));

    System_AbortRequested_CMockExpectAndReturn(16, (0));

    System_AbortRequested_CMockExpectAndReturn(17, (1));



    AppMain();

}
