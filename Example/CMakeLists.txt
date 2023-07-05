
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/storage/build)

file(GLOB_RECURSE all_example *.cpp)
foreach (one_example ${all_example})
    get_filename_component(target_name ${one_example} NAME_WE)

    set(CMAKE_CXX_STANDARD 20)

    add_executable(${target_name} ${one_example})
    target_link_libraries(${target_name} PRIVATE luck::co)

    install(TARGETS ${target_name} RUNTIME DESTINATION bin)
endforeach()
