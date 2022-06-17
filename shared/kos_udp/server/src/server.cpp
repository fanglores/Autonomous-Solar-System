#include "../../common/SocketsExchanger.h"

#include "generator.h"
#include <iostream>
using namespace std;


int main()
{
	IGenerator* generator = new Generator(new UDPExchanger('c'));
	
	fprintf(stderr, "[SERVER] Server has started!\n");
	
	while(true) 
	{
		generator->runCommand();
	}
	
	return 0;
}
