CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(test_menu)

add_subdirectory(googletest)

ADD_EXECUTABLE(testRandom
    randomTest.cpp
    ../src/Menu.cpp
)

target_link_libraries(testRandom gmock gtest gtest_main)