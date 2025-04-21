add_executable(add add.cpp)
target_include_directories(add PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../common)
target_link_libraries(add PRIVATE common)