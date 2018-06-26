cmake_minimum_required(VERSION 3.6)
project(Matrix)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        src/matrix.cpp
        src/matrix.h)

add_executable(matrix ${SOURCE_FILES})
