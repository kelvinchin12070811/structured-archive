#include <gtest/gtest.h>
#include <Test.hpp>

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(Hello, Test1) {
    ASSERT_EQ(35, getNum());
}