cmake_minimum_required(VERSION 3.0.0)
project(Mini_Project VERSION 0.1.0 LANGUAGES C CXX)

# Set the C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(CTest)
enable_testing()

add_executable(Mini_Project Publication.cpp Book.cpp DVD.cpp Journal.cpp Track.cpp MusicCD.cpp Library.cpp main.cpp)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
