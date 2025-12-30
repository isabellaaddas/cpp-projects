cmake_minimum_required(VERSION 4.0)
project(cpp_projects)

set(CMAKE_CXX_STANDARD 14)

include_directories("Caesar Cipher")

add_executable(cpp_projects
        "Caesar Cipher/CaesarCipher.cpp"
        "Caesar Cipher/CaesarCipher.h")
