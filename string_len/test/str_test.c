#include "unity.h"
#include "str_head.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_length(void)
{
  TEST_ASSERT_EQUAL(3,length1("abc"));
}
void test_sum(void)
{
  TEST_ASSERT_EQUAL(5, sum_length("abc","de"));
}
void test_max(void)
{
  TEST_ASSERT_EQUAL(5, maxlength(5,3));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_length);
  RUN_TEST(test_sum);
  RUN_TEST(test_max);


  /* Close the Unity Test Framework */
  return UNITY_END();
}