#include "pch.h"
#include "../Weather bot/Date.cpp"
#include "../Weather bot/weath.cpp"
#include <fstream>
#include <sstream>

using namespace std;





TEST(Date, DateConfirm) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(DateConfirm(23,07,2004));
  EXPECT_TRUE(LeapAssert(2024));

}
TEST(Date, FebruaryAssert) {
	EXPECT_EQ(1, 1);
	EXPECT_FALSE(FebruaryAssert(30, 02, 2024));
	EXPECT_TRUE(FebruaryAssert(29, 02, 2024));
	EXPECT_TRUE(FebruaryAssert(28, 02, 2023));




}


TEST(Stream, GetDate) {
	
	std::istringstream q("29.02.2024 krsk-bhhv 27.3");
	EXPECT_EQ(1, 1);
	Date dq = GetDate(q);
	EXPECT_TRUE(DateConfirm(dq.dd, dq.mm, dq.yy));





}
TEST(Stream, GetALL) {

	std::istringstream ws("29.02.2024 krsk-bhhv 27.3");
	EXPECT_EQ(1, 1);
	Weather wq = GetWeather(ws);
	EXPECT_TRUE(DateConfirm(wq.d.dd, wq.d.mm, wq.d.yy));
	EXPECT_TRUE(StringTest(wq.place));






}


TEST(Date, Wrong_day) {
	EXPECT_EQ(1, 1);
	EXPECT_FALSE(DateConfirm(0, 07, 2004));
	EXPECT_FALSE(DateConfirm(32, 07, 2004));
	EXPECT_FALSE(DateConfirm(-12, 07, 2004));
}
TEST(Date, Wrong_month) {
	EXPECT_EQ(1, 1);
	EXPECT_FALSE(DateConfirm(12, 0, 2004));
	EXPECT_FALSE(DateConfirm(27, 13, 2004));
	EXPECT_FALSE(DateConfirm(5, -3, 2004));
}
TEST(Date, Wrong_year) {
	EXPECT_EQ(1, 1);
	EXPECT_FALSE(DateConfirm(12, 3, 0));
	EXPECT_FALSE(DateConfirm(27, 5, -2018));
}


TEST(Error, No_Err_flag) {
	EXPECT_EQ(1, 1);
	bool Err_flag0 = false;
	try
	{
		std::string town0 = "Qwe-qasw";
		StringTest(town0);
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
		StringTest(town0);
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
		StringTest(town0);
	}
	catch (const std::exception&)
	{
		Err_flag2 = true;
	}
	EXPECT_TRUE(Err_flag2);
}

