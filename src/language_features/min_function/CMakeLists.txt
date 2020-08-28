cmake_minimum_required(VERSION 3.18)

project(min_function LANGUAGES CXX)

add_executable(min_test min_test.cc)
set_property(TARGET container_add_test PROPERTY CXX_STANDARD 17)