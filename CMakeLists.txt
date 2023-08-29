cmake_minimum_required(VERSION 3.4)
project(pybind_template)

# output path
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/scripts)

include_directories(deps/eigen)
add_subdirectory(deps/pybind11)
pybind11_add_module(
        pybind_example
        src/pybind_test.h
        src/pybind_test.cpp
        src/pybind_bind.cpp)