cmake_minimum_required(VERSION 3.10)

project(LIFE-2.0 VERSION 1.0
        LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

# Output binaries into a dedicated folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Executable target
add_executable(${PROJECT_NAME}
    src/Main.cpp
)