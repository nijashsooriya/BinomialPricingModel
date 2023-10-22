cmake_minimum_required(VERSION 3.26)
project(BinomialModelPricing)

set(CMAKE_CXX_STANDARD 17)

add_executable(BinomialModelPricing main.cpp
        Node.cpp
        Node.h)
