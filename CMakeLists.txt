cmake_minimum_required(VERSION 3.10)
project(MonProjet LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCES "./jour02/job15/*.cpp")

add_executable(MonProjet ${SOURCES})