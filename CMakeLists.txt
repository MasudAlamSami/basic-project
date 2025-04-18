cmake_minimum_required(VERSION 3.22)
project("Gtest")

find_package(Gtest REQUIRED)

add_executable(a.out main.cpp)

target_link_libraries(a.out ${GTEST_LIBRARIES})

enable_testing()
add_test(add a.out)