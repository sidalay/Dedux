cmake_minimum_required(VERSION 3.16)
project(dedux)

add_executable(${PROJECT_NAME}
  src/dedux.cpp
  src/fileHandler.cpp
  src/project.cpp
  src/projectHandler.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE )
target_include_directories(${PROJECT_NAME} PRIVATE include)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)
target_compile_options(${PROJECT_NAME} INTERFACE -Wextra -Wall -Wpedantic)

file(COPY projects DESTINATION ${CMAKE_BINARY_DIR})