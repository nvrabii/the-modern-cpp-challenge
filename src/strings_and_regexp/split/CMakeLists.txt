cmake_minimum_required(VERSION 3.18)

project(split_strings)

add_executable(split split.cc)
set_property(TARGET split PROPERTY CXX_STANDARD 17)