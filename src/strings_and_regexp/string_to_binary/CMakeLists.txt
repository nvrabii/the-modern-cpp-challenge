cmake_minimum_required(VERSION 3.18)

project(string_to_bin)

add_executable(string_to_binary string_to_binary.cc)
set_property(TARGET string_to_binary PROPERTY CXX_STANDARD 17)