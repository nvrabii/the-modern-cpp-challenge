cmake_minimum_required(VERSION 3.18)

project(date_to_string_convert)

add_executable(date_to_string date_to_string.cc)
set_property(TARGET date_to_string PROPERTY CXX_STANDARD 17)