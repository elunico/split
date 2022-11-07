cmake_minimum_required(VERSION 3.23)
project(split C)

set(CMAKE_C_FLAGS -O3)

set(CMAKE_C_STANDARD 99)

add_executable(split main.c)
