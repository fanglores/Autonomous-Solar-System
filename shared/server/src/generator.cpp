#include "generator.h"

IGenerator::IGenerator()
{
	state = GeneratorState::STOPPED;
}

//dummy generator code
DummyGenerator::DummyGenerator()
{
	state = GeneratorState::STOPPED;
}

int DummyGenerator::Start()
{
	state = GeneratorState::RUNNING;
	return 0;
}

int DummyGenerator::Stop()
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
	state = getState();
}

Generator::~Generator()
{
	delete commandExchanger;
}

GeneratorState Generator::getState()
{
	char* cmd = new char(static_cast<char>(GeneratorCommand::GET_STATE));
	commandExchanger->Send(cmd);
	
	char* buf = commandExchanger->Receive();
	
	state = static_cast<GeneratorState>(*buf);
	return state;
}

int Generator::Start()
{
	try
	{
		commandExchanger->Send(new char('1'));
		return 0;
	}
	catch(...)
	{
		return -1;
	}
}

int Generator::Stop()
{
	try
	{
		commandExchanger->Send(new char('0'));
		return 0;
	}
	catch (...)
	{
		return -1;
	}
}

