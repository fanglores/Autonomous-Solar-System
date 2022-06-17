project (client)

# Toolchain for work with NK-parser.
include (platform/nk)

# Set compilation flags.
project_header_default ("STANDARD_GNU_11:YES" "STRICT_WARNINGS:NO")

nk_build_edl_files (client_edl_files NK_MODULE "client" EDL "${CMAKE_SOURCE_DIR}/resources/edl/Client.edl")

add_executable (Client "src/client.cpp")
add_dependencies (Client client_edl_files)
target_link_libraries (Client ${${PROJECT_NAME}_LIBS} ${vfs_CLIENT_LIB})
set_target_properties (Client PROPERTIES ${vfs_ENTITY}_REPLACEMENT "")
