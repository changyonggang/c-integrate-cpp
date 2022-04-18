cmake_minimum_required(VERSION 2.5)
# 此处需要添加上 CXX
project(c_integrate_cpp C CXX)

set(CMAKE_C_STANDARD 99)

add_subdirectory(sub_lib)

add_executable(c_integrate_cpp main.c)

target_link_libraries(c_integrate_cpp sub_lib)