#include "system.h"
#include <iostream>

System::System(Camera* cp, IGenerator* gp) : camera(cp), generator(gp), state(SystemState::OFF) {}

int System::Run()
{
	if(state == SystemState::OFF)
	{
		std::cerr << "[ERROR] System is not on, cannot run" << std::endl;
		return -1;
	}
	else if(state != SystemState::WORKING)
	{
		std::cerr << "[ERROR] System is not ready, cannot run" << std::endl;
		return -1;
	}

	try
	{
		std::cerr << "[INFO] Running the machine!" << std::endl;
		//if sun will be closed soon-/-else	
		return 0;
	}
	catch(...)
	{
		return -1;
	}
}

void System::processEvent(const Event& event)
{
	switch(event)
	{
		case (Event::PRESSED_START):
			std::cerr << "[INFO] Starting the machine" << std::endl;
			if(this->TurnOn() == 0) std::cerr << "[INFO] System has started successful" << std::endl;
			else std::cerr << "[INFO] Error while starting the system" << std::endl;
			break;

		case (Event::PRESSED_STOP):
			std::cerr << "[INFO] Stopping the machine" << std::endl;
			if(this->TurnOff() == 0) std::cerr << "[INFO] System has stopped successful" << std::endl;
			else std::cerr << "[INFO] Error while stopping the system" << std::endl;
			break;

		case (Event::EXIT):
			std::cerr << "[EXIT] System is shutting down" << std::endl;
			std::cerr << "[EXIT] Stopping the system" << std::endl;
			if(this->TurnOff() == 0) std::cerr << "[INFO] System has stopped successful" << std::endl;
			else std::cerr << "[INFO] Error while stopping the system" << std::endl;
			generator->turnOff();
			std::exit(0);
			break;
		
		case (Event::DEBUG_TURN_ON):
			std::cerr << "[DEBUG] Starting the generator" << std::endl;
			generator->turnOn();
			break;
		case (Event::DEBUG_TURN_OFF):
			std::cerr << "[DEBUG] Stopping the generator" << std::endl;
			generator->turnOff();
			break;
		case (Event::DEBUG_PRINT_STATES):
			std::cerr << "[DEBUG] Current generator state: " << static_cast<int>(generator->getState()) << std::endl;
			break;
		
		case (Event::NONE):
			this->Run();
			break;
		
		default:
			std::cerr << "[ERROR] Unknown event!" << std::endl;
	}
}

int System::TurnOn()
{
	if (state == SystemState::WORKING)
	{
		std::cerr << "[WARNING] System is already turned on" << std::endl;
		return 0;
	}

	if (state == SystemState::ERROR) return -1;

	if (state == SystemState::OFF)
	{
		try
		{
			state = SystemState::STARTING;

			/* start code */

			state = SystemState::WORKING;
			return 0;
		}
		catch (...)
		{
			state = SystemState::ERROR;
			std::cerr << "[ERROR] System starting procedure fault" << std::endl;
			return -1;
		}
	}
	else 
	{
		std::cerr << "[ERROR] System is not ready. Code: " << int(state) << std::endl;
		return 1;
	}
}

int System::TurnOff() 
{
	if (state == SystemState::OFF)
	{
		std::cerr << "[WARNING] System is already turned off" << std::endl;
		return 0;
	}

	if (state == SystemState::ERROR) return -1;

	if (state == SystemState::WORKING)
	{
		try
		{
			state = SystemState::STOPPING;

			/* stop code */

			state = SystemState::OFF;
			return 0;
		}
		catch (...)
		{
			state = SystemState::ERROR;
			std::cerr << "[ERROR] System stopping procedure fault" << std::endl;
			return -1;
		}
	}
	else 
	{
		std::cerr << "[ERROR] System is not ready. Code: " << int(state) << std::endl;
		return 1;
	}
}

int System::updatePhoto()
{
	try
	{
		previousPhoto = currentPhoto;
		currentPhoto = camera->getPhoto();

		return 0;
	}
	catch(...)
	{
		std::cerr << "[ERROR] System updatePhoto() fault" << std::endl;
		return -1;
	}	
}

