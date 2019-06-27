cmake_minimum_required(VERSION 3.14)
project(tunsafe)

set(CMAKE_CXX_STANDARD 11)

include_directories(".")
add_definitions(" -DWITH_NETWORK_BSD=1 -DNDEBUG=1 -Wno-deprecated-declarations -fno-exceptions -fno-rtti -ffunction-sections")

add_executable(tunsafe
        tunsafe_amalgam.cpp
        chacha20-x64-osx.o
        poly1305-x64-osx.o
        )