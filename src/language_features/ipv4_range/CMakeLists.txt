cmake_minimum_required(VERSION 3.18)

project(ipv4_range LANGUAGES CXX)

add_library(ipv4_lib STATIC ../src/language_features/ipv4_range/IPv4.cc
                            ../src/language_features/ipv4_range/IPv4.hpp)
                            
target_include_directories(ipv4_lib PUBLIC ../src/language_features/ipv4_range)
target_compile_features(ipv4_lib PUBLIC cxx_std_17)

add_executable(ipv4_range_test ../src/language_features/ipv4_range/ipv4_range_test.cc)
target_link_libraries(ipv4_range_test PUBLIC ipv4_lib)