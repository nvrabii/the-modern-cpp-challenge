cmake_minimum_required(VERSION 3.18)

project(bin_to_string)

add_executable(binary_to_string binary_to_string.cc)
set_property(TARGET binary_to_string PROPERTY CXX_STANDARD 17)