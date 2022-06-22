#include "unity.h"
#include "function.h"

#define PROJECT_NAME  "My-Calendar"

void test_Find out the day(void)
{
TEST_ASSERT_EQUAL(pass,Day(1));
}
void test_print all the day of month(void)
{
TEST_ASSERT_EQUAL(pass,displaymonth(1));
}
void test_add note(void){
TEST_ASSERT_EQUAL(pass,Note added(1));
}
int main()
{
UNITY_BEGIN();

    RUN_TEST(test_Find out the day);
    RUN_TEST(test_print all the day of month);
    RUN_TEST(test_add note);

return UNITY_END();
}
