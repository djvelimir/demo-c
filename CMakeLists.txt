cmake_minimum_required(VERSION 3.15)
project(leapyear C)

set(CMAKE_C_STANDARD 11)

# Create library for business logic
add_library(leapyear
    src/leapyear.c
)

target_include_directories(leapyear PUBLIC include)

# Add compiler warnings for this library only
target_compile_options(leapyear PRIVATE -Wall -Wextra -Wpedantic)

# Main executable
add_executable(main
    src/main.c
)

target_link_libraries(main PRIVATE leapyear)

# Add warnings to the executable
target_compile_options(main PRIVATE -Wall -Wextra -Wpedantic)

# Enable testing
enable_testing()
add_subdirectory(tests)