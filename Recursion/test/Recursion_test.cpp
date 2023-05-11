#include "gtest/gtest.h"  // include the gtest functions & macros
#include "Recursion.h"

TEST(Sum, rec_number_0_100){
    ASSERT_EQ(5050, sum_rec(0,100));
}

TEST(Sum, for_number_0_100){
    ASSERT_EQ(5050, sum_for(0,100));
}

TEST(Sum, test_fail){
    ASSERT_EQ(5051, sum_for(0,100));
}