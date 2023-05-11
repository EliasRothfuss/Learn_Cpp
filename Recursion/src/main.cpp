#include <iostream>
#include <stdint.h>
#include "Recursion.h"

auto main() -> int
{
    std::cout << "Recursion " << sum_rec(0,100) << std::endl;
    std::cout << "For " << sum_for(0,100) << std::endl;

    return 0;
}

