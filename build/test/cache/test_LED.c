#include "unity.h"
#include "LED.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_LED_Init_should_initialize_the_LED_OFF(void)

{

    PORTB = 0x55;



    LED_Init();



    UnityAssertEqualNumber((_U_SINT)(_US8 )((0)), (_U_SINT)(_US8 )((PORTB)), (((void *)0)), (_U_UINT)19, UNITY_DISPLAY_STYLE_HEX8);

}
