#include "generator.h"

#include <iostream>
using namespace std;

IGenerator::IGenerator()
{
	state = GeneratorState::STOPPED;
}

//dummy generator code
DummyGenerator::DummyGenerator()
{
	state = GeneratorState::STOPPED;
}

int DummyGenerator::turnOn()
{
	state = GeneratorState::RUNNING;
	return 0;
}

int DummyGenerator::turnOff()
{
	state = GeneratorState::STOPPED;
	return 0;
}

GeneratorState DummyGenerator::getState()
{
	return state;
}

//main generator code
Generator::Generator(IExchanger* ce) : commandExchanger(ce)
{	
	//commandExchanger->Connect();
	state = getState();
}

Generator::~Generator()
{
	this->turnOff();
	delete commandExchanger;
}

GeneratorState Generator::getState()
{
	char* cmd = new char(static_cast<char>(GeneratorCommand::GET_STATE));
	cerr << "[DEBUG] Server is sending char GET_STATE command:" << static_cast<int>(*cmd) << endl;
	commandExchanger->Send(cmd);
	
	try
	{
		char* buf = commandExchanger->Receive();
		
		state = static_cast<GeneratorState>(*buf);
		cerr << "[DEBUG] Server recognized state as: " << static_cast<int>(state) << endl;
	}
	catch(...)
	{
		//if time limit for response is exceeded
		state = GeneratorState::ERROR;
	}
	
	return state;
}

int Generator::turnOn()
{
	try
	{
		commandExchanger->Send(new char(static_cast<char>(GeneratorCommand::START)));
		return 0;
	}
	catch(...)
	{
		return -1;
	}
}

int Generator::turnOff()
{
	try
	{
		commandExchanger->Send(new char(static_cast<char>(GeneratorCommand::STOP)));
		return 0;
	}
	catch (...)
	{
		return -1;
	}
}

