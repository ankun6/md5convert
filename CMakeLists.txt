cmake_minimum_required(VERSION 3.14)
project(md5 C)

set(CMAKE_C_STANDARD 99)

add_executable(md5 main.c md5.c md5.h)