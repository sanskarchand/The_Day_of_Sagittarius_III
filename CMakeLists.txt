project(TheDayOfSagiIII)
cmake_minimum_required(VERSION 3.10)

# find packages
find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS})

# headers
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB_RECURSE SOURCES "src/*.cpp")

#message(STATUS "sources are ${SOURCES}")

add_executable(haruhi ${SOURCES})
target_link_libraries(haruhi SDL2::SDL2 SOIL) 

