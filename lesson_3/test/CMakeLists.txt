enable_testing()


include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/../third_party/googletest/googletest/include
)


add_executable(
  test_calculator
  test_calculator.cpp
)

target_link_libraries(
    test_calculator
    calculator
)

target_link_libraries(
  test_calculator
  GTest::gtest_main
)
# include(GoogleTest)
# gtest_discover_tests(test_calculator)
 