CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(test_menu)

add_subdirectory(googletest)

ADD_EXECUTABLE(test
    testOut.cpp
    ../src/Input.cpp
    ../src/Output.cpp
)

target_link_libraries(test gmock gtest gtest_main)