cmake_minimum_required(VERSION 3.18)

project("Processes table")

add_executable(processes_table main.cc)
set_property(TARGET processes_table PROPERTY CXX_STANDARD 17)