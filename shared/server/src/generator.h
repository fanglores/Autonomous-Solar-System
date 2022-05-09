#pragma once

#include "../../common/generatorEntity.h"
#include "../../common/SocketsExchanger.h"

class IGenerator
{
protected:
	GeneratorState state;
public:
	IGenerator();

	virtual int Start() = 0;
	virtual int Stop() = 0;
	
	virtual GeneratorState getState() = 0;
};

class DummyGenerator : public IGenerator
{
public:
	DummyGenerator();

	int Start() override;
	int Stop() override;
	
	GeneratorState getState() override;
};

class Generator : public IGenerator
{
private:
	IExchanger* commandExchanger;
public:
	Generator(IExchanger* ce);
	~Generator();

	int Start() override;
	int Stop() override;

	GeneratorState getState() override;
};
