#include <unity.h>

void RUN_UNITY_TESTS() {
    UNITY_BEGIN();
    RUN_TEST(test_calculator_addition);
    RUN_TEST(test_calculator_subtraction);
    RUN_TEST(test_calculator_multiplication);
    RUN_TEST(test_calculator_division);
    RUN_TEST(test_expensive_operation);
    UNITY_END();
}


int main(int argc, char **argv) {
    RUN_UNITY_TESTS();
    return 0;
}