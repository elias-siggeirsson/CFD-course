cmake_minimum_required (VERSION 2.6)
project (CFD)
set(CMAKE_CXX_STANDARD 11)  # enable C++11 standard
#set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
#set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
add_executable(Geometry geometry.cpp main.cpp cell.cpp)
