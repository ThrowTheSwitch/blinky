#include "unity.h"
#include "System.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_System_AbortRequested_should_return_FALSE_for_now(void)

{

    if (!(System_AbortRequested())) {} else {UnityFail( (" Expected FALSE Was TRUE"), (_U_UINT)(_U_UINT)14);;};

}
