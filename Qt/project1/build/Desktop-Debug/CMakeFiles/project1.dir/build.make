# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/stajer/Desktop/stajer/project1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stajer/Desktop/stajer/project1/build/Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/project1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/project1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/project1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project1.dir/flags.make

project1_autogen/timestamp: /usr/lib/qt6/libexec/moc
project1_autogen/timestamp: /usr/lib/qt6/libexec/uic
project1_autogen/timestamp: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/stajer/Desktop/stajer/project1/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target project1"
	/usr/bin/cmake -E cmake_autogen /home/stajer/Desktop/stajer/project1/build/Desktop-Debug/CMakeFiles/project1_autogen.dir/AutogenInfo.json Debug
	/usr/bin/cmake -E touch /home/stajer/Desktop/stajer/project1/build/Desktop-Debug/project1_autogen/timestamp

CMakeFiles/project1.dir/project1_autogen/mocs_compilation.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/project1_autogen/mocs_compilation.cpp.o: project1_autogen/mocs_compilation.cpp
CMakeFiles/project1.dir/project1_autogen/mocs_compilation.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/stajer/Desktop/stajer/project1/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/project1.dir/project1_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/project1_autogen/mocs_compilation.cpp.o -MF CMakeFiles/project1.dir/project1_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/project1.dir/project1_autogen/mocs_compilation.cpp.o -c /home/stajer/Desktop/stajer/project1/build/Desktop-Debug/project1_autogen/mocs_compilation.cpp

CMakeFiles/project1.dir/project1_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/project1.dir/project1_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stajer/Desktop/stajer/project1/build/Desktop-Debug/project1_autogen/mocs_compilation.cpp > CMakeFiles/project1.dir/project1_autogen/mocs_compilation.cpp.i

CMakeFiles/project1.dir/project1_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/project1.dir/project1_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stajer/Desktop/stajer/project1/build/Desktop-Debug/project1_autogen/mocs_compilation.cpp -o CMakeFiles/project1.dir/project1_autogen/mocs_compilation.cpp.s

CMakeFiles/project1.dir/main.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/main.cpp.o: /home/stajer/Desktop/stajer/project1/main.cpp
CMakeFiles/project1.dir/main.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/stajer/Desktop/stajer/project1/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/project1.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/main.cpp.o -MF CMakeFiles/project1.dir/main.cpp.o.d -o CMakeFiles/project1.dir/main.cpp.o -c /home/stajer/Desktop/stajer/project1/main.cpp

CMakeFiles/project1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/project1.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stajer/Desktop/stajer/project1/main.cpp > CMakeFiles/project1.dir/main.cpp.i

CMakeFiles/project1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/project1.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stajer/Desktop/stajer/project1/main.cpp -o CMakeFiles/project1.dir/main.cpp.s

CMakeFiles/project1.dir/mainwindow.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/mainwindow.cpp.o: /home/stajer/Desktop/stajer/project1/mainwindow.cpp
CMakeFiles/project1.dir/mainwindow.cpp.o: CMakeFiles/project1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/stajer/Desktop/stajer/project1/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/project1.dir/mainwindow.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project1.dir/mainwindow.cpp.o -MF CMakeFiles/project1.dir/mainwindow.cpp.o.d -o CMakeFiles/project1.dir/mainwindow.cpp.o -c /home/stajer/Desktop/stajer/project1/mainwindow.cpp

CMakeFiles/project1.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/project1.dir/mainwindow.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stajer/Desktop/stajer/project1/mainwindow.cpp > CMakeFiles/project1.dir/mainwindow.cpp.i

CMakeFiles/project1.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/project1.dir/mainwindow.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stajer/Desktop/stajer/project1/mainwindow.cpp -o CMakeFiles/project1.dir/mainwindow.cpp.s

# Object files for target project1
project1_OBJECTS = \
"CMakeFiles/project1.dir/project1_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/project1.dir/main.cpp.o" \
"CMakeFiles/project1.dir/mainwindow.cpp.o"

# External object files for target project1
project1_EXTERNAL_OBJECTS =

project1: CMakeFiles/project1.dir/project1_autogen/mocs_compilation.cpp.o
project1: CMakeFiles/project1.dir/main.cpp.o
project1: CMakeFiles/project1.dir/mainwindow.cpp.o
project1: CMakeFiles/project1.dir/build.make
project1: /usr/lib/x86_64-linux-gnu/libQt6Widgets.so.6.4.2
project1: /usr/lib/x86_64-linux-gnu/libQt6Gui.so.6.4.2
project1: /usr/lib/x86_64-linux-gnu/libQt6Core.so.6.4.2
project1: /usr/lib/x86_64-linux-gnu/libGLX.so
project1: /usr/lib/x86_64-linux-gnu/libOpenGL.so
project1: CMakeFiles/project1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/stajer/Desktop/stajer/project1/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable project1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project1.dir/build: project1
.PHONY : CMakeFiles/project1.dir/build

CMakeFiles/project1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project1.dir/clean

CMakeFiles/project1.dir/depend: project1_autogen/timestamp
	cd /home/stajer/Desktop/stajer/project1/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stajer/Desktop/stajer/project1 /home/stajer/Desktop/stajer/project1 /home/stajer/Desktop/stajer/project1/build/Desktop-Debug /home/stajer/Desktop/stajer/project1/build/Desktop-Debug /home/stajer/Desktop/stajer/project1/build/Desktop-Debug/CMakeFiles/project1.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/project1.dir/depend

