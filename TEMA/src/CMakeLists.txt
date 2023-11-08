add_subdirectory(meniu)
add_subdirectory(mancare)

# Define the executable
add_executable(main main.cpp)   
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

target_link_libraries(main PRIVATE MancareLib MeniuLib)

target_include_directories(main PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/mancare")
target_include_directories(main PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/meniu")
