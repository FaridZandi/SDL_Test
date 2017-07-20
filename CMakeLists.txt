cmake_minimum_required(VERSION 3.6)
project(SDL_test)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/include/SDL2/)
link_directories(${PROJECT_SOURCE_DIR}/lib)

set(SOURCE_FILES main.cpp)
add_executable(SDL_test ${SOURCE_FILES})

target_link_libraries(SDL_test mingw32 SDL2main SDL2)
