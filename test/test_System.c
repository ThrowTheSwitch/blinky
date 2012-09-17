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
    TEST_ASSERT_FALSE(System_AbortRequested());
}

