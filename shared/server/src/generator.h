#pragma once

#include "../../common/generatorEntity.h"
#include "../../common/SocketsExchanger.h"

class IGenerator
{
protected:
	GeneratorState state;
public:
	IGenerator();

	virtual int turnOn() = 0;
	virtual int turnOff() = 0;
	
	virtual GeneratorState getState() = 0;
};

class DummyGenerator : public IGenerator
{
public:
	DummyGenerator();

	int turnOn() override;
	int turnOff() override;
	
	GeneratorState getState() override;
};

class Generator : public IGenerator
{
private:
	IExchanger* commandExchanger;
public:
	Generator(IExchanger* ce);
	~Generator();

	int turnOn() override;
	int turnOff() override;

	GeneratorState getState() override;
};
