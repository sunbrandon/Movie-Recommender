CMAKE_MINIMUM_REQUIRED(VERSION 3.20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
project(test_menu)

add_subdirectory(googletest)

ADD_EXECUTABLE(movieRec
    testOut.cpp
    ../src/Input.cpp
    ../src/Movie.cpp
    ../src/Output.cpp
    ../src/Quiz.cpp
    ../src/Random.cpp
    ../src/Search.cpp
    ../src/Result.cpp
    ../src/Sort.cpp
    ../src/Tests.cpp
)

ADD_EXECUTABLE(tests
    tests.cpp
    ../src/Input.cpp
    ../src/Movie.cpp
    ../src/Output.cpp
    ../src/Quiz.cpp
    ../src/Random.cpp
    ../src/Search.cpp
    ../src/Result.cpp
    ../src/Sort.cpp
    ../src/Tests.cpp
)

target_link_libraries(tests gmock gtest gtest_main)