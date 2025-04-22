add_library(calculator STATIC calculator.cpp) # 定义一个calculator静态库
# target_include_directories(calculator PRIVATE ../add ../sub) # 添加头文件搜索路径
target_link_libraries(calculator PRIVATE add sub) # 添加链接库
target_include_directories(calculator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}) # 添加头文件搜索路径