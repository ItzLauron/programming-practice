cmake_minimum_required(VERSION 3.16)
project(practice C)

set(CMAKE_C_STANDARD 11)

file(GLOB SUBDIRS RELATIVE ${CMAKE_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/*)

foreach(subdir ${SUBDIRS})
    if(IS_DIRECTORY ${CMAKE_SOURCE_DIR}/${subdir})
        file(GLOB SRC_FILES ${CMAKE_SOURCE_DIR}/${subdir}/*.c)
        if(SRC_FILES)
            add_executable(${subdir} ${SRC_FILES})
        endif()
    endif()
endforeach()

if(EXISTS "${CMAKE_SOURCE_DIR}/main.c")
    add_executable(practice main.c)
endif()