cmake_minimum_required(VERSION 3.16...3.21)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/storage/build)

project(LuckCoroutine
    VERSION "0.1.0"
    LANGUAGES CXX
)

file(GLOB_RECURSE sources *.cpp)

add_library(LuckCoroutine SHARED ${sources})
add_library(luck::co ALIAS LuckCoroutine)

target_include_directories(LuckCoroutine
    PUBLIC
        ${CMAKE_SOURCE_DIR}/Include
)
target_compile_definitions(LuckCoroutine
    PRIVATE
        LUCK_COROUTINE_BUILD=1
)

install(TARGETS LuckCoroutine
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    PUBLIC_HEADER DESTINATION include
)
