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
CMAKE_SOURCE_DIR = /home/stajer/Desktop/stajer/FileWR

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stajer/Desktop/stajer/FileWR/build/Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/FileWR.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/FileWR.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/FileWR.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FileWR.dir/flags.make

FileWR_autogen/timestamp: /usr/lib/qt6/libexec/moc
FileWR_autogen/timestamp: CMakeFiles/FileWR.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/stajer/Desktop/stajer/FileWR/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target FileWR"
	/usr/bin/cmake -E cmake_autogen /home/stajer/Desktop/stajer/FileWR/build/Desktop-Debug/CMakeFiles/FileWR_autogen.dir/AutogenInfo.json Debug
	/usr/bin/cmake -E touch /home/stajer/Desktop/stajer/FileWR/build/Desktop-Debug/FileWR_autogen/timestamp

CMakeFiles/FileWR.dir/FileWR_autogen/mocs_compilation.cpp.o: CMakeFiles/FileWR.dir/flags.make
CMakeFiles/FileWR.dir/FileWR_autogen/mocs_compilation.cpp.o: FileWR_autogen/mocs_compilation.cpp
CMakeFiles/FileWR.dir/FileWR_autogen/mocs_compilation.cpp.o: CMakeFiles/FileWR.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/stajer/Desktop/stajer/FileWR/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FileWR.dir/FileWR_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileWR.dir/FileWR_autogen/mocs_compilation.cpp.o -MF CMakeFiles/FileWR.dir/FileWR_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/FileWR.dir/FileWR_autogen/mocs_compilation.cpp.o -c /home/stajer/Desktop/stajer/FileWR/build/Desktop-Debug/FileWR_autogen/mocs_compilation.cpp

CMakeFiles/FileWR.dir/FileWR_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FileWR.dir/FileWR_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stajer/Desktop/stajer/FileWR/build/Desktop-Debug/FileWR_autogen/mocs_compilation.cpp > CMakeFiles/FileWR.dir/FileWR_autogen/mocs_compilation.cpp.i

CMakeFiles/FileWR.dir/FileWR_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FileWR.dir/FileWR_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stajer/Desktop/stajer/FileWR/build/Desktop-Debug/FileWR_autogen/mocs_compilation.cpp -o CMakeFiles/FileWR.dir/FileWR_autogen/mocs_compilation.cpp.s

CMakeFiles/FileWR.dir/main.cpp.o: CMakeFiles/FileWR.dir/flags.make
CMakeFiles/FileWR.dir/main.cpp.o: /home/stajer/Desktop/stajer/FileWR/main.cpp
CMakeFiles/FileWR.dir/main.cpp.o: CMakeFiles/FileWR.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/stajer/Desktop/stajer/FileWR/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/FileWR.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileWR.dir/main.cpp.o -MF CMakeFiles/FileWR.dir/main.cpp.o.d -o CMakeFiles/FileWR.dir/main.cpp.o -c /home/stajer/Desktop/stajer/FileWR/main.cpp

CMakeFiles/FileWR.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FileWR.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stajer/Desktop/stajer/FileWR/main.cpp > CMakeFiles/FileWR.dir/main.cpp.i

CMakeFiles/FileWR.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FileWR.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stajer/Desktop/stajer/FileWR/main.cpp -o CMakeFiles/FileWR.dir/main.cpp.s

# Object files for target FileWR
FileWR_OBJECTS = \
"CMakeFiles/FileWR.dir/FileWR_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/FileWR.dir/main.cpp.o"

# External object files for target FileWR
FileWR_EXTERNAL_OBJECTS =

FileWR: CMakeFiles/FileWR.dir/FileWR_autogen/mocs_compilation.cpp.o
FileWR: CMakeFiles/FileWR.dir/main.cpp.o
FileWR: CMakeFiles/FileWR.dir/build.make
FileWR: /usr/lib/x86_64-linux-gnu/libQt6Core.so.6.4.2
FileWR: CMakeFiles/FileWR.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/stajer/Desktop/stajer/FileWR/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable FileWR"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FileWR.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FileWR.dir/build: FileWR
.PHONY : CMakeFiles/FileWR.dir/build

CMakeFiles/FileWR.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FileWR.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FileWR.dir/clean

CMakeFiles/FileWR.dir/depend: FileWR_autogen/timestamp
	cd /home/stajer/Desktop/stajer/FileWR/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stajer/Desktop/stajer/FileWR /home/stajer/Desktop/stajer/FileWR /home/stajer/Desktop/stajer/FileWR/build/Desktop-Debug /home/stajer/Desktop/stajer/FileWR/build/Desktop-Debug /home/stajer/Desktop/stajer/FileWR/build/Desktop-Debug/CMakeFiles/FileWR.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/FileWR.dir/depend

