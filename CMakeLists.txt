cmake_minimum_required(VERSION 3.23)
project(fibonacci)

set(CMAKE_CXX_STANDARD 14)

add_executable(fibonacci main.cpp fibonacci.cpp fibonacci.h Timer.cpp Timer.h)
