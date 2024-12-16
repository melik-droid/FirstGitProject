cmake_minimum_required(VERSION 3.15)
project(olas)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(include)

set(MYLIB_SOURCES src/exercise.cpp)

# Define the MathLib library
add_library(exercise ${MYLIB_SOURCES})

# Set source files for the main application
set(MYAPP_SOURCES src/main.cpp)

# Define the main application
add_executable(${PROJECT_NAME} ${MYAPP_SOURCES})

# Link the MathLib library to the main application
target_link_libraries(${PROJECT_NAME} PRIVATE exercise)
