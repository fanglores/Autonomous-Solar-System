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
CMAKE_COMMAND = /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/cmake

# The command to remove a file.
RM = /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /workspace/kos_udp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspace/kos_udp/build

# Include any dependencies generated for this target.
include server/CMakeFiles/server.dir/depend.make

# Include the progress variables for this target.
include server/CMakeFiles/server.dir/progress.make

# Include the compile flags for this target's objects.
include server/CMakeFiles/server.dir/flags.make

server/CMakeFiles/server.dir/src/server.cpp.obj: server/CMakeFiles/server.dir/flags.make
server/CMakeFiles/server.dir/src/server.cpp.obj: ../server/src/server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspace/kos_udp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object server/CMakeFiles/server.dir/src/server.cpp.obj"
	cd /workspace/kos_udp/build/server && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/arm-kos-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/src/server.cpp.obj -c /workspace/kos_udp/server/src/server.cpp

server/CMakeFiles/server.dir/src/server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/src/server.cpp.i"
	cd /workspace/kos_udp/build/server && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/arm-kos-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspace/kos_udp/server/src/server.cpp > CMakeFiles/server.dir/src/server.cpp.i

server/CMakeFiles/server.dir/src/server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/src/server.cpp.s"
	cd /workspace/kos_udp/build/server && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/arm-kos-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspace/kos_udp/server/src/server.cpp -o CMakeFiles/server.dir/src/server.cpp.s

server/CMakeFiles/server.dir/__/common/SocketsExchanger.cpp.obj: server/CMakeFiles/server.dir/flags.make
server/CMakeFiles/server.dir/__/common/SocketsExchanger.cpp.obj: ../common/SocketsExchanger.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspace/kos_udp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object server/CMakeFiles/server.dir/__/common/SocketsExchanger.cpp.obj"
	cd /workspace/kos_udp/build/server && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/arm-kos-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/__/common/SocketsExchanger.cpp.obj -c /workspace/kos_udp/common/SocketsExchanger.cpp

server/CMakeFiles/server.dir/__/common/SocketsExchanger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/__/common/SocketsExchanger.cpp.i"
	cd /workspace/kos_udp/build/server && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/arm-kos-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspace/kos_udp/common/SocketsExchanger.cpp > CMakeFiles/server.dir/__/common/SocketsExchanger.cpp.i

server/CMakeFiles/server.dir/__/common/SocketsExchanger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/__/common/SocketsExchanger.cpp.s"
	cd /workspace/kos_udp/build/server && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/arm-kos-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspace/kos_udp/common/SocketsExchanger.cpp -o CMakeFiles/server.dir/__/common/SocketsExchanger.cpp.s

server/CMakeFiles/server.dir/src/generator.cpp.obj: server/CMakeFiles/server.dir/flags.make
server/CMakeFiles/server.dir/src/generator.cpp.obj: ../server/src/generator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspace/kos_udp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object server/CMakeFiles/server.dir/src/generator.cpp.obj"
	cd /workspace/kos_udp/build/server && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/arm-kos-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/src/generator.cpp.obj -c /workspace/kos_udp/server/src/generator.cpp

server/CMakeFiles/server.dir/src/generator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/src/generator.cpp.i"
	cd /workspace/kos_udp/build/server && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/arm-kos-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspace/kos_udp/server/src/generator.cpp > CMakeFiles/server.dir/src/generator.cpp.i

server/CMakeFiles/server.dir/src/generator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/src/generator.cpp.s"
	cd /workspace/kos_udp/build/server && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/arm-kos-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspace/kos_udp/server/src/generator.cpp -o CMakeFiles/server.dir/src/generator.cpp.s

# Object files for target server
server_OBJECTS = \
"CMakeFiles/server.dir/src/server.cpp.obj" \
"CMakeFiles/server.dir/__/common/SocketsExchanger.cpp.obj" \
"CMakeFiles/server.dir/src/generator.cpp.obj"

# External object files for target server
server_EXTERNAL_OBJECTS =

server/server: server/CMakeFiles/server.dir/src/server.cpp.obj
server/server: server/CMakeFiles/server.dir/__/common/SocketsExchanger.cpp.obj
server/server: server/CMakeFiles/server.dir/src/generator.cpp.obj
server/server: server/CMakeFiles/server.dir/build.make
server/server: server/CMakeFiles/server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspace/kos_udp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable server"
	cd /workspace/kos_udp/build/server && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
server/CMakeFiles/server.dir/build: server/server

.PHONY : server/CMakeFiles/server.dir/build

server/CMakeFiles/server.dir/clean:
	cd /workspace/kos_udp/build/server && $(CMAKE_COMMAND) -P CMakeFiles/server.dir/cmake_clean.cmake
.PHONY : server/CMakeFiles/server.dir/clean

server/CMakeFiles/server.dir/depend:
	cd /workspace/kos_udp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/kos_udp /workspace/kos_udp/server /workspace/kos_udp/build /workspace/kos_udp/build/server /workspace/kos_udp/build/server/CMakeFiles/server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : server/CMakeFiles/server.dir/depend

