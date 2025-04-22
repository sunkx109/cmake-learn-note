add_library(common SHARED common.cpp)
target_include_directories(common PUBLIC   ${CMAKE_CURRENT_SOURCE_DIR})