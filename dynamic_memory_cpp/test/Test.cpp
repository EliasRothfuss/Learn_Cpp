
#include "gtest/gtest.h"  // include the gtest functions & macros
#include "own_array.h"

#define number_of_elements 5
int in_data[number_of_elements] = {1, 1, 2, 3, 5};

own_array testarray(number_of_elements);

TEST(own_arry_Test, insert1)
{
    for (int i = 0; i < number_of_elements; i++)
    {
        testarray.insert(i, in_data[i]);
        ASSERT_EQ(in_data[i], testarray.get(i));
    }
}

TEST(own_arry_Test, insert2)
{
    for (int i = 0; i < number_of_elements; i++)
    {
        testarray.insert(i, in_data[i]*2);
        ASSERT_EQ(in_data[i]*2, testarray.get(i));
    }
}

TEST(own_arry_Test, newdec){
    own_array array2(10);
    int data[10] = {153,654,896,9876,8987,1,8964,64,97,24};
    for (int i = 0; i < number_of_elements; i++)
    {
        testarray.insert(i, in_data[i]);
        ASSERT_EQ(in_data[i], testarray.get(i));
    }

}