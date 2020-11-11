cmake_minimum_required(VERSION 3.15)
project (contest_10_11)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-Wall -Werror")

add_executable(roi roi.cpp)
add_executable(occurrences occurrences.cpp)
add_executable(lsp lps.cpp)