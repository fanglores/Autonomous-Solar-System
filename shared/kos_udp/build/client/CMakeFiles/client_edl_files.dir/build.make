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
CMAKE_SOURCE_DIR = /workspace/net2_with_separate_vfs_udp_modified

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspace/net2_with_separate_vfs_udp_modified/build

# Include any dependencies generated for this target.
include client/CMakeFiles/client_edl_files.dir/depend.make

# Include the progress variables for this target.
include client/CMakeFiles/client_edl_files.dir/progress.make

# Include the compile flags for this target's objects.
include client/CMakeFiles/client_edl_files.dir/flags.make

_headers_/client/Client.edl.h: client/Client.edl.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/net2_with_separate_vfs_udp_modified/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../_headers_/client/Client.edl.h"
	cd /workspace/net2_with_separate_vfs_udp_modified/build/client && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/cmake -E copy /workspace/net2_with_separate_vfs_udp_modified/build/client/Client.edl.h /workspace/net2_with_separate_vfs_udp_modified/build/_headers_/client/../client/Client.edl.h

client/Client.edl.h: _headers_/client/Client.edl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/net2_with_separate_vfs_udp_modified/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating Client.edl.h"
	cd /workspace/net2_with_separate_vfs_udp_modified/build/client && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/nk-gen-c -I /workspace/net2_with_separate_vfs_udp_modified/build/_headers_ -I /workspace/net2_with_separate_vfs_udp_modified/build/_headers_/client/.. -I /workspace/net2_with_separate_vfs_udp_modified/build/../install/include -I /opt/KasperskyOS-Community-Edition-1.0.1.4/sysroot-arm-kos/include -I /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/arm-kos/include -I /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/include -P /opt/KasperskyOS-Community-Edition-1.0.1.4/sysroot-arm-kos/include/system.platform -I /workspace/net2_with_separate_vfs_udp_modified/build/_headers_/client/../client /workspace/net2_with_separate_vfs_udp_modified/build/_headers_/client/../client/Client.edl

_headers_/client/Client.edl: ../resources/edl/Client.edl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/net2_with_separate_vfs_udp_modified/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating ../_headers_/client/Client.edl"
	cd /workspace/net2_with_separate_vfs_udp_modified/build/client && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/cmake -E copy /workspace/net2_with_separate_vfs_udp_modified/resources/edl/Client.edl /workspace/net2_with_separate_vfs_udp_modified/build/_headers_/client/../client/Client.edl

client_edl_files: client/CMakeFiles/client_edl_files.dir/build.make

.PHONY : client_edl_files

# Rule to build all files generated by this target.
client/CMakeFiles/client_edl_files.dir/build: client_edl_files

.PHONY : client/CMakeFiles/client_edl_files.dir/build

client/CMakeFiles/client_edl_files.dir/clean:
	cd /workspace/net2_with_separate_vfs_udp_modified/build/client && $(CMAKE_COMMAND) -P CMakeFiles/client_edl_files.dir/cmake_clean.cmake
.PHONY : client/CMakeFiles/client_edl_files.dir/clean

client/CMakeFiles/client_edl_files.dir/depend: _headers_/client/Client.edl.h
client/CMakeFiles/client_edl_files.dir/depend: client/Client.edl.h
client/CMakeFiles/client_edl_files.dir/depend: _headers_/client/Client.edl
	cd /workspace/net2_with_separate_vfs_udp_modified/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/net2_with_separate_vfs_udp_modified /workspace/net2_with_separate_vfs_udp_modified/client /workspace/net2_with_separate_vfs_udp_modified/build /workspace/net2_with_separate_vfs_udp_modified/build/client /workspace/net2_with_separate_vfs_udp_modified/build/client/CMakeFiles/client_edl_files.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : client/CMakeFiles/client_edl_files.dir/depend
