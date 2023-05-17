#ifndef POLYMORPHISM_9F1EA6E568CFE40E8873E497
#define POLYMORPHISM_9F1EA6E568CFE40E8873E497
#include <string>

class Animal
{
   public:
    Animal();
};

class Bird;

class Cat : public Animal
{
   private:
    std::string name;

   public:
    Cat(const std::string name_);
    void operator+(const Cat &);
    void operator+(const Bird &);
};

class Bird : public Animal
{
   private:
    std::string name;

   public:
    Bird(const std::string name_);
    void operator+(const Cat &);
    void operator+(const Bird &);
};

#endif
