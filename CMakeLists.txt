cmake_minimum_required(VERSION 3.17)
project(Suffix_tree)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Suffix_tree
        main.cpp
        suffixtree.h)
