#pragma once
#include <string>
class Ingredients
{
	std::string contains;
	int carbs;
	int proteins;
	int fat;
	int salt;

	// TODO include datetime library
	// DateTime expires;
	// DateTime produced;
public:
	Ingredients();
	Ingredients(std::string ingr);
	Ingredients(std::string contains, int carbs, int proteins, int fat, int salt); // + the 2 datetimes in library

	// return serialized object string
	std::string GetInfo();

	// return field
	std::string GetInfo(std::string key);

	// edit field
	void Change(std::string key, std::string value);
	~Ingredients();
};

