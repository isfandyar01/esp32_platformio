#include <unity.h>
#include <YHDC.hpp>



void test_add_two_ints( void)
{
    int sum = add(1,4);
    TEST_ASSERT_EQUAL_INT32(5,sum);
}
void rms_peak_current(void)
{
    TEST_FAIL(rms_to_peak_current);
}

void RUN_UNITY_TESTS() {
    UNITY_BEGIN();
    RUN_TEST(test_add_two_ints);
    RUN_TEST(rms_peak_current);
    UNITY_END();
}


int main(int argc, char **argv) {
    RUN_UNITY_TESTS();
    return 0;
}