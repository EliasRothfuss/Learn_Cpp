#include "Recursion.h"

#include <stdint.h>

#include <iostream>

int sum_rec(int start, int end)
{
    if (start == end)
    {
        return 0;
    }
    else
    {
        return end + sum_rec(start, end-1);
    }
}

int sum_for(int start, int end)
{
    int v = 0;
    for (int i = start; i < end + 1; i++)
    {
        v = v + i;
    }
    return v;
}
