cmake_minimum_required(VERSION 3.16)

project(CMAKE_LEARN)

# Lesson 0: Basic CMake
# include_directories(add)
# add_executable(main main.cpp add/add.cpp)

# Lesson 1-1: Creating a Library
# add_subdirectory(add)

# Lesson 1-2: Using a Library

include_directories(./lib)
# link_libraries(/root/cmake-learn/lib/libadd_static.a)
add_executable(main main.cpp)
target_link_libraries(main   /root/cmake-learn/lib/libadd_shared.so) # 绝对路径