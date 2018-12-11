#include "pch.h"
#include <iostream>
// #include "07-ex1.hpp"
#include "gtest/gtest.h"

using namespace std;

//TEST(ReverseStr_Test, Normal)
//{
//	string str = "abc123";
//	reverse_str(str);
//
//	EXPECT_EQ("321cba", str);
//}

TEST(Test1, test1_1) {
	int num1 = 1;
	int num2 = 1;

	ASSERT_EQ(num1, num2);  // 成功する

}

//int main(int argc, char **argv)
//{
//	::testing::InitGoogleTest(&argc, argv);
//	return RUN_ALL_TESTS();
//}