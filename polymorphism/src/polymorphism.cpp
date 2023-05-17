#include "polymorphism.hpp"

#include <stdint.h>

#include <iostream>

#include <string>

Animal::Animal()
{
    std::cout << "New Animal in Town" << std::endl;
}

Cat::Cat(const std::string name_)
{
    Cat::name = name_;
    std::cout << "miau" << std::endl;
}

void Cat::operator+(const Cat &)
{
    std::cout << "Total chaos" << std::endl;
}

void Cat::operator+(const Bird &)
{
    std::cout << "Bird is dead" << std::endl;
}

Bird::Bird(const std::string name_)
{
    Bird::name = name_;
    std::cout << "tewpot" << std::endl;
}

void Bird::operator+(const Cat &)
{
    std::cout << Bird::name << " is dead" << std::endl;
}

void Bird::operator+(const Bird &)
{
    std::cout << "Synphony" << std::endl;
}
