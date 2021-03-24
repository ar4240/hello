#include "unity.h"
#include "calc_head.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_sum(void)
{
  TEST_ASSERT_EQUAL(10, sum(5,5));
  TEST_ASSERT_EQUAL(-12, sum(-6,-6));
}
void test_sub(void)
{
  TEST_ASSERT_EQUAL(5, sub(10,5));
  TEST_ASSERT_EQUAL(-5, sub(5,10));
}
void test_mul(void)
{
  TEST_ASSERT_EQUAL(0, mul(0,0));
  TEST_ASSERT_EQUAL(-100, mul(10,-10));
}
void test_div(void)
{
  TEST_ASSERT_EQUAL(0, div(0,0));
  TEST_ASSERT_EQUAL(10, div(100,10));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_sum);
  RUN_TEST(test_sub);
  RUN_TEST(test_mul);
  RUN_TEST(test_div);

  /* Close the Unity Test Framework */
  return UNITY_END();
}