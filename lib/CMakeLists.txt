# Set the minimum CMake version
cmake_minimum_required(VERSION 3.5)

# Set the project name and version
project(art VERSION 1.0)

# Add the source files for the library
add_library(art STATIC art.c)

# Include the header files for the library
target_include_directories(art PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Set the install location for the library
install(TARGETS art DESTINATION lib)
install(FILES art.h DESTINATION include)
