# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/cheshire/Files/Soft/clion-2020.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/cheshire/Files/Soft/clion-2020.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cheshire/Files/mipt/c++/2020-2021/contests/10.11/solutions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cheshire/Files/mipt/c++/2020-2021/contests/10.11/solutions/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/occurrences.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/occurrences.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/occurrences.dir/flags.make

CMakeFiles/occurrences.dir/occurrences.cpp.o: CMakeFiles/occurrences.dir/flags.make
CMakeFiles/occurrences.dir/occurrences.cpp.o: ../occurrences.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cheshire/Files/mipt/c++/2020-2021/contests/10.11/solutions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/occurrences.dir/occurrences.cpp.o"
	/home/cheshire/.local/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/occurrences.dir/occurrences.cpp.o -c /home/cheshire/Files/mipt/c++/2020-2021/contests/10.11/solutions/occurrences.cpp

CMakeFiles/occurrences.dir/occurrences.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/occurrences.dir/occurrences.cpp.i"
	/home/cheshire/.local/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cheshire/Files/mipt/c++/2020-2021/contests/10.11/solutions/occurrences.cpp > CMakeFiles/occurrences.dir/occurrences.cpp.i

CMakeFiles/occurrences.dir/occurrences.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/occurrences.dir/occurrences.cpp.s"
	/home/cheshire/.local/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cheshire/Files/mipt/c++/2020-2021/contests/10.11/solutions/occurrences.cpp -o CMakeFiles/occurrences.dir/occurrences.cpp.s

# Object files for target occurrences
occurrences_OBJECTS = \
"CMakeFiles/occurrences.dir/occurrences.cpp.o"

# External object files for target occurrences
occurrences_EXTERNAL_OBJECTS =

occurrences: CMakeFiles/occurrences.dir/occurrences.cpp.o
occurrences: CMakeFiles/occurrences.dir/build.make
occurrences: CMakeFiles/occurrences.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cheshire/Files/mipt/c++/2020-2021/contests/10.11/solutions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable occurrences"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/occurrences.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/occurrences.dir/build: occurrences

.PHONY : CMakeFiles/occurrences.dir/build

CMakeFiles/occurrences.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/occurrences.dir/cmake_clean.cmake
.PHONY : CMakeFiles/occurrences.dir/clean

CMakeFiles/occurrences.dir/depend:
	cd /home/cheshire/Files/mipt/c++/2020-2021/contests/10.11/solutions/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cheshire/Files/mipt/c++/2020-2021/contests/10.11/solutions /home/cheshire/Files/mipt/c++/2020-2021/contests/10.11/solutions /home/cheshire/Files/mipt/c++/2020-2021/contests/10.11/solutions/cmake-build-debug /home/cheshire/Files/mipt/c++/2020-2021/contests/10.11/solutions/cmake-build-debug /home/cheshire/Files/mipt/c++/2020-2021/contests/10.11/solutions/cmake-build-debug/CMakeFiles/occurrences.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/occurrences.dir/depend
