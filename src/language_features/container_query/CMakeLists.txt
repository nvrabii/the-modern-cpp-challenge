cmake_minimum_required(VERSION 3.18)

project(container_query LANGUAGES CXX)

add_executable(container_query_test container_query_test.cc)
set_property(TARGET container_query_test PROPERTY CXX_STANDARD 17)