#include "Templates.hpp"

#include "gtest/gtest.h"  // include the gtest functions & macros

TEST(Compare_Template, Int)
{
    ASSERT_TRUE(my_com<int>(1, 2, 1.1));
    ASSERT_TRUE(my_com<int>(5, 4, 1.1));
    ASSERT_FALSE(my_com<int>(1, 2, 1));
    ASSERT_FALSE(my_com<int>(5, 4, 1));
}
TEST(Compare_Template, Float)
{
    ASSERT_TRUE(my_com<float>(1.3, 1.9, 0.9));
    ASSERT_TRUE(my_com<float>(4.23, 4.2, 0.1));
    ASSERT_FALSE(my_com<float>(9.2, 10.9, 0.5));
    ASSERT_FALSE(my_com<float>(7.3, 4.2, 0.2));
}