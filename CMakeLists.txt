
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CACHEFILE_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_CACHEFILE_DIR})

enable_testing()

add_subdirectory(Src)
add_subdirectory(Test)
add_subdirectory(Example)
