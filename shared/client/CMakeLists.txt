project(SolauticSystem)

set(HEADERS "../common/SocketsExchanger.h" "../common/SocketsExchanger.cpp" "src/generator.h" "src/generator.cpp")

add_executable(client "src/main.cpp" "${HEADERS}")
