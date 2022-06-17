#include <netdb.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#define RECEIVE_BUF_SIZE        2
#define EXAMPLE_PORT            3425

#define ANSI_COLOR_RED   "\x1b[31m"
#define ANSI_COLOR_RESET "\x1b[0m"

static void printErrorMessage(const char *message)
{
    printf(ANSI_COLOR_RED);
    perror(message);
    printf(ANSI_COLOR_RESET);
}

int main(int argc, const char *argv[])
{
    struct sockaddr_in addr;

    /* Create receiving socket for incomming connection requests. */
    int sock = socket(AF_INET, SOCK_DGRAM, 0);

    /* Allow port reuse, otherwise it will be unavailable for 2xMSL after program finished. */
    int tmp = 1;
    if (setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &tmp, sizeof(int)) < 0)
    {
        printErrorMessage("setsockopt(SO_REUSEADDR) failed");
        return EXIT_FAILURE;
    }

    if (-1 == sock)
    {
        printErrorMessage("Can not create socket");
        return EXIT_FAILURE;
    }

    /* Create and initialise socket`s address structure. */
    memset(&addr, 0, sizeof(addr));

    addr.sin_family = AF_INET;
    addr.sin_port = htons(EXAMPLE_PORT);
    addr.sin_addr.s_addr = htonl(INADDR_ANY);

    /* Bind socket with local address. */
    if (-1 == bind(sock, (struct sockaddr *)&addr, sizeof(addr)))
    {
        printErrorMessage("Error bind failed");
        close(sock);
        return EXIT_FAILURE;
    }

    /* Set socket to listening state. */
    char buf[RECEIVE_BUF_SIZE + 1];

    /* Read data from incoming connection. */
    while(1)
    {
	    fprintf(stderr, "Server is listening!\n");
	    if (0 >= recvfrom(sock, buf, sizeof(buf), 0, NULL, NULL))
	    {
		printErrorMessage("recv failed");
		close(sock);
		return EXIT_FAILURE;
	    }
	    else
	    {
		/* Print received data in terminal. */
		fprintf(stderr, "Server received: %s", buf);
	    }
	}
	
    /* Stop processing of incoming connection requests. */
    shutdown(sock, SHUT_RDWR);
    close(sock);

    return EXIT_SUCCESS;
}
