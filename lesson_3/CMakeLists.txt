cmake_minimum_required(VERSION 3.16)
project(LESSON_3)

add_subdirectory(common)
add_subdirectory(add)
add_subdirectory(sub)
add_subdirectory(calculator)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE calculator)

option(ENABLE_TESTS "Enable tests" ON)
if(ENABLE_TESTS)
   add_subdirectory(${CMAKE_SOURCE_DIR}/third_party/googletest)
   add_subdirectory(test)
endif()
