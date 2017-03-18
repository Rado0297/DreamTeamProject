#include "Alarm.h"
#include <iostream>

void Arlam::turnON()
{
	int code;
	int tries = 3;
	std::cin >> code;
	if (code == activateCode)
	{
		std::cout << "Alarm is activated and shop will be protected from thiefs! \n \n";
	}
	else if (code == deactivateCode) 
	{
		//callTheCops();
	}
	else
	{
		std::cout << "You entered a wrong code. 3 attempts left! \n \n";
		while (tries > 0)
		{
			std::cin >> code;

			tries--;

			if (code == activateCode)
			{
				std::cout << "Alarm is activated and shop will be protected from thiefs! \n \n";
				break;
			}
			else if (code == deactivateCode)
			{
				//callTheCops();
			}
			else
			{
				std::cout << tries << " attempts left to activate the alarm! \n";
				tries--;
			}

			if (tries == 0)
			{
				std::cout << "You get your attempts limit. Call to your security assistant for more information and help.";
			}
		}
	}
}

void Arlam::turnOff()
{
	int code;
	int tries = 3;
	std::cin >> code;
	if (code == deactivateCode)
	{
		std::cout << "Alarm is deactivated! Have a nice day! \n \n";
	}
	else if (code == activateCode)
	{
		//callTheCops();
	}
	else
	{
		std::cout << "You entered a wrong code. 3 attempts left! \n \n";
		while (tries > 0)
		{
			std::cin >> code;

			tries--;

			if (code == deactivateCode)
			{
				std::cout << "Alarm is deactivated! Have a nice day! \n \n";
				break;
			}
			else if (code == activateCode)
			{
				//callTheCops();
			}
			else
			{
				std::cout << tries << " attempts left to deactivate the alarm! \n";
				tries--;
			}
		}
	}
}
