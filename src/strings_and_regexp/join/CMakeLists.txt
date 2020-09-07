cmake_minimum_required(VERSION 3.18)

project(join_strings)

add_executable(join join.cc)
set_property(TARGET join PROPERTY CXX_STANDARD 17)