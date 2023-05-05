#include <stdint.h>

#include <iostream>

#include "own_array.h"


auto main() -> int
{
    int elements = 5;
    own_array array(elements);

    for (int i = 0; i < elements; i++)
    {
        array.insert(i, i * 2);
    }

    for (int i = 0; i < elements; i++)
    {
        array.print(i);
    }

}
