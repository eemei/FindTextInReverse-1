#include "unity.h"
#include "Reverse.h"

void setUp(void){}

void tearDown(void){}


void test_Reverse_given_LOVE_find_O_should_return_1(void)
{
	TEST_ASSERT_EQUAL(1,Reverse("LOVE", "O"));
}

void test_Reverse_given_PAOH_find_B_should_return_minus1(void)
{
	TEST_ASSERT_EQUAL(-1,Reverse("PAOH", "B"));
}

void test_Reverse_given_PAOH_find_AO_should_return_1(void)
{
	TEST_ASSERT_EQUAL(1,Reverse("PAOH", "AO"));
}

void test_Reverse_given_PAOAH_find_AB_should_return_minus1(void)
{
	TEST_ASSERT_EQUAL(-1,Reverse("PAOAH", "AB"));
}

void test_Reverse_given_PAOAOAH_find_AO_should_return_3(void)
{
	TEST_ASSERT_EQUAL(3,Reverse("PAOAOAH", "AO"));
}

void test_Reverse_given_PAOAOAIAOAH_find_AOA_should_return_7(void)
{
	TEST_ASSERT_EQUAL(7,Reverse("PAOAOAIAOAH", "AOA"));
}

void test_Reverse_given_PABAAOH_find_AO_should_return_4(void)
{
	TEST_ASSERT_EQUAL(4,Reverse("PABAAOH", "AO"));
}

void test_Reverse_given_PA_BAAOH_find_AOH_should_return_5(void)
{
	TEST_ASSERT_EQUAL(5,Reverse("PA BAAOH", "AOH"));
}

void test_Reverse_given_PAOBAAOH_find_AOH_should_return_5(void)
{
	TEST_ASSERT_EQUAL(5,Reverse("PAOBAAOH", "AOH"));
}

void test_Reverse_given_PAOBAAOOOH_find_AOOF_should_return_minus1(void)
{
	TEST_ASSERT_EQUAL(-1,Reverse("PAOBAAOOH", "AOOF"));
}