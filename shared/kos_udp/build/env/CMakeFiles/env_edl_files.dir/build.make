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
include env/CMakeFiles/env_edl_files.dir/depend.make

# Include the progress variables for this target.
include env/CMakeFiles/env_edl_files.dir/progress.make

# Include the compile flags for this target's objects.
include env/CMakeFiles/env_edl_files.dir/flags.make

_headers_/env/Env.edl.h: env/Env.edl.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/kos_udp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../_headers_/env/Env.edl.h"
	cd /workspace/kos_udp/build/env && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/cmake -E copy /workspace/kos_udp/build/env/Env.edl.h /workspace/kos_udp/build/_headers_/env/../env/Env.edl.h

env/Env.edl.h: _headers_/env/Env.edl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/kos_udp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating Env.edl.h"
	cd /workspace/kos_udp/build/env && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/nk-gen-c -I /workspace/kos_udp/build/_headers_ -I /workspace/kos_udp/build/_headers_/client/.. -I /workspace/kos_udp/build/../install/include -I /opt/KasperskyOS-Community-Edition-1.0.1.4/sysroot-arm-kos/include -I /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/arm-kos/include -I /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/include -P /opt/KasperskyOS-Community-Edition-1.0.1.4/sysroot-arm-kos/include/system.platform -I /workspace/kos_udp/build/_headers_/env/../env /workspace/kos_udp/build/_headers_/env/../env/Env.edl

_headers_/env/Env.edl: ../resources/edl/Env.edl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/kos_udp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating ../_headers_/env/Env.edl"
	cd /workspace/kos_udp/build/env && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/cmake -E copy /workspace/kos_udp/resources/edl/Env.edl /workspace/kos_udp/build/_headers_/env/../env/Env.edl

env_edl_files: env/CMakeFiles/env_edl_files.dir/build.make

.PHONY : env_edl_files

# Rule to build all files generated by this target.
env/CMakeFiles/env_edl_files.dir/build: env_edl_files

.PHONY : env/CMakeFiles/env_edl_files.dir/build

env/CMakeFiles/env_edl_files.dir/clean:
	cd /workspace/kos_udp/build/env && $(CMAKE_COMMAND) -P CMakeFiles/env_edl_files.dir/cmake_clean.cmake
.PHONY : env/CMakeFiles/env_edl_files.dir/clean

env/CMakeFiles/env_edl_files.dir/depend: _headers_/env/Env.edl.h
env/CMakeFiles/env_edl_files.dir/depend: env/Env.edl.h
env/CMakeFiles/env_edl_files.dir/depend: _headers_/env/Env.edl
	cd /workspace/kos_udp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/kos_udp /workspace/kos_udp/env /workspace/kos_udp/build /workspace/kos_udp/build/env /workspace/kos_udp/build/env/CMakeFiles/env_edl_files.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : env/CMakeFiles/env_edl_files.dir/depend

