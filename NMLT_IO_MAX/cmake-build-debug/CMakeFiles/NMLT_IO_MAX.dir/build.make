# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\buinh\Documents\Big_O_Coder\NMLT_IO_MAX

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\buinh\Documents\Big_O_Coder\NMLT_IO_MAX\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/NMLT_IO_MAX.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NMLT_IO_MAX.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NMLT_IO_MAX.dir/flags.make

CMakeFiles/NMLT_IO_MAX.dir/main.cpp.obj: CMakeFiles/NMLT_IO_MAX.dir/flags.make
CMakeFiles/NMLT_IO_MAX.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\buinh\Documents\Big_O_Coder\NMLT_IO_MAX\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NMLT_IO_MAX.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\NMLT_IO_MAX.dir\main.cpp.obj -c C:\Users\buinh\Documents\Big_O_Coder\NMLT_IO_MAX\main.cpp

CMakeFiles/NMLT_IO_MAX.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NMLT_IO_MAX.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\buinh\Documents\Big_O_Coder\NMLT_IO_MAX\main.cpp > CMakeFiles\NMLT_IO_MAX.dir\main.cpp.i

CMakeFiles/NMLT_IO_MAX.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NMLT_IO_MAX.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\buinh\Documents\Big_O_Coder\NMLT_IO_MAX\main.cpp -o CMakeFiles\NMLT_IO_MAX.dir\main.cpp.s

# Object files for target NMLT_IO_MAX
NMLT_IO_MAX_OBJECTS = \
"CMakeFiles/NMLT_IO_MAX.dir/main.cpp.obj"

# External object files for target NMLT_IO_MAX
NMLT_IO_MAX_EXTERNAL_OBJECTS =

NMLT_IO_MAX.exe: CMakeFiles/NMLT_IO_MAX.dir/main.cpp.obj
NMLT_IO_MAX.exe: CMakeFiles/NMLT_IO_MAX.dir/build.make
NMLT_IO_MAX.exe: CMakeFiles/NMLT_IO_MAX.dir/linklibs.rsp
NMLT_IO_MAX.exe: CMakeFiles/NMLT_IO_MAX.dir/objects1.rsp
NMLT_IO_MAX.exe: CMakeFiles/NMLT_IO_MAX.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\buinh\Documents\Big_O_Coder\NMLT_IO_MAX\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable NMLT_IO_MAX.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\NMLT_IO_MAX.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NMLT_IO_MAX.dir/build: NMLT_IO_MAX.exe

.PHONY : CMakeFiles/NMLT_IO_MAX.dir/build

CMakeFiles/NMLT_IO_MAX.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\NMLT_IO_MAX.dir\cmake_clean.cmake
.PHONY : CMakeFiles/NMLT_IO_MAX.dir/clean

CMakeFiles/NMLT_IO_MAX.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\buinh\Documents\Big_O_Coder\NMLT_IO_MAX C:\Users\buinh\Documents\Big_O_Coder\NMLT_IO_MAX C:\Users\buinh\Documents\Big_O_Coder\NMLT_IO_MAX\cmake-build-debug C:\Users\buinh\Documents\Big_O_Coder\NMLT_IO_MAX\cmake-build-debug C:\Users\buinh\Documents\Big_O_Coder\NMLT_IO_MAX\cmake-build-debug\CMakeFiles\NMLT_IO_MAX.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NMLT_IO_MAX.dir/depend

