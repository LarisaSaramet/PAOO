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
CMAKE_SOURCE_DIR = /home/xjuji10x/Desktop/PAOO/Tema1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xjuji10x/Desktop/PAOO/Tema1/build

# Include any dependencies generated for this target.
include src/CMakeFiles/lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/lib.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/lib.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/lib.dir/flags.make

src/CMakeFiles/lib.dir/meniu/meniu.cpp.o: src/CMakeFiles/lib.dir/flags.make
src/CMakeFiles/lib.dir/meniu/meniu.cpp.o: ../src/meniu/meniu.cpp
src/CMakeFiles/lib.dir/meniu/meniu.cpp.o: src/CMakeFiles/lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xjuji10x/Desktop/PAOO/Tema1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/lib.dir/meniu/meniu.cpp.o"
	cd /home/xjuji10x/Desktop/PAOO/Tema1/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/lib.dir/meniu/meniu.cpp.o -MF CMakeFiles/lib.dir/meniu/meniu.cpp.o.d -o CMakeFiles/lib.dir/meniu/meniu.cpp.o -c /home/xjuji10x/Desktop/PAOO/Tema1/src/meniu/meniu.cpp

src/CMakeFiles/lib.dir/meniu/meniu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib.dir/meniu/meniu.cpp.i"
	cd /home/xjuji10x/Desktop/PAOO/Tema1/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xjuji10x/Desktop/PAOO/Tema1/src/meniu/meniu.cpp > CMakeFiles/lib.dir/meniu/meniu.cpp.i

src/CMakeFiles/lib.dir/meniu/meniu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib.dir/meniu/meniu.cpp.s"
	cd /home/xjuji10x/Desktop/PAOO/Tema1/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xjuji10x/Desktop/PAOO/Tema1/src/meniu/meniu.cpp -o CMakeFiles/lib.dir/meniu/meniu.cpp.s

# Object files for target lib
lib_OBJECTS = \
"CMakeFiles/lib.dir/meniu/meniu.cpp.o"

# External object files for target lib
lib_EXTERNAL_OBJECTS =

src/liblib.a: src/CMakeFiles/lib.dir/meniu/meniu.cpp.o
src/liblib.a: src/CMakeFiles/lib.dir/build.make
src/liblib.a: src/CMakeFiles/lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xjuji10x/Desktop/PAOO/Tema1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblib.a"
	cd /home/xjuji10x/Desktop/PAOO/Tema1/build/src && $(CMAKE_COMMAND) -P CMakeFiles/lib.dir/cmake_clean_target.cmake
	cd /home/xjuji10x/Desktop/PAOO/Tema1/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/lib.dir/build: src/liblib.a
.PHONY : src/CMakeFiles/lib.dir/build

src/CMakeFiles/lib.dir/clean:
	cd /home/xjuji10x/Desktop/PAOO/Tema1/build/src && $(CMAKE_COMMAND) -P CMakeFiles/lib.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/lib.dir/clean

src/CMakeFiles/lib.dir/depend:
	cd /home/xjuji10x/Desktop/PAOO/Tema1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xjuji10x/Desktop/PAOO/Tema1 /home/xjuji10x/Desktop/PAOO/Tema1/src /home/xjuji10x/Desktop/PAOO/Tema1/build /home/xjuji10x/Desktop/PAOO/Tema1/build/src /home/xjuji10x/Desktop/PAOO/Tema1/build/src/CMakeFiles/lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/lib.dir/depend

