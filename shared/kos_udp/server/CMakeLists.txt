project (server)

# Set compilation flags.
set(HEADERS "../common/SocketsExchanger.h" "../common/SocketsExchanger.cpp" "src/generator.h" "src/generator.cpp")
project_header_default ("STANDARD_GNU_11:YES" "STRICT_WARNINGS:NO")

add_executable (server "src/server.cpp" "${HEADERS}")
