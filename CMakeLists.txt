cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(calculator VERSION 1.0)

file(GLOB_RECURSE calculator_SOURCES CONFIGURE_DEPEND src/*.c)
file(GLOB_RECURSE calculator_HEADERS CONFIGURE_DEPEND src/*.h)

add_executable(calculator ${calculator_SOURCES})

target_include_directories(calculator
                           PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
