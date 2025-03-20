cmake_minimum_required(VERSION 3.30)
project(lab16_zachrt)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab16_zachrt
    Tests/test1.cpp
    Tests/test2.cpp
    Tests/test3.cpp
    lab16.cpp
    lab16Driver.cpp)
