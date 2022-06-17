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
    	STOP = '0',
	START = '1',
    	GET_STATE = 'g'
};
