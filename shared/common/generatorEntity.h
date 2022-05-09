#pragma once

enum class GeneratorState
{
	STARTING,
	RUNNING,
	STOPPING,
	STOPPED,
	ERROR
};

enum class GeneratorCommand
{
    	START = '0',
	STOP = '1',
    	GET_STATE = 'g'
};
