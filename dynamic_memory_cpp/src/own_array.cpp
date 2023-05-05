#include <stdint.h>

#include <iostream>
#include <memory>

#include "own_array.h"



std::unique_ptr<int> array_ptr(new int);
own_array::own_array(int num_of_elements)
{
    std::shared_ptr<int[]> array_ptr(new int[num_of_elements]);
    if (array_ptr == nullptr)
    {
        std::cout << "Memory not allocated." << std::endl;
    }
    else
    {
        std::cout << "Memory successfully  allocated." << std::endl;
        own_array::ptr = array_ptr;
    }
}

void own_array::insert(int index, int data)
{
    own_array::ptr.get()[index] = data;
}

void own_array::print(int index)
{
    std::cout << own_array::ptr.get()[index] << std::endl;
}

int own_array::get(int index){
    return own_array::ptr.get()[index];
}