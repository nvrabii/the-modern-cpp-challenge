cmake_minimum_required(VERSION 3.18)

project(sys_handle_wrapper LANGUAGES CXX)

add_executable(shw_test shw_test.cc sys_handle_wrapper.hpp)
set_property(TARGET shw_test PROPERTY CXX_STANDARD 17)
