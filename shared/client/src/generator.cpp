#include "generator.h"
#include <iostream>

using namespace std;

Generator::Generator(IExchanger* cr) : commandExchanger(cr)
{
	state = GeneratorState::STOPPED;
}

int Generator::turnOn() const
{
	return 0;
}

int Generator::turnOff() const 
{
	return 0;
}

void Generator::runCommand()
{
	const char* cmd = commandExchanger->Receive();

	switch(*cmd)
	{
		case '1':
			state = GeneratorState::STARTING;
			if(this->turnOn() == 0) state = GeneratorState::RUNNING;
			else state = GeneratorState::ERROR;
		
			break;
		case '0':
			state = GeneratorState::STOPPING;
			if(this->turnOff() == 0) state = GeneratorState::STOPPED;
			else state = GeneratorState::ERROR;
			break;
		case 'g':
			if(this->sendState() != 0) state = GeneratorState::ERROR;
			break;
		default:
			cerr << "[WARNING] Generator got unknown command!" << endl;
			break;
	}
}

int Generator::sendState() const
{
	const char* st = new char(static_cast<char>(static_cast<int>(state)));
	return commandExchanger->Send(st);
}
