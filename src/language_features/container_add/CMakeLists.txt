cmake_minimum_required(VERSION 3.18)

project(container_add LANGUAGES CXX)

add_executable(container_add_test container_add_test.cc)
set_property(TARGET container_add_test PROPERTY CXX_STANDARD 17)