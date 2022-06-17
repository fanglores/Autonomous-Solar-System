#pragma once

#include <netinet/in.h>

const int MSG_SIZE = 2;
const int SERVER_PORT = 3425;
const int CLIENT_PORT = 3426;

class IExchanger
{
protected:
	char type; 	//client or server

	int sock;
	struct sockaddr_in server_addr, client_addr;
	char buf[MSG_SIZE + 1];
	int bytes_read;
public:
	virtual int Connect() const = 0;
	virtual int Send(const char* data) = 0;
	virtual char* Receive() = 0;
	virtual ~IExchanger();
};



class UDPExchanger : public IExchanger
{
public:
	UDPExchanger(const char& type);
	int Connect() const override;
	int Send(const char* data) override;
	char* Receive() override;
};



class TCPExchanger : public IExchanger
{
public:
	TCPExchanger();
	int Connect() const override;
	int Send(const char* data) override;
	char* Receive() override;

};
