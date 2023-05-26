#include <iostream>
#include <stdint.h>
#include "polymorphism.hpp"

auto main() -> int
{
    Cat Cat1("Obolus");
    Bird Bird1("Marius");
    
    Cat1 + Bird1;
    Bird1 + Cat1;
    Bird1 + Bird1;
    Cat1 + Cat1;

    Cat1.make_noise();
    Bird1.make_noise();
}

