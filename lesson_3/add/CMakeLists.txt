add_library(add add.cpp) # 定义一个add静态库
# target_include_directories(add PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../common) # 添加头文件搜索路径
target_link_libraries(add PRIVATE common) # 添加链接库
target_include_directories(add PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}) # 添加头文件搜索路径