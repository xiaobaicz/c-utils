cmake_minimum_required(VERSION 3.12)

project(C-Utils)

set(CMAKE_C_STANDARD 11)

add_executable(c-utils main.c sort/debug.c sort/swap.c sort/quick.c sort/heap.c)