cmake_minimum_required(VERSION 3.30)

project(TestingCMake)

add_executable(${PROJECT_NAME} main.cpp)
target_link_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/libs/)
target_link_libraries(${PROJECT_NAME} mathlib)
