cmake_minimum_required(VERSION 3.2)

set(HEADERS
    includes/meniu.hpp
    includes/mancare.hpp
    includes/bautura.hpp
    includes/adresa.hpp
    includes/livrare.hpp
)

add_library(restaurant_headers INTERFACE)

target_sources(restaurant_headers
    INTERFACE 
        ${HEADERS}
)

target_include_directories(restaurant_headers
    INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
)