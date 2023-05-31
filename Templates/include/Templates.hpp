#ifndef TEMPLATES_H_A14AE98D56A7D575CB4BB9D9
#define TEMPLATES_H_A14AE98D56A7D575CB4BB9D9

#include <iostream>

template <typename T>
auto my_com(T par_x, T par_y, float precision) -> bool
{
    return (abs(par_x - par_y) < precision);

};

#endif
