cmake_minimum_required(VERSION 3.24)
project(Clang C)

set(CMAKE_C_STANDARD 11)

add_library(Clang library.c arr_pointer.c arr_pointer_f.c)
