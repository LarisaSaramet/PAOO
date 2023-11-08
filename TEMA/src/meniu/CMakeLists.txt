add_library(MeniuLib meniu.cpp meniu.hpp)

target_include_directories(MeniuLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(MeniuLib PUBLIC MancareLib)  

target_include_directories(MeniuLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../meniu)


