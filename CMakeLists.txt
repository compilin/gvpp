cmake_minimum_required(VERSION 3.5)
project(gvpp)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "./lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "./lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "./bin")

add_library(gvpp src/gvpp.hpp src/gvpp.cpp)
add_executable(gvpp_test src/gvpp-test.cpp)

target_link_libraries(gvpp_test gvpp)
