cmake_minimum_required(VERSION 3.16)
add_subdirectory(common)
add_subdirectory(add)
add_subdirectory(sub)
add_subdirectory(calculator)

add_executable(main main.cpp)
# target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/calculator)
target_link_libraries(main PRIVATE calculator)
