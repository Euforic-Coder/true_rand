cmake_minimum_required(VERSION 3.22)
project(true_rand)

set(CMAKE_CXX_STANDARD 14)

add_executable(test main.cpp)
add_library(true_rand true_rand.cpp true_rand.h)
target_link_libraries(test true_rand)
