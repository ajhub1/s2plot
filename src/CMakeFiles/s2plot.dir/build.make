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
CMAKE_SOURCE_DIR = /home/dre/Desktop/omegalib/core/modules/s2plot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dre/Desktop/omegalib/core/modules/s2plot

# Include any dependencies generated for this target.
include src/CMakeFiles/s2plot.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/s2plot.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/s2plot.dir/flags.make

src/CMakeFiles/s2plot.dir/s2Factory.o: src/CMakeFiles/s2plot.dir/flags.make
src/CMakeFiles/s2plot.dir/s2Factory.o: src/s2Factory.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/dre/Desktop/omegalib/core/modules/s2plot/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/s2plot.dir/s2Factory.o"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/s2plot.dir/s2Factory.o -c /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Factory.cpp

src/CMakeFiles/s2plot.dir/s2Factory.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/s2plot.dir/s2Factory.i"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Factory.cpp > CMakeFiles/s2plot.dir/s2Factory.i

src/CMakeFiles/s2plot.dir/s2Factory.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/s2plot.dir/s2Factory.s"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Factory.cpp -o CMakeFiles/s2plot.dir/s2Factory.s

src/CMakeFiles/s2plot.dir/s2Factory.o.requires:
.PHONY : src/CMakeFiles/s2plot.dir/s2Factory.o.requires

src/CMakeFiles/s2plot.dir/s2Factory.o.provides: src/CMakeFiles/s2plot.dir/s2Factory.o.requires
	$(MAKE) -f src/CMakeFiles/s2plot.dir/build.make src/CMakeFiles/s2plot.dir/s2Factory.o.provides.build
.PHONY : src/CMakeFiles/s2plot.dir/s2Factory.o.provides

src/CMakeFiles/s2plot.dir/s2Factory.o.provides.build: src/CMakeFiles/s2plot.dir/s2Factory.o

src/CMakeFiles/s2plot.dir/s2Geom.o: src/CMakeFiles/s2plot.dir/flags.make
src/CMakeFiles/s2plot.dir/s2Geom.o: src/s2Geom.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/dre/Desktop/omegalib/core/modules/s2plot/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/s2plot.dir/s2Geom.o"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/s2plot.dir/s2Geom.o -c /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Geom.cpp

src/CMakeFiles/s2plot.dir/s2Geom.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/s2plot.dir/s2Geom.i"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Geom.cpp > CMakeFiles/s2plot.dir/s2Geom.i

src/CMakeFiles/s2plot.dir/s2Geom.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/s2plot.dir/s2Geom.s"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Geom.cpp -o CMakeFiles/s2plot.dir/s2Geom.s

src/CMakeFiles/s2plot.dir/s2Geom.o.requires:
.PHONY : src/CMakeFiles/s2plot.dir/s2Geom.o.requires

src/CMakeFiles/s2plot.dir/s2Geom.o.provides: src/CMakeFiles/s2plot.dir/s2Geom.o.requires
	$(MAKE) -f src/CMakeFiles/s2plot.dir/build.make src/CMakeFiles/s2plot.dir/s2Geom.o.provides.build
.PHONY : src/CMakeFiles/s2plot.dir/s2Geom.o.provides

src/CMakeFiles/s2plot.dir/s2Geom.o.provides.build: src/CMakeFiles/s2plot.dir/s2Geom.o

src/CMakeFiles/s2plot.dir/s2Cube.o: src/CMakeFiles/s2plot.dir/flags.make
src/CMakeFiles/s2plot.dir/s2Cube.o: src/s2Cube.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/dre/Desktop/omegalib/core/modules/s2plot/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/s2plot.dir/s2Cube.o"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/s2plot.dir/s2Cube.o -c /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Cube.cpp

src/CMakeFiles/s2plot.dir/s2Cube.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/s2plot.dir/s2Cube.i"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Cube.cpp > CMakeFiles/s2plot.dir/s2Cube.i

src/CMakeFiles/s2plot.dir/s2Cube.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/s2plot.dir/s2Cube.s"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Cube.cpp -o CMakeFiles/s2plot.dir/s2Cube.s

src/CMakeFiles/s2plot.dir/s2Cube.o.requires:
.PHONY : src/CMakeFiles/s2plot.dir/s2Cube.o.requires

src/CMakeFiles/s2plot.dir/s2Cube.o.provides: src/CMakeFiles/s2plot.dir/s2Cube.o.requires
	$(MAKE) -f src/CMakeFiles/s2plot.dir/build.make src/CMakeFiles/s2plot.dir/s2Cube.o.provides.build
.PHONY : src/CMakeFiles/s2plot.dir/s2Cube.o.provides

src/CMakeFiles/s2plot.dir/s2Cube.o.provides.build: src/CMakeFiles/s2plot.dir/s2Cube.o

src/CMakeFiles/s2plot.dir/s2Module.o: src/CMakeFiles/s2plot.dir/flags.make
src/CMakeFiles/s2plot.dir/s2Module.o: src/s2Module.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/dre/Desktop/omegalib/core/modules/s2plot/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/s2plot.dir/s2Module.o"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/s2plot.dir/s2Module.o -c /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Module.cpp

src/CMakeFiles/s2plot.dir/s2Module.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/s2plot.dir/s2Module.i"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Module.cpp > CMakeFiles/s2plot.dir/s2Module.i

src/CMakeFiles/s2plot.dir/s2Module.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/s2plot.dir/s2Module.s"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Module.cpp -o CMakeFiles/s2plot.dir/s2Module.s

src/CMakeFiles/s2plot.dir/s2Module.o.requires:
.PHONY : src/CMakeFiles/s2plot.dir/s2Module.o.requires

src/CMakeFiles/s2plot.dir/s2Module.o.provides: src/CMakeFiles/s2plot.dir/s2Module.o.requires
	$(MAKE) -f src/CMakeFiles/s2plot.dir/build.make src/CMakeFiles/s2plot.dir/s2Module.o.provides.build
.PHONY : src/CMakeFiles/s2plot.dir/s2Module.o.provides

src/CMakeFiles/s2plot.dir/s2Module.o.provides.build: src/CMakeFiles/s2plot.dir/s2Module.o

src/CMakeFiles/s2plot.dir/s2RenderPass.o: src/CMakeFiles/s2plot.dir/flags.make
src/CMakeFiles/s2plot.dir/s2RenderPass.o: src/s2RenderPass.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/dre/Desktop/omegalib/core/modules/s2plot/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/s2plot.dir/s2RenderPass.o"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/s2plot.dir/s2RenderPass.o -c /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2RenderPass.cpp

src/CMakeFiles/s2plot.dir/s2RenderPass.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/s2plot.dir/s2RenderPass.i"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2RenderPass.cpp > CMakeFiles/s2plot.dir/s2RenderPass.i

src/CMakeFiles/s2plot.dir/s2RenderPass.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/s2plot.dir/s2RenderPass.s"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2RenderPass.cpp -o CMakeFiles/s2plot.dir/s2RenderPass.s

src/CMakeFiles/s2plot.dir/s2RenderPass.o.requires:
.PHONY : src/CMakeFiles/s2plot.dir/s2RenderPass.o.requires

src/CMakeFiles/s2plot.dir/s2RenderPass.o.provides: src/CMakeFiles/s2plot.dir/s2RenderPass.o.requires
	$(MAKE) -f src/CMakeFiles/s2plot.dir/build.make src/CMakeFiles/s2plot.dir/s2RenderPass.o.provides.build
.PHONY : src/CMakeFiles/s2plot.dir/s2RenderPass.o.provides

src/CMakeFiles/s2plot.dir/s2RenderPass.o.provides.build: src/CMakeFiles/s2plot.dir/s2RenderPass.o

src/CMakeFiles/s2plot.dir/s2Program.o: src/CMakeFiles/s2plot.dir/flags.make
src/CMakeFiles/s2plot.dir/s2Program.o: src/s2Program.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/dre/Desktop/omegalib/core/modules/s2plot/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/s2plot.dir/s2Program.o"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/s2plot.dir/s2Program.o -c /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Program.cpp

src/CMakeFiles/s2plot.dir/s2Program.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/s2plot.dir/s2Program.i"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Program.cpp > CMakeFiles/s2plot.dir/s2Program.i

src/CMakeFiles/s2plot.dir/s2Program.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/s2plot.dir/s2Program.s"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Program.cpp -o CMakeFiles/s2plot.dir/s2Program.s

src/CMakeFiles/s2plot.dir/s2Program.o.requires:
.PHONY : src/CMakeFiles/s2plot.dir/s2Program.o.requires

src/CMakeFiles/s2plot.dir/s2Program.o.provides: src/CMakeFiles/s2plot.dir/s2Program.o.requires
	$(MAKE) -f src/CMakeFiles/s2plot.dir/build.make src/CMakeFiles/s2plot.dir/s2Program.o.provides.build
.PHONY : src/CMakeFiles/s2plot.dir/s2Program.o.provides

src/CMakeFiles/s2plot.dir/s2Program.o.provides.build: src/CMakeFiles/s2plot.dir/s2Program.o

src/CMakeFiles/s2plot.dir/s2Shader.o: src/CMakeFiles/s2plot.dir/flags.make
src/CMakeFiles/s2plot.dir/s2Shader.o: src/s2Shader.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/dre/Desktop/omegalib/core/modules/s2plot/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/s2plot.dir/s2Shader.o"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/s2plot.dir/s2Shader.o -c /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Shader.cpp

src/CMakeFiles/s2plot.dir/s2Shader.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/s2plot.dir/s2Shader.i"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Shader.cpp > CMakeFiles/s2plot.dir/s2Shader.i

src/CMakeFiles/s2plot.dir/s2Shader.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/s2plot.dir/s2Shader.s"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Shader.cpp -o CMakeFiles/s2plot.dir/s2Shader.s

src/CMakeFiles/s2plot.dir/s2Shader.o.requires:
.PHONY : src/CMakeFiles/s2plot.dir/s2Shader.o.requires

src/CMakeFiles/s2plot.dir/s2Shader.o.provides: src/CMakeFiles/s2plot.dir/s2Shader.o.requires
	$(MAKE) -f src/CMakeFiles/s2plot.dir/build.make src/CMakeFiles/s2plot.dir/s2Shader.o.provides.build
.PHONY : src/CMakeFiles/s2plot.dir/s2Shader.o.provides

src/CMakeFiles/s2plot.dir/s2Shader.o.provides.build: src/CMakeFiles/s2plot.dir/s2Shader.o

src/CMakeFiles/s2plot.dir/s2Triangle.o: src/CMakeFiles/s2plot.dir/flags.make
src/CMakeFiles/s2plot.dir/s2Triangle.o: src/s2Triangle.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/dre/Desktop/omegalib/core/modules/s2plot/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/s2plot.dir/s2Triangle.o"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/s2plot.dir/s2Triangle.o -c /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Triangle.cpp

src/CMakeFiles/s2plot.dir/s2Triangle.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/s2plot.dir/s2Triangle.i"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Triangle.cpp > CMakeFiles/s2plot.dir/s2Triangle.i

src/CMakeFiles/s2plot.dir/s2Triangle.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/s2plot.dir/s2Triangle.s"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Triangle.cpp -o CMakeFiles/s2plot.dir/s2Triangle.s

src/CMakeFiles/s2plot.dir/s2Triangle.o.requires:
.PHONY : src/CMakeFiles/s2plot.dir/s2Triangle.o.requires

src/CMakeFiles/s2plot.dir/s2Triangle.o.provides: src/CMakeFiles/s2plot.dir/s2Triangle.o.requires
	$(MAKE) -f src/CMakeFiles/s2plot.dir/build.make src/CMakeFiles/s2plot.dir/s2Triangle.o.provides.build
.PHONY : src/CMakeFiles/s2plot.dir/s2Triangle.o.provides

src/CMakeFiles/s2plot.dir/s2Triangle.o.provides.build: src/CMakeFiles/s2plot.dir/s2Triangle.o

src/CMakeFiles/s2plot.dir/s2Primitive.o: src/CMakeFiles/s2plot.dir/flags.make
src/CMakeFiles/s2plot.dir/s2Primitive.o: src/s2Primitive.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/dre/Desktop/omegalib/core/modules/s2plot/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/s2plot.dir/s2Primitive.o"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/s2plot.dir/s2Primitive.o -c /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Primitive.cpp

src/CMakeFiles/s2plot.dir/s2Primitive.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/s2plot.dir/s2Primitive.i"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Primitive.cpp > CMakeFiles/s2plot.dir/s2Primitive.i

src/CMakeFiles/s2plot.dir/s2Primitive.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/s2plot.dir/s2Primitive.s"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Primitive.cpp -o CMakeFiles/s2plot.dir/s2Primitive.s

src/CMakeFiles/s2plot.dir/s2Primitive.o.requires:
.PHONY : src/CMakeFiles/s2plot.dir/s2Primitive.o.requires

src/CMakeFiles/s2plot.dir/s2Primitive.o.provides: src/CMakeFiles/s2plot.dir/s2Primitive.o.requires
	$(MAKE) -f src/CMakeFiles/s2plot.dir/build.make src/CMakeFiles/s2plot.dir/s2Primitive.o.provides.build
.PHONY : src/CMakeFiles/s2plot.dir/s2Primitive.o.provides

src/CMakeFiles/s2plot.dir/s2Primitive.o.provides.build: src/CMakeFiles/s2plot.dir/s2Primitive.o

src/CMakeFiles/s2plot.dir/s2PolyObject.o: src/CMakeFiles/s2plot.dir/flags.make
src/CMakeFiles/s2plot.dir/s2PolyObject.o: src/s2PolyObject.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/dre/Desktop/omegalib/core/modules/s2plot/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/s2plot.dir/s2PolyObject.o"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/s2plot.dir/s2PolyObject.o -c /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2PolyObject.cpp

src/CMakeFiles/s2plot.dir/s2PolyObject.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/s2plot.dir/s2PolyObject.i"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2PolyObject.cpp > CMakeFiles/s2plot.dir/s2PolyObject.i

src/CMakeFiles/s2plot.dir/s2PolyObject.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/s2plot.dir/s2PolyObject.s"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2PolyObject.cpp -o CMakeFiles/s2plot.dir/s2PolyObject.s

src/CMakeFiles/s2plot.dir/s2PolyObject.o.requires:
.PHONY : src/CMakeFiles/s2plot.dir/s2PolyObject.o.requires

src/CMakeFiles/s2plot.dir/s2PolyObject.o.provides: src/CMakeFiles/s2plot.dir/s2PolyObject.o.requires
	$(MAKE) -f src/CMakeFiles/s2plot.dir/build.make src/CMakeFiles/s2plot.dir/s2PolyObject.o.provides.build
.PHONY : src/CMakeFiles/s2plot.dir/s2PolyObject.o.provides

src/CMakeFiles/s2plot.dir/s2PolyObject.o.provides.build: src/CMakeFiles/s2plot.dir/s2PolyObject.o

src/CMakeFiles/s2plot.dir/s2Vertex.o: src/CMakeFiles/s2plot.dir/flags.make
src/CMakeFiles/s2plot.dir/s2Vertex.o: src/s2Vertex.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/dre/Desktop/omegalib/core/modules/s2plot/CMakeFiles $(CMAKE_PROGRESS_11)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/s2plot.dir/s2Vertex.o"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/s2plot.dir/s2Vertex.o -c /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Vertex.cpp

src/CMakeFiles/s2plot.dir/s2Vertex.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/s2plot.dir/s2Vertex.i"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Vertex.cpp > CMakeFiles/s2plot.dir/s2Vertex.i

src/CMakeFiles/s2plot.dir/s2Vertex.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/s2plot.dir/s2Vertex.s"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/dre/Desktop/omegalib/core/modules/s2plot/src/s2Vertex.cpp -o CMakeFiles/s2plot.dir/s2Vertex.s

src/CMakeFiles/s2plot.dir/s2Vertex.o.requires:
.PHONY : src/CMakeFiles/s2plot.dir/s2Vertex.o.requires

src/CMakeFiles/s2plot.dir/s2Vertex.o.provides: src/CMakeFiles/s2plot.dir/s2Vertex.o.requires
	$(MAKE) -f src/CMakeFiles/s2plot.dir/build.make src/CMakeFiles/s2plot.dir/s2Vertex.o.provides.build
.PHONY : src/CMakeFiles/s2plot.dir/s2Vertex.o.provides

src/CMakeFiles/s2plot.dir/s2Vertex.o.provides.build: src/CMakeFiles/s2plot.dir/s2Vertex.o

# Object files for target s2plot
s2plot_OBJECTS = \
"CMakeFiles/s2plot.dir/s2Factory.o" \
"CMakeFiles/s2plot.dir/s2Geom.o" \
"CMakeFiles/s2plot.dir/s2Cube.o" \
"CMakeFiles/s2plot.dir/s2Module.o" \
"CMakeFiles/s2plot.dir/s2RenderPass.o" \
"CMakeFiles/s2plot.dir/s2Program.o" \
"CMakeFiles/s2plot.dir/s2Shader.o" \
"CMakeFiles/s2plot.dir/s2Triangle.o" \
"CMakeFiles/s2plot.dir/s2Primitive.o" \
"CMakeFiles/s2plot.dir/s2PolyObject.o" \
"CMakeFiles/s2plot.dir/s2Vertex.o"

# External object files for target s2plot
s2plot_EXTERNAL_OBJECTS =

src/s2plot.so: src/CMakeFiles/s2plot.dir/s2Factory.o
src/s2plot.so: src/CMakeFiles/s2plot.dir/s2Geom.o
src/s2plot.so: src/CMakeFiles/s2plot.dir/s2Cube.o
src/s2plot.so: src/CMakeFiles/s2plot.dir/s2Module.o
src/s2plot.so: src/CMakeFiles/s2plot.dir/s2RenderPass.o
src/s2plot.so: src/CMakeFiles/s2plot.dir/s2Program.o
src/s2plot.so: src/CMakeFiles/s2plot.dir/s2Shader.o
src/s2plot.so: src/CMakeFiles/s2plot.dir/s2Triangle.o
src/s2plot.so: src/CMakeFiles/s2plot.dir/s2Primitive.o
src/s2plot.so: src/CMakeFiles/s2plot.dir/s2PolyObject.o
src/s2plot.so: src/CMakeFiles/s2plot.dir/s2Vertex.o
src/s2plot.so: src/CMakeFiles/s2plot.dir/build.make
src/s2plot.so: src/CMakeFiles/s2plot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared module s2plot.so"
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/s2plot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/s2plot.dir/build: src/s2plot.so
.PHONY : src/CMakeFiles/s2plot.dir/build

src/CMakeFiles/s2plot.dir/requires: src/CMakeFiles/s2plot.dir/s2Factory.o.requires
src/CMakeFiles/s2plot.dir/requires: src/CMakeFiles/s2plot.dir/s2Geom.o.requires
src/CMakeFiles/s2plot.dir/requires: src/CMakeFiles/s2plot.dir/s2Cube.o.requires
src/CMakeFiles/s2plot.dir/requires: src/CMakeFiles/s2plot.dir/s2Module.o.requires
src/CMakeFiles/s2plot.dir/requires: src/CMakeFiles/s2plot.dir/s2RenderPass.o.requires
src/CMakeFiles/s2plot.dir/requires: src/CMakeFiles/s2plot.dir/s2Program.o.requires
src/CMakeFiles/s2plot.dir/requires: src/CMakeFiles/s2plot.dir/s2Shader.o.requires
src/CMakeFiles/s2plot.dir/requires: src/CMakeFiles/s2plot.dir/s2Triangle.o.requires
src/CMakeFiles/s2plot.dir/requires: src/CMakeFiles/s2plot.dir/s2Primitive.o.requires
src/CMakeFiles/s2plot.dir/requires: src/CMakeFiles/s2plot.dir/s2PolyObject.o.requires
src/CMakeFiles/s2plot.dir/requires: src/CMakeFiles/s2plot.dir/s2Vertex.o.requires
.PHONY : src/CMakeFiles/s2plot.dir/requires

src/CMakeFiles/s2plot.dir/clean:
	cd /home/dre/Desktop/omegalib/core/modules/s2plot/src && $(CMAKE_COMMAND) -P CMakeFiles/s2plot.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/s2plot.dir/clean

src/CMakeFiles/s2plot.dir/depend:
	cd /home/dre/Desktop/omegalib/core/modules/s2plot && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dre/Desktop/omegalib/core/modules/s2plot /home/dre/Desktop/omegalib/core/modules/s2plot/src /home/dre/Desktop/omegalib/core/modules/s2plot /home/dre/Desktop/omegalib/core/modules/s2plot/src /home/dre/Desktop/omegalib/core/modules/s2plot/src/CMakeFiles/s2plot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/s2plot.dir/depend
