#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>

#include <sys/socket.h>
#include <sys/types.h>
#include <sys/mount.h>
#include <sys/stat.h>
#include <sys/types.h>

#include <platform/platform.h>

#include <kos_net.h>

#define MSG_SIZE 2
#define EXAMPLE_PORT 3425
#define NUM_RETRIES 10

int main(int argc, const char *argv[])
{
#if PLATFORM_OS(KOS)
#define server_addr "10.0.2.2"
    /* Add network interface. */
    if (!configure_net_iface(DEFAULT_INTERFACE, "10.0.2.10", DEFAULT_MASK, DEFAULT_GATEWAY, DEFAULT_MTU)) {
        perror(DEFAULT_INTERFACE ": network iface configuration failed\n");
        return EXIT_FAILURE;
    }

    if (!list_network_ifaces()) {
        perror("listing of host network interfaces failes\n");
        return EXIT_FAILURE;
    }
#else
#define server_addr "localhost"
#endif

    /* Create socket for connection with server. */
    int sock = socket(AF_INET, SOCK_DGRAM, 0);

    if (-1 == sock)
    {
        perror("cannot create socket");
        return EXIT_FAILURE;
    }

    /* Creating and initialisation of socket`s address structure for connection with server. */
    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(EXAMPLE_PORT);

/*
    struct addrinfo hints;
    memset(&hints, 0, sizeof(struct addrinfo));
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;

    struct addrinfo *resultHints = NULL;
    int res = getaddrinfo(server_addr, NULL, &hints, &resultHints);
    if (res != 0)
    {
        perror("cannot get address info");
        close(sock);
        return EXIT_FAILURE;
    }

    struct sockaddr_in* in_addr = (struct sockaddr_in *)resultHints->ai_addr;
    memcpy(&stSockAddr.sin_addr.s_addr, &in_addr->sin_addr.s_addr, sizeof(in_addr_t));
    freeaddrinfo(resultHints);
*/

    char buf[] = "0\n";
    /* Send data to server. */
    for(int i = 0; i < 3; i++)
    {
	    if (-1 == sendto(sock, buf, strlen(buf) + 1, 0, (struct sockaddr*)&addr, sizeof(addr)))
	    {
		perror("send failed");
		close(sock);
		return EXIT_FAILURE;
	    }
	    else
	    {
		/* Print sended to server data in terminal. */
		fprintf(stderr, "Client sent: %s", buf);
	    }
	    sleep(2);
    }

    /* Close connection with server. */
    shutdown(sock, SHUT_RDWR);
    close(sock);

    return EXIT_SUCCESS;
}
