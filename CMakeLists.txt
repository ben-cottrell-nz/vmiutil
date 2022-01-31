cmake_minimum_required(VERSION 3.21)
project(vmiutil)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
if (${CMAKE_CXX_COMPILER_ID} STREQUAL "Clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ggdb -D_GLIBCXX_DEBUG -disable-llvm-optzns -stdlib=libstdc++")
endif()
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DKS_STR_ENCODING_NONE -Wl,-rpath -Wl,/usr/local/lib64")
add_executable(vmiutil
        main.cpp
        kaitai/kaitaistream.cpp
        kaitai/qcow2.cpp
        formats/qcow2format.cpp
        formats/qcow2format.h memory_stream_wrapper.h)
