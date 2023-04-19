#include <iostream>

using CppStruct = struct
{
    int a = 5;
    float b = 0.0F;

    void print() const
    {
        std::cout << "a = " << a << "; b = " << b << std::endl;
    }
};

auto main() -> int
{
    CppStruct my_struct;
    std::cout << "Printing struct" << std::endl;
    my_struct.print();
}