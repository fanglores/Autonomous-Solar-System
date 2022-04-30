#include "SocketsExchanger.h"

#include <sys/types.h>
#include <sys/socket.h>
#include <iostream>
using namespace std;

IExchanger::~IExchanger()
{
	close(sock);
	delete[] buf;
}

UDPClient::UDPClient()
{
	sock = socket(AF_INET, SOCK_DGRAM, 0);

	addr.sin_family = AF_INET;
	addr.sin_port = htons(3425);
	addr.sin_addr.s_addr = htonl(INADDR_ANY);
}

UDPExchanger::~IExchanger();

int UDPExchanger::Connect() const
{
	if(bind(sock, (struct sockaddr *)&addr, sizeof(addr)) < 0) 
	{
		cerr << "[ERROR] bind" << endl;
		return 1;
	}

	return 0;
}

int UDPExchanger::Send(char* data)
{

}

char* UDPExchanger::Receive()
{
	bytes_read = recvfrom(sock, buf, MSG_SIZE, 0, NULL, NULL);
	buf[bytes_read] = '\0';
	
	return buf;
}

