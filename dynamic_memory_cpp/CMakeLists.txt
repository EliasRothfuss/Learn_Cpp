# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(dynamic_memory_cpp VERSION 1.0 LANGUAGES CXX)

# define the c standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add some compile options
#add_compile_options(-Wall -Wextra -Werror -pedantic -O0)

# add a library for your student structure
add_library(own_array_exec src/own_array.cpp)
# add the includes to the library
target_include_directories(own_array_exec PUBLIC include)

# add an executabel and assign files to it
add_executable(main_exec src/main.cpp)

# add include directories to executable
target_include_directories(main_exec PRIVATE include)
# link your libraries
target_link_libraries(main_exec PRIVATE own_array_exec)



# check if we have gtest
find_package(GTest)
enable_testing()
# include the gtest CMake stuff
include(GoogleTest)
# create a test executable
add_executable(tests test/Test.cpp)
# link the gtest libraries
target_link_libraries(tests PRIVATE GTest::GTest GTest::Main)
# link the library we want to test
target_link_libraries(tests PRIVATE own_array_exec)
# add the include directories
target_include_directories(tests PUBLIC include)
# discover and add tests to the test list
gtest_discover_tests(tests)
