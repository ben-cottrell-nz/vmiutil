cmake_minimum_required(VERSION 3.21)
project(vmiutil)

set(CMAKE_CXX_STANDARD 17)

add_executable(vmiutil main.cpp ivmimageformatreader.cpp ivmimageformatreader.h qcow2format.cpp qcow2format.h)
