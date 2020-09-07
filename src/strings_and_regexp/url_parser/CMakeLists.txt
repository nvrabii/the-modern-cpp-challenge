cmake_minimum_required(VERSION 3.18)

project(extract_url_parts)

add_executable(url_parser url_parser.cc)
set_property(TARGET url_parser PROPERTY CXX_STANDARD 17)