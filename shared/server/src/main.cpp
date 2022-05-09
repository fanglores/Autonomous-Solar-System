#include "system.h"
#include "event.h"
#include "camera.h"
#include "generator.h"

//***********************************main.cpp*********************************
int main()
{   
	std::cout << "Hello, docker!!!" << std::endl;
	
	//system init
	//System* solauticSystem = new System(new Camera(), new Generator(new UDPExchanger()));
	System* solauticSystem = new System(new Camera(), new DummyGenerator());
	
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
