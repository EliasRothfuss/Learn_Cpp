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
add_executable(exec_Hello_World Hello_World.c++)