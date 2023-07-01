cmake_minimum_required(VERSION 3.16...3.21)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(CMakePoint
	VERSION "0.1.0"
	LANGUAGES CXX
)

file(GLOB RS_HEADERS "Src/*.h" "Src/*.hpp")
file(GLOB RS_SOURCES "Src/*.cpp")

set(RS_ALL)
list(APPEND RS_ALL ${RS_HEADERS} ${RS_SOURCES})

add_executable(${PROJECT_NAME}
	${RS_ALL}
)
