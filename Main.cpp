#include <gtest/gtest.h>

int add(int a, int b) {
    return a + b;
}

TEST(add, positive) {
    EXPECT_EQ(add(3, 4), 12);
}

TEST(add, negative) {
    EXPECT_EQ(add(-3, 4), -12);
}

TEST(add, zero) {
    EXPECT_EQ(add(0, 10), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
