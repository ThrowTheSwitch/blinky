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

    cli_CMockExpect(19);

    sei_CMockExpect(20);



    Timer_Init();



    UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((TCCR0B)), (((void *)0)), (_U_UINT)24, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((TIMSK0)), (((void *)0)), (_U_UINT)25, UNITY_DISPLAY_STYLE_INT);

}
