#include <stdint.h>

#include <iostream>
#include <memory>
#include <vector>

#include "polymorphism.hpp"

auto main() -> int
{
    std::vector<std::shared_ptr<Animal>> animals;

    for (int i = 0; i < 10; i++)
    {
        if (rand() % 2)
        {
            animals.push_back(std::make_shared<Cat>());
        }
        else
        {
            animals.push_back(std::make_shared<Bird>());
        }
    }

    for (auto &itr : animals)
    {
        itr -> make_noise();
    }

}
