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
CMAKE_SOURCE_DIR = /home/ionut/IEP/movies/Movies

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ionut/IEP/movies/Movies/out/build

# Include any dependencies generated for this target.
include CMakeFiles/movies.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/movies.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/movies.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/movies.dir/flags.make

CMakeFiles/movies.dir/src/Movie.cpp.o: CMakeFiles/movies.dir/flags.make
CMakeFiles/movies.dir/src/Movie.cpp.o: ../../src/Movie.cpp
CMakeFiles/movies.dir/src/Movie.cpp.o: CMakeFiles/movies.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ionut/IEP/movies/Movies/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/movies.dir/src/Movie.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/movies.dir/src/Movie.cpp.o -MF CMakeFiles/movies.dir/src/Movie.cpp.o.d -o CMakeFiles/movies.dir/src/Movie.cpp.o -c /home/ionut/IEP/movies/Movies/src/Movie.cpp

CMakeFiles/movies.dir/src/Movie.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/movies.dir/src/Movie.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ionut/IEP/movies/Movies/src/Movie.cpp > CMakeFiles/movies.dir/src/Movie.cpp.i

CMakeFiles/movies.dir/src/Movie.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/movies.dir/src/Movie.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ionut/IEP/movies/Movies/src/Movie.cpp -o CMakeFiles/movies.dir/src/Movie.cpp.s

CMakeFiles/movies.dir/src/Cinema.cpp.o: CMakeFiles/movies.dir/flags.make
CMakeFiles/movies.dir/src/Cinema.cpp.o: ../../src/Cinema.cpp
CMakeFiles/movies.dir/src/Cinema.cpp.o: CMakeFiles/movies.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ionut/IEP/movies/Movies/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/movies.dir/src/Cinema.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/movies.dir/src/Cinema.cpp.o -MF CMakeFiles/movies.dir/src/Cinema.cpp.o.d -o CMakeFiles/movies.dir/src/Cinema.cpp.o -c /home/ionut/IEP/movies/Movies/src/Cinema.cpp

CMakeFiles/movies.dir/src/Cinema.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/movies.dir/src/Cinema.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ionut/IEP/movies/Movies/src/Cinema.cpp > CMakeFiles/movies.dir/src/Cinema.cpp.i

CMakeFiles/movies.dir/src/Cinema.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/movies.dir/src/Cinema.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ionut/IEP/movies/Movies/src/Cinema.cpp -o CMakeFiles/movies.dir/src/Cinema.cpp.s

CMakeFiles/movies.dir/src/main.cpp.o: CMakeFiles/movies.dir/flags.make
CMakeFiles/movies.dir/src/main.cpp.o: ../../src/main.cpp
CMakeFiles/movies.dir/src/main.cpp.o: CMakeFiles/movies.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ionut/IEP/movies/Movies/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/movies.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/movies.dir/src/main.cpp.o -MF CMakeFiles/movies.dir/src/main.cpp.o.d -o CMakeFiles/movies.dir/src/main.cpp.o -c /home/ionut/IEP/movies/Movies/src/main.cpp

CMakeFiles/movies.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/movies.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ionut/IEP/movies/Movies/src/main.cpp > CMakeFiles/movies.dir/src/main.cpp.i

CMakeFiles/movies.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/movies.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ionut/IEP/movies/Movies/src/main.cpp -o CMakeFiles/movies.dir/src/main.cpp.s

# Object files for target movies
movies_OBJECTS = \
"CMakeFiles/movies.dir/src/Movie.cpp.o" \
"CMakeFiles/movies.dir/src/Cinema.cpp.o" \
"CMakeFiles/movies.dir/src/main.cpp.o"

# External object files for target movies
movies_EXTERNAL_OBJECTS =

movies: CMakeFiles/movies.dir/src/Movie.cpp.o
movies: CMakeFiles/movies.dir/src/Cinema.cpp.o
movies: CMakeFiles/movies.dir/src/main.cpp.o
movies: CMakeFiles/movies.dir/build.make
movies: CMakeFiles/movies.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ionut/IEP/movies/Movies/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable movies"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/movies.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/movies.dir/build: movies
.PHONY : CMakeFiles/movies.dir/build

CMakeFiles/movies.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/movies.dir/cmake_clean.cmake
.PHONY : CMakeFiles/movies.dir/clean

CMakeFiles/movies.dir/depend:
	cd /home/ionut/IEP/movies/Movies/out/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ionut/IEP/movies/Movies /home/ionut/IEP/movies/Movies /home/ionut/IEP/movies/Movies/out/build /home/ionut/IEP/movies/Movies/out/build /home/ionut/IEP/movies/Movies/out/build/CMakeFiles/movies.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/movies.dir/depend

