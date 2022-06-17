cmake_minimum_required (VERSION 3.12)
project (net2_with_separate_vfs)

# Initialize CMake library for Kaspersky OS SDK.
include (platform)
initialize_platform ()

# Toolchain for work with NK-parser.
include (platform/nk)

# Connect artifact installation functions.
include (platform/install)

if (KOS)
    # Attach a package with the virtual file system implementation.
    find_package (vfs REQUIRED)
    include_directories (${vfs_INCLUDE})

    # Attach a package with the DNET file system implementation.
    find_package (dnet REQUIRED COMPONENTS IMPLEMENTATION_LIB)

    add_subdirectory (client)
    add_subdirectory (env)
    add_subdirectory (vfs)
endif ()

add_subdirectory (server)

if (KOS)
    # Binary image of KasperskyOS.
    add_subdirectory (einit)
endif ()
