cmake_minimum_required(VERSION 3.18)

project("Directory size")

add_executable(directory_size main.cc)
set_property(TARGET directory_size PROPERTY CXX_STANDARD 17)