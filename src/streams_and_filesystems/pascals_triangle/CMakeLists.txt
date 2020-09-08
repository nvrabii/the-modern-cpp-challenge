cmake_minimum_required(VERSION 3.18)

project("Pascal's triange")

add_executable(pascals_triangle main.cc)
set_property(TARGET pascals_triangle PROPERTY CXX_STANDARD 17)