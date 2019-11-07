#include "functions.cpp"
#include <gtest/gtest.h>

TEST(logicalship, Test1)
{
    EXPECT_EQ(1,1);
    int a = atan(1)/45;
    EXPECT_EQ(degreesToRadians(1),a);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}