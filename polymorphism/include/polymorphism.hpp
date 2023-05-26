#ifndef POLYMORPHISM_9F1EA6E568CFE40E8873E497
#define POLYMORPHISM_9F1EA6E568CFE40E8873E497
#include <string>

class Animal
{
   public:
    Animal();
    virtual void make_noise() const = 0;
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
    void make_noise() const override;
};

class Bird : public Animal
{
   private:
    std::string name;

   public:
    Bird(const std::string name_);
    void operator+(const Cat &);
    void operator+(const Bird &);
    void make_noise() const override;
};

#endif
