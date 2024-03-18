cmake_minimum_required(VERSION 3.21)

project(xxinit LANGUAGES CXX)



set(library_target_name xxinit-library)
set(executable_target_name xxinit-executable)



add_subdirectory(library)
add_subdirectory(executable)
