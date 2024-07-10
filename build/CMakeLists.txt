cmake_minimum_required(VERSION 3.0)

#didn't know you could specify language here! just a coincidence I named it this on my first try. 
project(practicing C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(SOURCE_DIRS 
    "${CMAKE_CURRENT_SOURCE_DIR}/../chapter1"
     
)

#iterate through chapter directories
foreach(CHAPTER ${SOURCE_DIRS})
    #glob all .c files together
    file(GLOB PROBLEMS "${CHAPTER}/*.c")
    foreach(PROBLEM ${PROBLEMS})
        #iterate, get filename, and make it an executable in the bin folder. 
        get_filename_component(EXECUTABLE_NAME ${PROBLEM} NAME_WE)
        add_executable(${EXECUTABLE_NAME} ${PROBLEM})
    endforeach()
endforeach()


