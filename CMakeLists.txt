cmake_minimum_required(VERSION 3.13)
project(LinkedListGarbageCollector)

set(CMAKE_CXX_STANDARD 14)

add_executable(LinkedListGarbageCollector main.cpp List.hpp Node.hpp Collector.hpp)