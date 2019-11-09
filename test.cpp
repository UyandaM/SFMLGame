#include <gtest/gtest.h>
#include <iostream>
#include "logicalship.h"

using namespace std;
using std::unique_ptr;
using std::make_unique;
using std::shared_ptr;
using std::make_shared;

TEST(logicalship, Test1)
{
  int windowLength = 1920;
  int windowBreadth = 1080;
  auto ship = make_unique<logicalship>(windowBreadth,windowLength);

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
