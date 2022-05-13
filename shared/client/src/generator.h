#pragma once

#include "../../common/generatorEntity.h"
#include "../../common/SocketsExchanger.h"

class IGenerator
{
protected:
	IExchanger* commandExchanger;
	GeneratorState state;
public:
	virtual int turnOn() const = 0;
	virtual int turnOff() const = 0;
	virtual void runCommand() = 0;
	virtual int sendState() const = 0;
};

class Generator : public IGenerator
{
private:
	IExchanger* commandExchanger;
	GeneratorState state;
public:
	Generator(IExchanger* cr);
	int turnOn() const override;
	int turnOff() const override;
	void runCommand() override;
	int sendState() const override;
};
