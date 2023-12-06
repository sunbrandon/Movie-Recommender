CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(test_menu)

add_subdirectory(googletest)

ADD_EXECUTABLE(test
    testOut.cpp
    ../src/Input.cpp
    ../src/Movie.cpp
    ../src/Output.cpp
    ../src/Quiz.cpp
    ../src/Random.cpp
    ../src/Search.cpp
    ../src/Result.cpp
    ../src/Sort.cpp
)

target_link_libraries(test gmock gtest gtest_main)