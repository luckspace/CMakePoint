
set(EXECUTABLE_OUTPUT_PATH ./storage/build)
set(LIBRARY_OUTPUT_PATH ./storage/build)

message("exe output ${EXECUTABLE_OUTPUT_PATH}")
message("lib output ${LIBRARY_OUTPUT_PATH}")

enable_testing()

add_subdirectory(Src)
add_subdirectory(Test)
add_subdirectory(Example)
