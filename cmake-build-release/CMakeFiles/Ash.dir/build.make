# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "D:\Program Files\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Azide\Ash

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Azide\Ash\cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/Ash.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ash.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ash.dir/flags.make

CMakeFiles/Ash.dir/src/ash.cpp.obj: CMakeFiles/Ash.dir/flags.make
CMakeFiles/Ash.dir/src/ash.cpp.obj: ../src/ash.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Azide\Ash\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ash.dir/src/ash.cpp.obj"
	E:\Azide\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ash.dir\src\ash.cpp.obj -c E:\Azide\Ash\src\ash.cpp

CMakeFiles/Ash.dir/src/ash.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ash.dir/src/ash.cpp.i"
	E:\Azide\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Azide\Ash\src\ash.cpp > CMakeFiles\Ash.dir\src\ash.cpp.i

CMakeFiles/Ash.dir/src/ash.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ash.dir/src/ash.cpp.s"
	E:\Azide\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Azide\Ash\src\ash.cpp -o CMakeFiles\Ash.dir\src\ash.cpp.s

CMakeFiles/Ash.dir/src/bullet.cpp.obj: CMakeFiles/Ash.dir/flags.make
CMakeFiles/Ash.dir/src/bullet.cpp.obj: ../src/bullet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Azide\Ash\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Ash.dir/src/bullet.cpp.obj"
	E:\Azide\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ash.dir\src\bullet.cpp.obj -c E:\Azide\Ash\src\bullet.cpp

CMakeFiles/Ash.dir/src/bullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ash.dir/src/bullet.cpp.i"
	E:\Azide\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Azide\Ash\src\bullet.cpp > CMakeFiles\Ash.dir\src\bullet.cpp.i

CMakeFiles/Ash.dir/src/bullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ash.dir/src/bullet.cpp.s"
	E:\Azide\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Azide\Ash\src\bullet.cpp -o CMakeFiles\Ash.dir\src\bullet.cpp.s

CMakeFiles/Ash.dir/src/collision.cpp.obj: CMakeFiles/Ash.dir/flags.make
CMakeFiles/Ash.dir/src/collision.cpp.obj: ../src/collision.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Azide\Ash\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Ash.dir/src/collision.cpp.obj"
	E:\Azide\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ash.dir\src\collision.cpp.obj -c E:\Azide\Ash\src\collision.cpp

CMakeFiles/Ash.dir/src/collision.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ash.dir/src/collision.cpp.i"
	E:\Azide\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Azide\Ash\src\collision.cpp > CMakeFiles\Ash.dir\src\collision.cpp.i

CMakeFiles/Ash.dir/src/collision.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ash.dir/src/collision.cpp.s"
	E:\Azide\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Azide\Ash\src\collision.cpp -o CMakeFiles\Ash.dir\src\collision.cpp.s

CMakeFiles/Ash.dir/src/enemy.cpp.obj: CMakeFiles/Ash.dir/flags.make
CMakeFiles/Ash.dir/src/enemy.cpp.obj: ../src/enemy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Azide\Ash\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Ash.dir/src/enemy.cpp.obj"
	E:\Azide\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ash.dir\src\enemy.cpp.obj -c E:\Azide\Ash\src\enemy.cpp

CMakeFiles/Ash.dir/src/enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ash.dir/src/enemy.cpp.i"
	E:\Azide\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Azide\Ash\src\enemy.cpp > CMakeFiles\Ash.dir\src\enemy.cpp.i

CMakeFiles/Ash.dir/src/enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ash.dir/src/enemy.cpp.s"
	E:\Azide\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Azide\Ash\src\enemy.cpp -o CMakeFiles\Ash.dir\src\enemy.cpp.s

CMakeFiles/Ash.dir/src/main.cpp.obj: CMakeFiles/Ash.dir/flags.make
CMakeFiles/Ash.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Azide\Ash\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Ash.dir/src/main.cpp.obj"
	E:\Azide\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ash.dir\src\main.cpp.obj -c E:\Azide\Ash\src\main.cpp

CMakeFiles/Ash.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ash.dir/src/main.cpp.i"
	E:\Azide\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Azide\Ash\src\main.cpp > CMakeFiles\Ash.dir\src\main.cpp.i

CMakeFiles/Ash.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ash.dir/src/main.cpp.s"
	E:\Azide\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Azide\Ash\src\main.cpp -o CMakeFiles\Ash.dir\src\main.cpp.s

# Object files for target Ash
Ash_OBJECTS = \
"CMakeFiles/Ash.dir/src/ash.cpp.obj" \
"CMakeFiles/Ash.dir/src/bullet.cpp.obj" \
"CMakeFiles/Ash.dir/src/collision.cpp.obj" \
"CMakeFiles/Ash.dir/src/enemy.cpp.obj" \
"CMakeFiles/Ash.dir/src/main.cpp.obj"

# External object files for target Ash
Ash_EXTERNAL_OBJECTS =

Ash.exe: CMakeFiles/Ash.dir/src/ash.cpp.obj
Ash.exe: CMakeFiles/Ash.dir/src/bullet.cpp.obj
Ash.exe: CMakeFiles/Ash.dir/src/collision.cpp.obj
Ash.exe: CMakeFiles/Ash.dir/src/enemy.cpp.obj
Ash.exe: CMakeFiles/Ash.dir/src/main.cpp.obj
Ash.exe: CMakeFiles/Ash.dir/build.make
Ash.exe: E:/Azide/SFML-MinGW/lib/libsfml-audio.a
Ash.exe: E:/Azide/SFML-MinGW/lib/libsfml-network.a
Ash.exe: E:/Azide/SFML-MinGW/lib/libsfml-graphics.a
Ash.exe: E:/Azide/SFML-MinGW/lib/libsfml-window.a
Ash.exe: E:/Azide/SFML-MinGW/lib/libsfml-system.a
Ash.exe: CMakeFiles/Ash.dir/linklibs.rsp
Ash.exe: CMakeFiles/Ash.dir/objects1.rsp
Ash.exe: CMakeFiles/Ash.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Azide\Ash\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Ash.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Ash.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ash.dir/build: Ash.exe

.PHONY : CMakeFiles/Ash.dir/build

CMakeFiles/Ash.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ash.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Ash.dir/clean

CMakeFiles/Ash.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Azide\Ash E:\Azide\Ash E:\Azide\Ash\cmake-build-release E:\Azide\Ash\cmake-build-release E:\Azide\Ash\cmake-build-release\CMakeFiles\Ash.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ash.dir/depend

