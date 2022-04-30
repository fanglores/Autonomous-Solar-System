project(SolauticSystem)

set(HEADERS "../entity/client.h" "../entity/client.cpp")

add_executable(client "src/main.cpp" "${HEADERS}")
