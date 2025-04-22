#include <gtest/gtest.h>
#include "calculator.h"


TEST(TestAdd , TestCalculator)
{
    Calculator cal;
    EXPECT_EQ(cal.caladd(1,4), 5);
    EXPECT_EQ(cal.caladd(2,3), 5);
    EXPECT_EQ(cal.caladd(2,2), 4);
}


TEST(TestSub , TestCalculator)
{
    Calculator cal;
    EXPECT_EQ(cal.calsub(5,4), 1);
    EXPECT_EQ(cal.calsub(3,2), 1);
    EXPECT_EQ(cal.calsub(2,2), 0);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}