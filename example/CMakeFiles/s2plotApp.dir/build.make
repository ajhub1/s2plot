# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adam/Desktop/s2plot/example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adam/Desktop/s2plot/example

# Include any dependencies generated for this target.
include CMakeFiles/s2plotApp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/s2plotApp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/s2plotApp.dir/flags.make

CMakeFiles/s2plotApp.dir/s2plotApp.cpp.o: CMakeFiles/s2plotApp.dir/flags.make
CMakeFiles/s2plotApp.dir/s2plotApp.cpp.o: s2plotApp.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/adam/Desktop/s2plot/example/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/s2plotApp.dir/s2plotApp.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/s2plotApp.dir/s2plotApp.cpp.o -c /home/adam/Desktop/s2plot/example/s2plotApp.cpp

CMakeFiles/s2plotApp.dir/s2plotApp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/s2plotApp.dir/s2plotApp.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/adam/Desktop/s2plot/example/s2plotApp.cpp > CMakeFiles/s2plotApp.dir/s2plotApp.cpp.i

CMakeFiles/s2plotApp.dir/s2plotApp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/s2plotApp.dir/s2plotApp.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/adam/Desktop/s2plot/example/s2plotApp.cpp -o CMakeFiles/s2plotApp.dir/s2plotApp.cpp.s

CMakeFiles/s2plotApp.dir/s2plotApp.cpp.o.requires:
.PHONY : CMakeFiles/s2plotApp.dir/s2plotApp.cpp.o.requires

CMakeFiles/s2plotApp.dir/s2plotApp.cpp.o.provides: CMakeFiles/s2plotApp.dir/s2plotApp.cpp.o.requires
	$(MAKE) -f CMakeFiles/s2plotApp.dir/build.make CMakeFiles/s2plotApp.dir/s2plotApp.cpp.o.provides.build
.PHONY : CMakeFiles/s2plotApp.dir/s2plotApp.cpp.o.provides

CMakeFiles/s2plotApp.dir/s2plotApp.cpp.o.provides.build: CMakeFiles/s2plotApp.dir/s2plotApp.cpp.o

# Object files for target s2plotApp
s2plotApp_OBJECTS = \
"CMakeFiles/s2plotApp.dir/s2plotApp.cpp.o"

# External object files for target s2plotApp
s2plotApp_EXTERNAL_OBJECTS =

s2plotApp: CMakeFiles/s2plotApp.dir/s2plotApp.cpp.o
s2plotApp: CMakeFiles/s2plotApp.dir/build.make
s2plotApp: /home/adam/Desktop/omegalib/build/bin/libomicron.so
s2plotApp: /usr/lib/x86_64-linux-gnu/libGL.so
s2plotApp: /usr/lib/x86_64-linux-gnu/libX11.so
s2plotApp: /usr/lib/x86_64-linux-gnu/libXext.so
s2plotApp: /home/adam/Desktop/omegalib/build/bin/libomega.so
s2plotApp: /usr/lib/x86_64-linux-gnu/libGLU.so
s2plotApp: /usr/lib/x86_64-linux-gnu/libGL.so
s2plotApp: /usr/lib/x86_64-linux-gnu/libX11.so
s2plotApp: /usr/lib/x86_64-linux-gnu/libXext.so
s2plotApp: /home/adam/Desktop/omegalib/build/bin/s2plot.so
s2plotApp: /home/adam/Desktop/omegalib/build/bin/libomega.so
s2plotApp: /usr/lib/x86_64-linux-gnu/libGLU.so
s2plotApp: /home/adam/Desktop/omegalib/build/bin/s2plot.so
s2plotApp: CMakeFiles/s2plotApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable s2plotApp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/s2plotApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/s2plotApp.dir/build: s2plotApp
.PHONY : CMakeFiles/s2plotApp.dir/build

CMakeFiles/s2plotApp.dir/requires: CMakeFiles/s2plotApp.dir/s2plotApp.cpp.o.requires
.PHONY : CMakeFiles/s2plotApp.dir/requires

CMakeFiles/s2plotApp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/s2plotApp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/s2plotApp.dir/clean

CMakeFiles/s2plotApp.dir/depend:
	cd /home/adam/Desktop/s2plot/example && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adam/Desktop/s2plot/example /home/adam/Desktop/s2plot/example /home/adam/Desktop/s2plot/example /home/adam/Desktop/s2plot/example /home/adam/Desktop/s2plot/example/CMakeFiles/s2plotApp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/s2plotApp.dir/depend

