#pragma once

#include <netinet/in.h>

const int MSG_SIZE = 1;


class IExchanger
{
protected:
	int sock;
	struct sockaddr_in addr;
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
	UDPExchanger();
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
