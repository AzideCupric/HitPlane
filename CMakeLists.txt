cmake_minimum_required(VERSION 3.17)
project(Ash)

set(CMAKE_CXX_STANDARD 17)
set(SFML_DIR "E:/Azide/SFML-MinGW")
find_package(SFML REQUIRED COMPONENTS audio network graphics window system)

if (NOT SFML_FOUND)
    message(FATAL_ERROR "SFML NOT FOUND!")
else()
    message("SFML FOUND!")
endif()

include_directories(${SFML_INCLUDE_DIR})
#add_executable(Ash src/main.cpp)

set(source "${CMAKE_SOURCE_DIR}/resources")
set(destination "${CMAKE_CURRENT_BINARY_DIR}/resources")

file(GLOB_RECURSE SOURCE_FILES "src/*.cpp")

add_executable(Ash ${SOURCE_FILES} ${GLOB_RECURSE})

target_link_libraries(Ash sfml-audio sfml-network sfml-graphics sfml-window sfml-system)