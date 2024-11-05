# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name
project(SciCalc C)

# Set the output directory for compiled binaries
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../out)

# Set C standard
set(CMAKE_C_STANDARD 11)

# Compiler flags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/src/include)

# Collect all source files
file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.c")

# Create the executable
add_executable(SciCalc ${SOURCES})




