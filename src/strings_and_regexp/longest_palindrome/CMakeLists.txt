cmake_minimum_required(VERSION 3.18)

project(palindrome)

add_executable(longest_palindrome longest_palindrome.cc)
set_property(TARGET longest_palindrome PROPERTY CXX_STANDARD 17)