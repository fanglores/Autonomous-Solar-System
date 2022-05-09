project(SolauticSystem)

set(HEADERS "../common/SocketsExchanger.h" "../common/SocketsExchanger.cpp")

add_executable(client "src/main.cpp" "${HEADERS}")
