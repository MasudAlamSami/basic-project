#include <gtest/gtest.h>

int multiply(int a, int b) {
    return a * b;
}

TEST(multiply, positive) {
    EXPECT_EQ(multiply(3, 4), 12);
}

TEST(multiply, negative) {
    EXPECT_EQ(multiply(-3, 4), -12);
}

TEST(multiply, zero) {
    EXPECT_EQ(multiply(0, 10), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
