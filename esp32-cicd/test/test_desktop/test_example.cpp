#include <unity.h>
#include <example.hpp>



void test_add_two_ints( void)
{
    int sum = add(1,4);
    TEST_ASSERT_EQUAL_INT32(5,sum);
}

void RUN_UNITY_TESTS() {
    UNITY_BEGIN();
    RUN_TEST(test_add_two_ints);
    UNITY_END();
}


int main(int argc, char **argv) {
    RUN_UNITY_TESTS();
    return 0;
}