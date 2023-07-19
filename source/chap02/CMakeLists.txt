cmake_minimum_required(VERSION 3.10)
project(chap02)

set(CMAKE_CXX_STANDARD 11)

include_directories(solution)
aux_source_directory(solution src_list)

add_executable(chap02 main.cpp ${src_list})
