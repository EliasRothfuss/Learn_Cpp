#!/bin/bash
echo Project Name?
read ProjectName
echo Random_String?
read Random_String

mkdir $ProjectName
cd $ProjectName

cat << EOF > CMakeLists.txt
# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project($ProjectName VERSION 1.0 LANGUAGES CXX)

# define the c standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -Werror -pedantic -O0)

# add a library for your student structure
add_library(${ProjectName}_exec src/$ProjectName.cpp)
# add the includes to the library
target_include_directories(${ProjectName}_exec PUBLIC include)

# add an executabel and assign files to it
add_executable(main_exec src/main.cpp)

target_include_directories(main_exec PRIVATE include)
# link your libraries
target_link_libraries(main_exec PRIVATE ${ProjectName}_exec)

# check if we have gtest
find_package(GTest)
enable_testing()
# include the gtest CMake stuff
include(GoogleTest)
# create a test executable
add_executable(tests test/${ProjectName}_test.cpp)
# link the gtest libraries
target_link_libraries(tests PRIVATE GTest::GTest GTest::Main)
# link the library we want to test
target_link_libraries(tests PRIVATE ${ProjectName}_exec)
# add the include directories
target_include_directories(tests PUBLIC include)
# discover and add tests to the test list
gtest_discover_tests(tests)

EOF

mkdir include
cd include

cat << EOF > $ProjectName.h
#ifndef ${ProjectName^^}_${Random_String^^}
#define ${ProjectName^^}_${Random_String^^}

void say_hi();

#endif

EOF
cd ..

mkdir src
cd src

cat << EOF > main.cpp
#include <iostream>
#include <stdint.h>
#include "$ProjectName.h"

auto main() -> int
{
    say_hi();

    return 0;
}

EOF

cat << EOF > $ProjectName.cpp
#include <iostream>
#include <stdint.h>
#include "$ProjectName.h"

void say_hi()
{
    std::cout << "Project $ProjectName" << std::endl;
}

EOF
cd .. 

mkdir test
cd test

cat << EOF > ${ProjectName}_test.cpp
#include "gtest/gtest.h"  // include the gtest functions & macros
#include "$ProjectName.h"

EOF
cd ..

cp ../.gitignore .

code .