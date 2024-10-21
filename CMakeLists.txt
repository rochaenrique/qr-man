cmake_minimum_required(VERSION 3.10)

project(QRMan VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(core)

add_executable(QRMan example/main.cpp)

target_link_libraries(QRMan PUBLIC QRManCore)

target_include_directories(QRMan PUBLIC
                            ${CMAKE_SOURCE_DIR}
                           "${CMAKE_SOURCE_DIR}/core/src"
                           "${CMAKE_SOURCE_DIR}/core/vendor"
                           )

