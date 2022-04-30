#include "generator.h"

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

