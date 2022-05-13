#pragma once

enum class Event
{
	NONE,
	PRESSED_START,
	PRESSED_STOP,
	EXIT,
	DEBUG_TURN_ON,
	DEBUG_TURN_OFF,
	DEBUG_PRINT_STATES
};

class IEvent
{
public:
	virtual Event getEvent();
	virtual char readEvent() = 0;
};

class ConsoleEvent : public IEvent
{
public:
	ConsoleEvent();
	char readEvent() override;
};

class TCPEvent : public IEvent
{
public:
	TCPEvent();
	char readEvent() override;
};

