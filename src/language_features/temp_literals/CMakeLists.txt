cmake_minimum_required(VERSION 3.18)

project(temp_literals)

add_executable(temp_literals_test temp_literals_test.cc temp_literals.hpp)
set_property(TARGET temp_literals_test PROPERTY CXX_STANDARD 17)