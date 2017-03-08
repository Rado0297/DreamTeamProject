// shOOP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Shop.h"
#include <iostream>
#include <string>

int main()
{

	Shop *shop = new Shop();
	std::string command;
	std::cout << "please enter command: ";
	do
	{
		char temp[50];
		std::cin.getline(temp, 50);
		command = std::string(temp);
		std::string command1, command2, command3, command4;
		std::string *currentlyWritingTo = &command1;
		for (unsigned int i = 0; i<command.length(); i++)
		{
			if (command[i] == ' ')
			{
				// hande up to 4 options
				if (currentlyWritingTo == &command1) currentlyWritingTo = &command2;
				else if (currentlyWritingTo == &command2) currentlyWritingTo = &command3;
				else if (currentlyWritingTo == &command3) currentlyWritingTo = &command4;
				else *currentlyWritingTo += command[i];
			}
			else *currentlyWritingTo += command[i];
		}
		if (command1 == "login")
		{
			//TO DO
			char username[50], password[50];
			std::cout << "Please enter username: ";
			std::cin >> username;
			std::cout << "Please enter password: ";
			std::cin >> password;
			/*int status = shop->Login(username, password);
			if (status == 0) std::cout << "logged in successfully";
			if (status == -1) std::cout << "wrong user name or password";*/
		}
		else if (command1 == "logout")
		{
			/*TO DO
			shop->Logout();*/
		}
		else if (command1 == "books")
		{
			if (command2 == "add")
			{
				//TO DO

			}
			else if (command2 == "remove")
			{
				//TO DO
				char* tempEnter = new char[50];

			}
			else if (command2 == "all")
			{
				//TO DO
			}
			else if (command2 == "info")
			{
				//TO DO
				char temp[50];
				strncpy_s(temp, command3.c_str(), 50);
				try
				{
					// print 
				}
				catch (int e)
				{
					if (e == -1) std::cout << "No book was found with ISBN " << temp;
					else std::cout << "An error occurred";
				}
			}
			else if (command2 == "find")
			{
				//TO DO
				/*int booksFound = 0;
				Book *books = new Book[50];
				char temp[50];
				char temp2[50];
				books = shop->FindBookBy(strncpy(temp, command3.c_str(), 50), strncpy(temp2, command4.c_str(), 50), &booksFound);
				cout << "amount of books found: " << booksFound << endl;
				for (int i = 0; i<booksFound; i++)
				{
					books[i].PrintBook();
					if (i != 0) std::cout << endl << "----" << endl;
				}*/
			}
			else std::cout << "unknown command. ";
		}
		else if (command1 == "exit")
		{
			std::cout << "see you soon :)";
			break;
		}
		else std::cout << "unknown command. ";

		std::cout << std::endl << std::endl << "please enter command: ";
	} while (true);
	return 0;
}

