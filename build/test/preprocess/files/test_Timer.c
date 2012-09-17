#include "unity.h"
#include "Timer.h"
#include "Mockinterrupt.h"


extern char TCCR0B;

extern char TIMSK0;

extern char DDRB;



extern int toggle;



void setUp(void)

{

}



void tearDown(void)

{

}



void test_Timer_should_initialize_ticks_to_0(void)

{

    UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ticks)), (((void *)0)), (_U_UINT)21, UNITY_DISPLAY_STYLE_INT);

}





void test_Timer_Init_should_initialize_timer_to_overflow_at_1ms_interval(void)

{

    cli_CMockExpect(27);

    sei_CMockExpect(28);



    Timer_Init();



    UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((TCCR0B)), (((void *)0)), (_U_UINT)32, UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((TIMSK0)), (((void *)0)), (_U_UINT)33, UNITY_DISPLAY_STYLE_INT);

}



void test_Timer_ToggleRequested_should_return_toggle_status_and_reset_if_signaled(void)

{

    toggle = (0);



    if (!(Timer_ToggleRequested())) {} else {UnityFail( (" Expected FALSE Was TRUE"), (_U_UINT)(_U_UINT)40);;};



    toggle = (1);



    if ((Timer_ToggleRequested())) {} else {UnityFail( (" Expected TRUE Was FALSE"), (_U_UINT)(_U_UINT)44);;};



    if (!(Timer_ToggleRequested())) {} else {UnityFail( (" Expected FALSE Was TRUE"), (_U_UINT)(_U_UINT)46);;};

}





void test_ISR_should_signal_every_500ms(void)

{

    ticks = 0;

    toggle = (0);



    isr();



    UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ticks)), (((void *)0)), (_U_UINT)57, UNITY_DISPLAY_STYLE_INT);

    if (!(toggle)) {} else {UnityFail( (" Expected FALSE Was TRUE"), (_U_UINT)(_U_UINT)58);;};



    ticks = 499;



    isr();



    UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((ticks)), (((void *)0)), (_U_UINT)64, UNITY_DISPLAY_STYLE_INT);

    if ((toggle)) {} else {UnityFail( (" Expected TRUE Was FALSE"), (_U_UINT)(_U_UINT)65);;};

}
