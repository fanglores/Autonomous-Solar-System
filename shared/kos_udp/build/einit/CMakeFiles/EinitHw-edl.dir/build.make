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
include einit/CMakeFiles/EinitHw-edl.dir/depend.make

# Include the progress variables for this target.
include einit/CMakeFiles/EinitHw-edl.dir/progress.make

# Include the compile flags for this target's objects.
include einit/CMakeFiles/EinitHw-edl.dir/flags.make

einit/EinitHw-kss/Einit.edl.h: einit/EinitHw-kss/Einit.edl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/net2_with_separate_vfs_udp_modified/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating EinitHw-kss/Einit.edl.h"
	cd /workspace/net2_with_separate_vfs_udp_modified/build/einit/EinitHw-kss && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/nk-gen-c -I /workspace/net2_with_separate_vfs_udp_modified/build/_headers_ -I /workspace/net2_with_separate_vfs_udp_modified/build/_headers_/client/.. -I /workspace/net2_with_separate_vfs_udp_modified/build/../install/include -I /opt/KasperskyOS-Community-Edition-1.0.1.4/sysroot-arm-kos/include -I /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/arm-kos/include -I /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/include -P /opt/KasperskyOS-Community-Edition-1.0.1.4/sysroot-arm-kos/include/system.platform -I /workspace/net2_with_separate_vfs_udp_modified/build/_headers_/einit/../kl /workspace/net2_with_separate_vfs_udp_modified/build/einit/EinitHw-kss/Einit.edl

EinitHw-edl: einit/CMakeFiles/EinitHw-edl.dir/build.make

.PHONY : EinitHw-edl

# Rule to build all files generated by this target.
einit/CMakeFiles/EinitHw-edl.dir/build: EinitHw-edl

.PHONY : einit/CMakeFiles/EinitHw-edl.dir/build

einit/CMakeFiles/EinitHw-edl.dir/clean:
	cd /workspace/net2_with_separate_vfs_udp_modified/build/einit && $(CMAKE_COMMAND) -P CMakeFiles/EinitHw-edl.dir/cmake_clean.cmake
.PHONY : einit/CMakeFiles/EinitHw-edl.dir/clean

einit/CMakeFiles/EinitHw-edl.dir/depend: einit/EinitHw-kss/Einit.edl.h
	cd /workspace/net2_with_separate_vfs_udp_modified/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/net2_with_separate_vfs_udp_modified /workspace/net2_with_separate_vfs_udp_modified/einit /workspace/net2_with_separate_vfs_udp_modified/build /workspace/net2_with_separate_vfs_udp_modified/build/einit /workspace/net2_with_separate_vfs_udp_modified/build/einit/CMakeFiles/EinitHw-edl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : einit/CMakeFiles/EinitHw-edl.dir/depend

