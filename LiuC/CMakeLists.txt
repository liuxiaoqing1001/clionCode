cmake_minimum_required(VERSION 3.10)
project(C_liu C)

set(CMAKE_C_STANDARD 99)

add_executable(C_liu MyWork/C-R/compiler.c MyWork/C-R/revolver.c main.c)