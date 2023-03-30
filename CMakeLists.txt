cmake_minimum_required(VERSION 3.0)

project(Password_Generator)

add_subdirectory(lib)

add_executable(Password_Generator main.c)

target_link_libraries(Password_Generator PUBLIC art)
