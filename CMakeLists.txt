cmake_minimum_required(VERSION 3.12)
project(helloworld)

# Set the C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_INSTALL_DIR "out")

# Add subdirectories
add_subdirectory(lib)
add_subdirectory(src)

# Installation rules
install(DIRECTORY lib/ DESTINATION include FILES_MATCHING PATTERN "*.h")