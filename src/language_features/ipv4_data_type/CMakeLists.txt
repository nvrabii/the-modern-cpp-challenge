cmake_minimum_required(VERSION 3.18)

project(ipv4_data_type LANGUAGES CXX)

add_library(ipv4_lib STATIC ../src/language_features/ipv4_data_type/IPv4.cc
                            ../src/language_features/ipv4_data_type/IPv4.hpp)

target_include_directories(ipv4_lib PUBLIC ../src/language_features/ipv4_data_type)
target_compile_features(ipv4_lib PUBLIC cxx_std_17)

add_executable(ipv4_test ../src/language_features/ipv4_data_type/ipv4_test.cc)
target_link_libraries(ipv4_test PUBLIC ipv4_lib)