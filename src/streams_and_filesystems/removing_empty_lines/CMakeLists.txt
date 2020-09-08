cmake_minimum_required(VERSION 3.18)

project("Removing empty lines")

add_executable(removing_empty_lines main.cc)
set_property(TARGET removing_empty_lines PROPERTY CXX_STANDARD 17)