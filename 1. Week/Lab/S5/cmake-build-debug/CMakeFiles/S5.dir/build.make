# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\CLion\CLion 2021.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\CLion\CLion 2021.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Programming\Coding\C\Pd2-Labs\1. Week\Lab\S5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Programming\Coding\C\Pd2-Labs\1. Week\Lab\S5\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/S5.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/S5.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/S5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/S5.dir/flags.make

CMakeFiles/S5.dir/main.c.obj: CMakeFiles/S5.dir/flags.make
CMakeFiles/S5.dir/main.c.obj: ../main.c
CMakeFiles/S5.dir/main.c.obj: CMakeFiles/S5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Programming\Coding\C\Pd2-Labs\1. Week\Lab\S5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/S5.dir/main.c.obj"
	D:\PROGRA~2\CLion\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/S5.dir/main.c.obj -MF CMakeFiles\S5.dir\main.c.obj.d -o CMakeFiles\S5.dir\main.c.obj -c "D:\Programming\Coding\C\Pd2-Labs\1. Week\Lab\S5\main.c"

CMakeFiles/S5.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/S5.dir/main.c.i"
	D:\PROGRA~2\CLion\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\Programming\Coding\C\Pd2-Labs\1. Week\Lab\S5\main.c" > CMakeFiles\S5.dir\main.c.i

CMakeFiles/S5.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/S5.dir/main.c.s"
	D:\PROGRA~2\CLion\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\Programming\Coding\C\Pd2-Labs\1. Week\Lab\S5\main.c" -o CMakeFiles\S5.dir\main.c.s

# Object files for target S5
S5_OBJECTS = \
"CMakeFiles/S5.dir/main.c.obj"

# External object files for target S5
S5_EXTERNAL_OBJECTS =

S5.exe: CMakeFiles/S5.dir/main.c.obj
S5.exe: CMakeFiles/S5.dir/build.make
S5.exe: CMakeFiles/S5.dir/linklibs.rsp
S5.exe: CMakeFiles/S5.dir/objects1.rsp
S5.exe: CMakeFiles/S5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Programming\Coding\C\Pd2-Labs\1. Week\Lab\S5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable S5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\S5.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/S5.dir/build: S5.exe
.PHONY : CMakeFiles/S5.dir/build

CMakeFiles/S5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\S5.dir\cmake_clean.cmake
.PHONY : CMakeFiles/S5.dir/clean

CMakeFiles/S5.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Programming\Coding\C\Pd2-Labs\1. Week\Lab\S5" "D:\Programming\Coding\C\Pd2-Labs\1. Week\Lab\S5" "D:\Programming\Coding\C\Pd2-Labs\1. Week\Lab\S5\cmake-build-debug" "D:\Programming\Coding\C\Pd2-Labs\1. Week\Lab\S5\cmake-build-debug" "D:\Programming\Coding\C\Pd2-Labs\1. Week\Lab\S5\cmake-build-debug\CMakeFiles\S5.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/S5.dir/depend
