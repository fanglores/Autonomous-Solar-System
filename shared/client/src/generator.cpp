#include "generator.h"
#include <iostream>

using namespace std;

Generator::Generator(IExchanger* cr) : commandExchanger(cr)
{
	//commandExchanger->Connect();
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
	const GeneratorCommand cmd = static_cast<GeneratorCommand>(*commandExchanger->Receive());
	cerr << "[DEBUG] Client got following char command: " << static_cast<int>(cmd) << endl; 
	
	switch(cmd)
	{
		case GeneratorCommand::START:
			cerr << "[DEBUG] Client recognized start command" << endl;
			state = GeneratorState::STARTING;
			if(this->turnOn() == 0) state = GeneratorState::RUNNING;
			else state = GeneratorState::ERROR;
			break;
		case GeneratorCommand::STOP:
			cerr << "[DEBUG] Client recognized stop command" << endl;
			state = GeneratorState::STOPPING;
			if(this->turnOff() == 0) state = GeneratorState::STOPPED;
			else state = GeneratorState::ERROR;
			break;
		case GeneratorCommand::GET_STATE:
			cerr << "[DEBUG] Client recognized get_state command" << endl;
			if(this->sendState() != 0) state = GeneratorState::ERROR;
			break;
		default:
			cerr << "[WARNING] Generator got unknown command! Command code: " << static_cast<int>(cmd) << endl;
			break;
	}
}

int Generator::sendState() const
{
	const char* st = new char(static_cast<char>(static_cast<int>(state)));
	int rv = commandExchanger->Send(st);

	return rv;
}
