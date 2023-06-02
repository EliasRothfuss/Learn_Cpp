#include <stdint.h>

#include <iostream>
#include <exception>
#include "Exception.hpp"

struct My_Exception : std::exception
{
    const char* what() const noexcept override
    {
        return "User Error\nPlease replace User and try again";
    }
};

auto main() -> int
{
    try
    {
        throw My_Exception();
    }
    catch (My_Exception& my_except)
    {
        std::cout << my_except.what() << std::endl;
    }

    return 0;
}
