add_library(sub sub.cpp)
target_include_directories(sub PRIVATE ../common)
target_link_libraries(sub PRIVATE common)