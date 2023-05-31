#include <stdint.h>

#include <Templates.hpp>
#include <iostream>

auto main() -> int
{
    std::cout << my_com<int>(1, 2, 1.5) << std::endl;
    std::cout << my_com<double>(3.0, 7.0, 0.5) << std::endl;
    std::cout << my_com<double>(3.0, 2.88, 0.5) << std::endl;
    std::cout << my_com<int>(4, 5, 2) << std::endl;
    return 0;
}