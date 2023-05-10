#include "Inheritance.h"

#include <stdint.h>

#include <iostream>

void Shape::set_width(int8_t width_in)
{
    Shape::width_ = width_in;
}
void Shape::set_height(int8_t height_in)
{
    Shape::height_ = height_in;
}

void Paint_Cost::set(float cost)
{
    Paint_Cost::cost_ = cost;
}
float Paint_Cost::get_cost(float area)
{
    return (cost_ * area);
}

float Rectangle::get_area()
{
    return (width_ * height_);
}

float Triangle::get_area()
{
    return (width_ * height_ * 0.5);
}