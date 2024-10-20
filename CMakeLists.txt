cmake_minimum_required(VERSION 3.10)

project(QRMan VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(core)

add_executable(QRMan example/main.cpp)

target_link_libraries(QRMan PUBLIC QRManCore)

target_include_directories(QRMan PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/core"
                           "${PROJECT_SOURCE_DIR}/core/src"
                           )

