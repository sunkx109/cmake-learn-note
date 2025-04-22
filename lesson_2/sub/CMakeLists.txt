add_library(sub sub.cpp)
# target_include_directories(sub PRIVATE ../common)
target_link_libraries(sub PRIVATE common)
target_include_directories(sub PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}) # 添加头文件搜索路径