
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CACHEFILE_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_CACHEFILE_DIR})

message("exe output ${EXECUTABLE_OUTPUT_PATH}")
message("lib output ${LIBRARY_OUTPUT_PATH}")

enable_testing()

add_subdirectory(Src)
add_subdirectory(Test)
add_subdirectory(Example)
