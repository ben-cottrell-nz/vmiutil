cmake_minimum_required(VERSION 3.21)
project(vmiutil)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_FLAGS "-DKS_STR_ENCODING_NONE")
add_executable(vmiutil
        main.cpp
        kaitai/kaitaistream.cpp
        kaitai/qcow2.cpp
        formats/qcow2format.cpp
        formats/qcow2format.h)
