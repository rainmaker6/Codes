cmake_minimum_required(VERSION 3.20.0)

project (codes)

add_executable(a a.cpp) 
add_executable(b b.cpp) 
add_executable(c c.cpp)

enable_testing()

add_test(test1 a) 
add_test(test2 b) 
add_test(test3 c) 