#include <iostream>
#include <stdint.h>
#include "Inheritance.h"

auto main() -> int
{
    Rectangle rect;

    rect.set_width(5);
    rect.set_height(7);

    // Print the area of the object.
    std::cout << "Total area rect: " << rect.get_area() << std::endl;

    Triangle tri;

    tri.set_width(5);
    tri.set_height(7);

    // Print the area of the object.
    std::cout << "Total area tri: " << tri.get_area() << std::endl;

    Paint_Cost paint;
    paint.set(70);

    std::cout << "Total cost rect : " << paint.get_cost(rect.get_area()) << std::endl;
    std::cout << "Total cost rect : " << paint.get_cost(tri.get_area()) << std::endl;


    return 0;
}