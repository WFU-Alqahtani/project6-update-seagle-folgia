cmake_minimum_required(VERSION 3.14.5)
project(BinaryInsertionSort)

set(CMAKE_CXX_STANDARD 11)

add_executable(BinaryInsertionSort.h InsertionSort.cpp BinaryInsertionSort.cpp CityData.cpp CityData.h Node.h LinkedList.cpp LinkedList.h)