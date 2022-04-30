#pragma once

#include "../../entity/generatorEntity.h"
#include "../../entity/SocketsExchanger.h"

class Generator
{
private:
	IExchanger* commandExchanger;
	GeneratorState state;
public:
	Generator(IExchanger* ce);
	~Generator();

	int Start();
	int Stop();

	GeneratorState getState();
};
