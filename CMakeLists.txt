cmake_minimum_required(VERSION 4.0.1)
project(Rooster LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG 10.1.1 
)
FetchContent_MakeAvailable(fmt)



add_executable(rooster main.cpp)
target_link_libraries(rooster PRIVATE fmt::fmt)
