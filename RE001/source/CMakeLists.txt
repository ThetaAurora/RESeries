cmake_minimum_required(VERSION 3.5)
project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "The Leading Hello World App"
        LANGUAGES CXX)
add_executable(HelloAppBinary main.cpp)
target_compile_definitions(HelloAppBinary PRIVATE cxx_std_20)