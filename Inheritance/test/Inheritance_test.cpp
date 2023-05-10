#include "Inheritance.h"

#include "gtest/gtest.h"  // include the gtest functions & macros

#define width 5
#define height 7

Rectangle rect;
Triangle tri;

TEST(Inheritance_Test, Rect)
{
    rect.set_width(width);
    rect.set_height(height);
    ASSERT_EQ(rect.get_area(), width * height);
}

TEST(Inheritance_Test, Tri)
{
    tri.set_width(width);
    tri.set_height(height);
    ASSERT_EQ(tri.get_area(), width * height * 0.5);
}
