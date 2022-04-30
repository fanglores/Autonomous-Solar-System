#include "system.h"
#include "event.h"
#include "camera.h"
#include "generator.h"

//***********************************main.cpp*********************************
int main()
{   
	std::cout << "Hello, docker!!!" << std::endl;
	
	//system init
	System solauticSystem(new Camera(), new Generator(new UDPExchanger()));
	
	//event monitor init
	IEvent* eventReceiver = new ConsoleEvent();
	Event event = Event::NONE;
	
	//get it into event parser
	while (event != Event::EXIT)
	{
		event = eventReceiver->getEvent();

		switch(event)
		{
			case (Event::PRESSED_START):
				std::cerr << "[INFO] Starting the machine" << std::endl;
				if(solauticSystem.TurnOn() == 0) std::cerr << "[INFO] System has started successful" << std::endl;
				else std::cerr << "[INFO] Error while starting the system" << std::endl;
				break;

			case (Event::PRESSED_STOP):
				std::cerr << "[INFO] Stopping the machine" << std::endl;
				if(solauticSystem.TurnOff() == 0) std::cerr << "[INFO] System has stopped successful" << std::endl;
				else std::cerr << "[INFO] Error while stopping the system" << std::endl;
				break;

			case (Event::EXIT):
				std::cerr << "[EXIT] System is shutting down" << std::endl;
				std::cerr << "[EXIT] Stopping the system" << std::endl;
				if(solauticSystem.TurnOff() == 0) std::cerr << "[INFO] System has stopped successful" << std::endl;
				else std::cerr << "[INFO] Error while stopping the system" << std::endl;
				std::exit(0);
				break;
			
			default:
				std::cerr << "[ERROR] Unknown event!" << std::endl;
		}
	}
	
    return 0;
}
