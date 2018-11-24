cmake_minimum_required (VERSION 2.6)

project (study)

add_executable(study study_3.cpp)
set(CMAKE_C_FLAGS"${CMAKE_C_FLAGS} -Wall -Werror")
