#include "event.h"
#include <iostream>

Event IEvent::getEvent()
{
	char inputEvent = this->readEvent();

	if (inputEvent == '1') return Event::PRESSED_START;
	if (inputEvent == '0') return Event::PRESSED_STOP;
	if (inputEvent == 'q') return Event::EXIT;
	
	if (inputEvent == ' ') return Event::NONE;

	return Event::NONE;
}

ConsoleEvent::ConsoleEvent()
{
	std::cerr << "[INPUT] Console input initiated!" << std::endl;
}

char ConsoleEvent::readEvent()
{
	char c;
	std::cerr << "Enter event: ";
	std::cin >> c;

	return c;
}

TCPEvent::TCPEvent()
{
	std::cerr << "[INPUT] TCP input initiated!" << std::endl;
}


char TCPEvent::readEvent()
{
	std::cout << "[ERROR] TCP Event is not implemented!";
		
	return ' ';
}
