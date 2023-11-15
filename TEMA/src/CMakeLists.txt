cmake_minimum_required(VERSION 3.2)

project(restaurant)

add_library(restaurant_src
		meniu/meniu.cpp
		bautura/bautura.cpp
		adresa/adresa.cpp
		livrare/livrare.cpp)

add_executable(restaurant main.cpp)

target_link_libraries(restaurant
	PRIVATE
		restaurant_src
)

target_include_directories(restaurant
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}
)
target_include_directories(restaurant_src
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}
	)
