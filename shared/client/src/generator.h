#pragma once

#include "../../common/generatorEntity.h"
#include "../../common/SocketsExchanger.h"

class IGenerator
{
protected:
	IExchanger* commandExchanger;
	GeneratorState state;
public:
	virtual void runCommand() = 0;
	virtual int sendState() const = 0;
};

class Generator : public IGenerator
{
public:
	Generator(IExchanger* cr);
	void runCommand() override;
	int sendState() const override;
};
