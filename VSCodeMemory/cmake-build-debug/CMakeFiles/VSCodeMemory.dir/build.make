# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/clion-2020.1.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/clion-2020.1.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/usuario/Escritorio/#2020-Semestre1/Datos2-Progras/VSCodeMemory"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/usuario/Escritorio/#2020-Semestre1/Datos2-Progras/VSCodeMemory/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/VSCodeMemory.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/VSCodeMemory.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/VSCodeMemory.dir/flags.make

CMakeFiles/VSCodeMemory.dir/main.cpp.o: CMakeFiles/VSCodeMemory.dir/flags.make
CMakeFiles/VSCodeMemory.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/usuario/Escritorio/#2020-Semestre1/Datos2-Progras/VSCodeMemory/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/VSCodeMemory.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/VSCodeMemory.dir/main.cpp.o -c "/home/usuario/Escritorio/#2020-Semestre1/Datos2-Progras/VSCodeMemory/main.cpp"

CMakeFiles/VSCodeMemory.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VSCodeMemory.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/usuario/Escritorio/#2020-Semestre1/Datos2-Progras/VSCodeMemory/main.cpp" > CMakeFiles/VSCodeMemory.dir/main.cpp.i

CMakeFiles/VSCodeMemory.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VSCodeMemory.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/usuario/Escritorio/#2020-Semestre1/Datos2-Progras/VSCodeMemory/main.cpp" -o CMakeFiles/VSCodeMemory.dir/main.cpp.s

# Object files for target VSCodeMemory
VSCodeMemory_OBJECTS = \
"CMakeFiles/VSCodeMemory.dir/main.cpp.o"

# External object files for target VSCodeMemory
VSCodeMemory_EXTERNAL_OBJECTS =

VSCodeMemory: CMakeFiles/VSCodeMemory.dir/main.cpp.o
VSCodeMemory: CMakeFiles/VSCodeMemory.dir/build.make
VSCodeMemory: CMakeFiles/VSCodeMemory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/usuario/Escritorio/#2020-Semestre1/Datos2-Progras/VSCodeMemory/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable VSCodeMemory"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/VSCodeMemory.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/VSCodeMemory.dir/build: VSCodeMemory

.PHONY : CMakeFiles/VSCodeMemory.dir/build

CMakeFiles/VSCodeMemory.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/VSCodeMemory.dir/cmake_clean.cmake
.PHONY : CMakeFiles/VSCodeMemory.dir/clean

CMakeFiles/VSCodeMemory.dir/depend:
	cd "/home/usuario/Escritorio/#2020-Semestre1/Datos2-Progras/VSCodeMemory/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/usuario/Escritorio/#2020-Semestre1/Datos2-Progras/VSCodeMemory" "/home/usuario/Escritorio/#2020-Semestre1/Datos2-Progras/VSCodeMemory" "/home/usuario/Escritorio/#2020-Semestre1/Datos2-Progras/VSCodeMemory/cmake-build-debug" "/home/usuario/Escritorio/#2020-Semestre1/Datos2-Progras/VSCodeMemory/cmake-build-debug" "/home/usuario/Escritorio/#2020-Semestre1/Datos2-Progras/VSCodeMemory/cmake-build-debug/CMakeFiles/VSCodeMemory.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/VSCodeMemory.dir/depend

