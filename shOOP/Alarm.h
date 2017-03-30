#ifndef ALARM_HPP
#define ALARM_HPP

#pragma once

class Arlam
{
public:
	
	//method
	void turnON();

	void turnOff();

private:
	bool turnedOn = true;
	int activateCode = 1234;
	int deactivateCode = 4321;
}

#endif // !ALARM_HPP