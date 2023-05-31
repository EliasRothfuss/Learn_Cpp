#include "polymorphism.hpp"

#include <stdint.h>

#include <iostream>
#include <string>


void Cat::make_noise() const
{
    std::cout << "meow" << std::endl;
}

void Cat::operator+(const Cat &)
{
    std::cout << "Total chaos" << std::endl;
}

void Cat::operator+(const Bird &)
{
    std::cout << "Bird is dead" << std::endl;
}

void Bird::operator+(const Cat &)
{
    std::cout << "Bird is dead" << std::endl;
}

void Bird::operator+(const Bird &)
{
    std::cout << "Synphony" << std::endl;
}

void Bird::make_noise() const
{
    std::cout << "twitter" << std::endl;
}
