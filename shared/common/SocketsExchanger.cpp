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

UDPExchanger::UDPExchanger(const char& type)
{
	this->type = type;
	
	sock = socket(AF_INET, SOCK_DGRAM, 0);

	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(SERVER_PORT);
	server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	
	client_addr = server_addr;
	client_addr.sin_port = htons(CLIENT_PORT);
	
	this->Connect();
}

int UDPExchanger::Connect() const
{
	cerr << "[UDP] Connecting... ";
	if(this->type == 'c')
	{
		if(bind(sock, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) 
		{
			cerr << "Unsuccessful :c" << endl;
			return 1;
		}
	}
	
	if(this->type == 's')
	{
		if(bind(sock, (struct sockaddr *)&client_addr, sizeof(client_addr)) < 0) 
		{
			cerr << "Unsuccessful :c" << endl;
			return 1;
		}
	}
		
	cerr << "Successful :)" << endl;
	
	return 0;
}

int UDPExchanger::Send(const char* data)
{
	cerr << "[UDP] Sent" << endl;
	if (this->type == 'c') sendto(sock, data, sizeof(data), 0, (struct sockaddr*)&client_addr, sizeof(client_addr));
	if (this->type == 's') sendto(sock, data, sizeof(data), 0, (struct sockaddr*)&server_addr, sizeof(server_addr));
	
	return 0;
}

char* UDPExchanger::Receive()
{
	cerr << "[UDP] Waiting for answer... ";
	
	bytes_read = recvfrom(sock, buf, MSG_SIZE, 0, NULL, NULL);
	buf[bytes_read] = '\0';
	
	cerr << "Got!" << endl;
	
	return buf;
}

