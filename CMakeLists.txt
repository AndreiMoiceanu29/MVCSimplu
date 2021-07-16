cmake_minimum_required(VERSION 3.19)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp console.cpp console.h Service.cpp Service.h cmake-build-debug/Repository.cpp cmake-build-debug/Repository.h Repository.cpp Repository.h Car.cpp Car.h)