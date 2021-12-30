cmake_minimum_required(VERSION 3.20)
project(minimum_depth_of_binary_tree)

set(CMAKE_CXX_STANDARD 17)

add_executable(minimum_depth_of_binary_tree main.cpp)
add_subdirectory(binary-tree-playground)
target_link_libraries(minimum_depth_of_binary_tree binary_tree)
