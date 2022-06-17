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

# Utility rule file for sim.

# Include the progress variables for this target.
include einit/CMakeFiles/sim.dir/progress.make

einit/CMakeFiles/sim: einit/kos-qemu-image
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/net2_with_separate_vfs_udp_modified/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running QEMU with KasperskyOS image..."
	cd /workspace/net2_with_separate_vfs_udp_modified/build/einit && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/qemu-system-arm -m 2048 -machine vexpress-a15 -nographic -monitor none -serial stdio -kernel /workspace/net2_with_separate_vfs_udp_modified/build/einit/kos-qemu-image

einit/kos-qemu-image: client/Client
einit/kos-qemu-image: env/Env
einit/kos-qemu-image: vfs/NetVfs
einit/kos-qemu-image: einit/EinitQemu
einit/kos-qemu-image: einit/EinitQemu-kss/ksm.module
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/net2_with_separate_vfs_udp_modified/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating KasperskyOS image: /workspace/net2_with_separate_vfs_udp_modified/build/einit/kos-qemu-image"
	cd /workspace/net2_with_separate_vfs_udp_modified/build/einit && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/makeimg --target=arm-kos --sys-root=/opt/KasperskyOS-Community-Edition-1.0.1.4/sysroot-arm-kos --with-toolchain=/opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain --with-init=/workspace/net2_with_separate_vfs_udp_modified/build/einit/EinitQemu --ldscript=/opt/KasperskyOS-Community-Edition-1.0.1.4/sysroot-arm-kos/../libexec/arm-kos/kos-qemu.ld --img-src=/opt/KasperskyOS-Community-Edition-1.0.1.4/sysroot-arm-kos/../libexec/arm-kos/kos-qemu --img-dst=/workspace/net2_with_separate_vfs_udp_modified/build/einit/kos-qemu-image /workspace/net2_with_separate_vfs_udp_modified/build/client/Client /workspace/net2_with_separate_vfs_udp_modified/build/env/Env /workspace/net2_with_separate_vfs_udp_modified/build/vfs/NetVfs /workspace/net2_with_separate_vfs_udp_modified/build/einit/EinitQemu-kss/ksm.module

einit/EinitQemu-kss/ksm.module: einit/EinitQemu-kss/src/security_arm.psl
einit/EinitQemu-kss/ksm.module: client/Client
einit/EinitQemu-kss/ksm.module: env/Env
einit/EinitQemu-kss/ksm.module: vfs/NetVfs
einit/EinitQemu-kss/ksm.module: einit/EinitQemu
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/net2_with_separate_vfs_udp_modified/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating EinitQemu-kss/ksm.module, EinitQemu-kss/security_arm.psl.audit.c"
	cd /workspace/net2_with_separate_vfs_udp_modified/build/einit/EinitQemu-kss && /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/makekss --target=arm-kos --module=-lksm_kss --base="0xC0000000" --with-cc="/opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/arm-kos-gcc" --with-cflags="-g -I/opt/KasperskyOS-Community-Edition-1.0.1.4/sysroot-arm-kos/include -D__KOS_KERNEL__" --with-nk="/opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/nk-psl-gen-c" --with-nkflags="-I /workspace/net2_with_separate_vfs_udp_modified/build/_headers_ -I /workspace/net2_with_separate_vfs_udp_modified/build/_headers_/client/.. -I /workspace/net2_with_separate_vfs_udp_modified/build/../install/include -I /opt/KasperskyOS-Community-Edition-1.0.1.4/sysroot-arm-kos/include -I /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/arm-kos/include -I /opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/include -P /opt/KasperskyOS-Community-Edition-1.0.1.4/sysroot-arm-kos/include/system.platform -I /workspace/net2_with_separate_vfs_udp_modified/einit/src -I /opt/KasperskyOS-Community-Edition-1.0.1.4/common" --with-nktype="psl" --psl-build-type="debug" --save-audit-to="/workspace/net2_with_separate_vfs_udp_modified/build/einit/EinitQemu-kss" /workspace/net2_with_separate_vfs_udp_modified/build/einit/EinitQemu-kss/src/security_arm.psl

einit/EinitQemu-kss/security_arm.psl.audit.c: einit/EinitQemu-kss/ksm.module
	@$(CMAKE_COMMAND) -E touch_nocreate einit/EinitQemu-kss/security_arm.psl.audit.c

sim: einit/CMakeFiles/sim
sim: einit/kos-qemu-image
sim: einit/EinitQemu-kss/ksm.module
sim: einit/EinitQemu-kss/security_arm.psl.audit.c
sim: einit/CMakeFiles/sim.dir/build.make

.PHONY : sim

# Rule to build all files generated by this target.
einit/CMakeFiles/sim.dir/build: sim

.PHONY : einit/CMakeFiles/sim.dir/build

einit/CMakeFiles/sim.dir/clean:
	cd /workspace/net2_with_separate_vfs_udp_modified/build/einit && $(CMAKE_COMMAND) -P CMakeFiles/sim.dir/cmake_clean.cmake
.PHONY : einit/CMakeFiles/sim.dir/clean

einit/CMakeFiles/sim.dir/depend:
	cd /workspace/net2_with_separate_vfs_udp_modified/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/net2_with_separate_vfs_udp_modified /workspace/net2_with_separate_vfs_udp_modified/einit /workspace/net2_with_separate_vfs_udp_modified/build /workspace/net2_with_separate_vfs_udp_modified/build/einit /workspace/net2_with_separate_vfs_udp_modified/build/einit/CMakeFiles/sim.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : einit/CMakeFiles/sim.dir/depend

