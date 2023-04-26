#!/bin/bash
echo Project Name
read ProjectName

mkdir $ProjectName
cd $ProjectName

cat << EOF > $ProjectName.c++
#include <iostream>
#include <stdint.h>

auto main() -> int
{
    std::cout << "Project $ProjectName" << std::endl;
}
EOF

cat << EOF > CMakeLists.txt
# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(Hello_World VERSION 1.0 LANGUAGES CXX)

# define the c standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -Werror -pedantic -O0)

# add an executabel and assign files to it
add_executable(exec_$ProjectName $ProjectName.c++)
EOF

code .