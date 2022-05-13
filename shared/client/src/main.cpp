#include "../../common/SocketsExchanger.h"

#include "generator.h"
#include <iostream>
using namespace std;


int main()
{
	IGenerator* generator = new Generator(new UDPExchanger('c'));
	
	while(true) 
	{
		generator->runCommand();
	}
	
	return 0;
}
