#include "pch.h"
#include <gtest/gtest.h>


#include "../../Weather bot/Weather bot/Date.h"

#include "../../Weather bot/Weather bot/weath.h"

class TestD : public testing::Test {
protected:
	Date date;
	void setDate(int d, int m, int y) {
		date.dd = d;
		date.mm = m;
		date.yy = y;

	}
	int runCheck() { return (D_check(date.dd, date.mm, date.yy) && Feb_test(date.dd, date.mm, date.yy)); }
};



TEST(DATECHECK, DAY) {
  EXPECT_EQ(1, 1);
  ASSERT_TRUE(D_check(20,07,2004));


}

TEST(DATECHECK, DATE_CORRECT) {
	int d = 20;
	int m = 7;
	int y = 2004;
	EXPECT_FALSE(IsLeap(y));

	EXPECT_TRUE(D_check(d, m, y));
	EXPECT_FALSE(Feb_test(d, m, y));

}

TEST(DATECHECK, DAY_INCOR) {
	int d = 32;
	int m = 7;
	int y = 2004;
	EXPECT_FALSE(IsLeap(y));

	EXPECT_FALSE(D_check(d, m, y));
	EXPECT_FALSE(Feb_test(d, m, y));

}

TEST(DATECHECK, MONTH_INCOR) {
	int d = 20;
	int m = 13;
	int y = 2004;
	EXPECT_FALSE(IsLeap(y));

	EXPECT_FALSE(D_check(d, m, y));
	EXPECT_FALSE(Feb_test(d, m, y));

}
TEST(DATECHECK, YEAR_INCOR) {
	int d = 20;
	int m = 13;
	int y = 0;
	EXPECT_FALSE(IsLeap(y));

	EXPECT_FALSE(D_check(d, m, y));
	EXPECT_FALSE(Feb_test(d, m, y));

}


int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

