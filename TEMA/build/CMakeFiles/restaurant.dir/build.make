# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xjuji10x/Desktop/PAOO/TEMA/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xjuji10x/Desktop/PAOO/TEMA/build

# Include any dependencies generated for this target.
include CMakeFiles/restaurant.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/restaurant.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/restaurant.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/restaurant.dir/flags.make

CMakeFiles/restaurant.dir/main.cpp.o: CMakeFiles/restaurant.dir/flags.make
CMakeFiles/restaurant.dir/main.cpp.o: /home/xjuji10x/Desktop/PAOO/TEMA/src/main.cpp
CMakeFiles/restaurant.dir/main.cpp.o: CMakeFiles/restaurant.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xjuji10x/Desktop/PAOO/TEMA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/restaurant.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/restaurant.dir/main.cpp.o -MF CMakeFiles/restaurant.dir/main.cpp.o.d -o CMakeFiles/restaurant.dir/main.cpp.o -c /home/xjuji10x/Desktop/PAOO/TEMA/src/main.cpp

CMakeFiles/restaurant.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/restaurant.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xjuji10x/Desktop/PAOO/TEMA/src/main.cpp > CMakeFiles/restaurant.dir/main.cpp.i

CMakeFiles/restaurant.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/restaurant.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xjuji10x/Desktop/PAOO/TEMA/src/main.cpp -o CMakeFiles/restaurant.dir/main.cpp.s

# Object files for target restaurant
restaurant_OBJECTS = \
"CMakeFiles/restaurant.dir/main.cpp.o"

# External object files for target restaurant
restaurant_EXTERNAL_OBJECTS =

restaurant: CMakeFiles/restaurant.dir/main.cpp.o
restaurant: CMakeFiles/restaurant.dir/build.make
restaurant: librestaurant_src.a
restaurant: CMakeFiles/restaurant.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xjuji10x/Desktop/PAOO/TEMA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable restaurant"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/restaurant.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/restaurant.dir/build: restaurant
.PHONY : CMakeFiles/restaurant.dir/build

CMakeFiles/restaurant.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/restaurant.dir/cmake_clean.cmake
.PHONY : CMakeFiles/restaurant.dir/clean

CMakeFiles/restaurant.dir/depend:
	cd /home/xjuji10x/Desktop/PAOO/TEMA/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xjuji10x/Desktop/PAOO/TEMA/src /home/xjuji10x/Desktop/PAOO/TEMA/src /home/xjuji10x/Desktop/PAOO/TEMA/build /home/xjuji10x/Desktop/PAOO/TEMA/build /home/xjuji10x/Desktop/PAOO/TEMA/build/CMakeFiles/restaurant.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/restaurant.dir/depend

