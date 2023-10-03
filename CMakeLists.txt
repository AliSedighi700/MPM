cmake_minimum_required(VERSION 3.12)
project(MyProject)

# Specify C++ standard (e.g., C++11, C++14, C++17)
set(CMAKE_CXX_STANDARD 11)

# Define the source files and include directories
set(SOURCES
    MPM/src/class.cpp  # Add other source files as needed
		MPM/src/main.cpp
)

set(INCLUDE_DIRS
    include
)

# Create an executable target for your project
add_executable(MPM ${SOURCES})

# Add include directories to the target
target_include_directories(MPM PRIVATE ${INCLUDE_DIRS})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -arch arm64")


