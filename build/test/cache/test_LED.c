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

    DDRB = 0;



    LED_Init();



    UnityAssertBits((_U_SINT)(((_UU32)1 << 5)), (_U_SINT)((_UU32)(-1)), (_U_SINT)((DDRB)), (((void *)0)), (_U_UINT)20);



    UnityAssertEqualNumber((_U_SINT)(_US8 )((0)), (_U_SINT)(_US8 )((PORTB)), (((void *)0)), (_U_UINT)22, UNITY_DISPLAY_STYLE_HEX8);

}



void test_LED_Toggle_should_toggle_the_LED(void)

{

    PORTB = 0;



    LED_Toggle();



    UnityAssertEqualNumber((_U_SINT)(_US8 )(((1 << (5)))), (_U_SINT)(_US8 )((PORTB)), (((void *)0)), (_U_UINT)31, UNITY_DISPLAY_STYLE_HEX8);



    LED_Toggle();



    UnityAssertEqualNumber((_U_SINT)(_US8 )((0)), (_U_SINT)(_US8 )((PORTB)), (((void *)0)), (_U_UINT)35, UNITY_DISPLAY_STYLE_HEX8);



    PORTB = 0xFF;



    LED_Toggle();



    UnityAssertBits((_U_SINT)(((_UU32)1 << 5)), (_U_SINT)((_UU32)(0)), (_U_SINT)((PORTB)), (((void *)0)), (_U_UINT)41);



    PORTB = 0x20;



    LED_Toggle();



    UnityAssertBits((_U_SINT)(((_UU32)1 << 5)), (_U_SINT)((_UU32)(0)), (_U_SINT)((PORTB)), (((void *)0)), (_U_UINT)47);



    PORTB = 0x05;



    LED_Toggle();



    UnityAssertBits((_U_SINT)(((_UU32)1 << 5)), (_U_SINT)((_UU32)(-1)), (_U_SINT)((PORTB)), (((void *)0)), (_U_UINT)53);

}
