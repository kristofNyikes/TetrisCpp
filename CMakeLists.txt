cmake_minimum_required(VERSION 3.30)
project(TetrisCpp)

set(CMAKE_CXX_STANDARD 26)
find_package(raylib CONFIG REQUIRED)

add_executable(TetrisCpp src/main.cpp)

target_link_libraries(TetrisCpp PRIVATE raylib)