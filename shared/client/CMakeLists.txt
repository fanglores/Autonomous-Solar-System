project(SolauticSystem)

set(HEADERS "../entity/SocketsExchanger.h" "../entity/SocketsExchanger.cpp")

add_executable(client "src/main.cpp" "${HEADERS}")
