# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(LinkedList LANGUAGES CXX)

#dubug 模式
set (CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -g")

# 添加头文件路径
include_directories("${PROJECT_SOURCE_DIR}/exercise1")

add_executable(test_exercise1 test.cpp)

# 添加子目录
add_subdirectory(exercise1)

# 添加库
target_link_libraries(test_exercise1 exercise1)