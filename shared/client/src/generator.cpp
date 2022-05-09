#include "generator.h"

Generator::Generator(IExchanger* cr) : commandExchanger(cr)
{
	state = GeneratorState::STOPPED;
}

void Generator::runCommand()
{
	const char* cmd = commandExchanger->Receive();

	switch(*cmd)
	{
		case '1':
			//turn on
			break;
		case '0':
			//turn off
			break;
		case 'g':
			this->sendState();
			break;
		default:
			break;
	}
}

int Generator::sendState() const
{
	return commandExchanger->Send(int(state));
}
