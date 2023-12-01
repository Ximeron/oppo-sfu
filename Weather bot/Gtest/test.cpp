#include "pch.h"
#include "../Weather bot/Date.cpp"
#include "../Weather bot/weath.cpp"
#include "../Weather bot/proto.cpp"
#include <fstream>
using namespace std;





TEST(Date, D_check) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(D_check(23,07,2004));
  EXPECT_TRUE(IsLeap(2024));

}
TEST(Date, Feb_test) {
	EXPECT_EQ(1, 1);

	EXPECT_FALSE(Feb_test(30,02,2024));

}

TEST(Error, No_Err_flag) {
	EXPECT_EQ(1, 1);
	bool Err_flag0 = false;
	try
	{
		std::string town0 = "Qwe-qasw";
		str_test(town0);
	}
	catch (const std::exception&)
	{
		Err_flag0 = true;
	}
	EXPECT_FALSE(Err_flag0);

}


TEST(Error, Err_flag0) {
	EXPECT_EQ(1, 1);
	bool Err_flag2 = false;
	try
	{
		std::string town0 = "-Qweqasw";
		str_test(town0);
	}
	catch (const std::exception&)
	{
		Err_flag2 = true;
	}
	EXPECT_TRUE(Err_flag2);
}

TEST(Error, Err_flag1) {
	EXPECT_EQ(1, 1);
	bool Err_flag2 = false;
	try
	{
		std::string town0 = "Qweqasw-";
		str_test(town0);
	}
	catch (const std::exception&)
	{
		Err_flag2 = true;
	}
	EXPECT_TRUE(Err_flag2);
}