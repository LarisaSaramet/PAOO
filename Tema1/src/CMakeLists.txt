cmake_minimum_required(VERSION 3.0)

add_subdirectory(meniu)

add_library(${PROJECT}-main OBJECT
	main.cpp)

set(TARGET meniu/meniu.cpp)

add_library(lib STATIC ${TARGET})
 
add_executable(${PROJECT} main.cpp)

target_link_libraries(${PROJECT} PUBLIC lib)

target_include_directories(${PROJECT} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/meniu)

