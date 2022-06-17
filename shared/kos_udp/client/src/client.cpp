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

#include "../../common/SocketsExchanger.h"

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

	UDPExchanger* udp_client = new UDPExchanger('c');
	
	fprintf(stderr, "[TEST SENDER] Client has started!\n[UDP] Starting send packages!\n");
	
	for(int i = 0; i < NUM_RETRIES; i++)
	{
		udp_client->Send("00");
		sleep(1);	
	}

    return EXIT_SUCCESS;
}
