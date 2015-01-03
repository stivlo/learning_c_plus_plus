cmake_minimum_required(VERSION 2.8.4)
project(array_and_vector)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -O0 -Wall -Wextra -Wpedantic")

set(SOURCE_FILES src/vector_test.cpp)
message("Source files: ${SOURCE_FILES}")
add_executable(vector_test ${SOURCE_FILES})

