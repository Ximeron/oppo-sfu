#include "pch.h"
#include <gtest/gtest.h>


#include "../../Weather bot/Weather bot/Date.h"

#include "../../Weather bot/Weather bot/weath.h"

class TestD : public testing::Test {
protected:
	Date date = Date(1, 1, 1);
	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);
	void setDate(int d, int m, int y) {
		date.dd = d;
		date.mm = m;
		date.yy = y;

	}
	int runCheck() { return (D_check(date.dd, date.mm, date.yy) && Feb_test(date.dd, date.mm, date.yy)); }
};



TEST(DateCheck, Day) {
  EXPECT_EQ(1, 1);
  ASSERT_TRUE(D_check(date.dd,date.mm,date.yy));
}


