cmake_minimum_required(VERSION 3.18)

project(caps)

add_executable(capitalize capitalize.cc)
set_property(TARGET capitalize PROPERTY CXX_STANDARD 17)