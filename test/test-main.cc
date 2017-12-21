#include "gtest/gtest.h"

#include "hoge.h"

TEST(HogeTest, Basic1) {
  Hoge h;
  ASSERT_EQ(8, h.Add5(3));
}

TEST(HogeTest, Basic2) {
  Hoge h;
  ASSERT_EQ(5, h.Add5(0));
}

int main(int argc, char** argv) {
  ::testing::FLAGS_gtest_shuffle = true;
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
