#ifndef INHERITANCE_HLDKHFSUIZ2893
#define INHERITANCE_HLDKHFSUIZ2893
#include <stdint.h>
class Shape
{
   public:  // C++ Access Specifiers
    void set_width(int8_t width_in);
    void set_height(int8_t height_in);

   protected:  // C++ Access Specifiers
    int8_t width_;
    int8_t height_;
};

class Paint_Cost{
    public:
    void set(float cost);
    float get_cost(float area);
    protected:
    float cost_;
};

class Rectangle : public Shape
{
   public:
    float get_area();
};

class Triangle : public Shape
{
   public:
    float get_area();
};
#endif