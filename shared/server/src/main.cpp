#include "system.h"
#include "event.h"
#include "camera.h"
#include "generator.h"

#include <iostream>

//***********************************main.cpp*********************************
int main()
{   
	std::cout << "Hello, docker_opencv!!!" << std::endl;
	
	//system init
	System* solauticSystem = new System(new Camera(), new Generator(new UDPExchanger('s')));	//uses udp command exchange
	//System* solauticSystem = new System(new Camera(), new DummyGenerator());	//uses console input
	
	//event monitor init
	IEvent* eventReceiver = new ConsoleEvent();
	Event event = Event::NONE;
	
	//get it into event parser
	while (event != Event::EXIT)
	{
		event = eventReceiver->getEvent();
		
		solauticSystem->processEvent(event);
	}
	
    return 0;
}
