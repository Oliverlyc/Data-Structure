# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\CLion 2018.1.6\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion 2018.1.6\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\C\ListLink

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\C\ListLink\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ListLink.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ListLink.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ListLink.dir/flags.make

CMakeFiles/ListLink.dir/main.c.obj: CMakeFiles/ListLink.dir/flags.make
CMakeFiles/ListLink.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\C\ListLink\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ListLink.dir/main.c.obj"
	E:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ListLink.dir\main.c.obj   -c E:\C\ListLink\main.c

CMakeFiles/ListLink.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ListLink.dir/main.c.i"
	E:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\C\ListLink\main.c > CMakeFiles\ListLink.dir\main.c.i

CMakeFiles/ListLink.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ListLink.dir/main.c.s"
	E:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\C\ListLink\main.c -o CMakeFiles\ListLink.dir\main.c.s

CMakeFiles/ListLink.dir/main.c.obj.requires:

.PHONY : CMakeFiles/ListLink.dir/main.c.obj.requires

CMakeFiles/ListLink.dir/main.c.obj.provides: CMakeFiles/ListLink.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\ListLink.dir\build.make CMakeFiles/ListLink.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/ListLink.dir/main.c.obj.provides

CMakeFiles/ListLink.dir/main.c.obj.provides.build: CMakeFiles/ListLink.dir/main.c.obj


# Object files for target ListLink
ListLink_OBJECTS = \
"CMakeFiles/ListLink.dir/main.c.obj"

# External object files for target ListLink
ListLink_EXTERNAL_OBJECTS =

ListLink.exe: CMakeFiles/ListLink.dir/main.c.obj
ListLink.exe: CMakeFiles/ListLink.dir/build.make
ListLink.exe: CMakeFiles/ListLink.dir/linklibs.rsp
ListLink.exe: CMakeFiles/ListLink.dir/objects1.rsp
ListLink.exe: CMakeFiles/ListLink.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\C\ListLink\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ListLink.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ListLink.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ListLink.dir/build: ListLink.exe

.PHONY : CMakeFiles/ListLink.dir/build

CMakeFiles/ListLink.dir/requires: CMakeFiles/ListLink.dir/main.c.obj.requires

.PHONY : CMakeFiles/ListLink.dir/requires

CMakeFiles/ListLink.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ListLink.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ListLink.dir/clean

CMakeFiles/ListLink.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\C\ListLink E:\C\ListLink E:\C\ListLink\cmake-build-debug E:\C\ListLink\cmake-build-debug E:\C\ListLink\cmake-build-debug\CMakeFiles\ListLink.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ListLink.dir/depend
