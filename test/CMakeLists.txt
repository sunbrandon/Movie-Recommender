CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(test_menu)

add_subdirectory(googletest)

ADD_EXECUTABLE(testOut
    testOut.cpp
    ../src/Output.cpp
)

target_link_libraries(testOut gmock gtest gtest_main)