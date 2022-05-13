#include "SocketsExchanger.h"

#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>

#include <iostream>
using namespace std;

IExchanger::~IExchanger()
{
	close(sock);
	delete[] buf;
}

UDPExchanger::UDPExchanger()
{
	sock = socket(AF_INET, SOCK_DGRAM, 0);

	addr.sin_family = AF_INET;
	addr.sin_port = htons(3425);
	addr.sin_addr.s_addr = htonl(INADDR_ANY);
}

int UDPExchanger::Connect() const
{
	if(bind(sock, (struct sockaddr *)&addr, sizeof(addr)) < 0) 
	{
		cerr << "[ERROR] bind" << endl;
		return 1;
	}

	return 0;
}

int UDPExchanger::Send(const char* data)
{
	sendto(sock, data, sizeof(data), 0, (struct sockaddr *)&addr, sizeof(addr));
	return 0;
}

char* UDPExchanger::Receive()
{
	bytes_read = 0;
	
	while(bytes_read == 0)
	{
		bytes_read = recvfrom(sock, buf, MSG_SIZE, 0, NULL, NULL);
		buf[bytes_read] = '\0';
	}
	
	return buf;
}

