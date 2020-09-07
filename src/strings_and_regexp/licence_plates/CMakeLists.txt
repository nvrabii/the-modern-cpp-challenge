cmake_minimum_required(VERSION 3.18)

project(licence_plates_regex)

add_executable(licence_plates licence_plates.cc)
set_property(TARGET licence_plates PROPERTY CXX_STANDARD 17)