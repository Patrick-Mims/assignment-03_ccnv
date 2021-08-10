cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(ccnv VERSION 1.0)

include_directories("inc")

include_directories("${PROJECT_BINARY_DIR}")

add_executable(ccnv src/main.cc)

target_include_directories(ccnv PUBLIC "${PROJECT_BINARY_DIR}")
