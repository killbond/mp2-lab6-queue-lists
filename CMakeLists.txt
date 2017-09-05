cmake_minimum_required(VERSION 3.8)
project(queue_lists)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/List.cpp include/List.h src/Node.cpp include/Node.h src/Queue.cpp include/Queue.h)
add_executable(queue_lists ${SOURCE_FILES})