
cmake_minimum_required (VERSION 2.8.0)
set(CMAKE_BUILD_TYPE "Release")
project (AUD-WS201516)

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    LIST(APPEND CMAKE_C_FLAGS "-std=c11 -Wall -Werror")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    LIST(APPEND CMAKE_C_FLAGS "-std=c11 -Wall -Werror")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library ("readline" readline.c)
add_library ("list" list.c)
add_library ("tree" tree.c)
target_link_libraries ("list" readline)
target_link_libraries ("tree" readline)

add_subdirectory (E04)
add_subdirectory (E05)
add_subdirectory (E06)
add_subdirectory (E07)
add_subdirectory (E08)
