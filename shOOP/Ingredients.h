#pragma once
#include <string>
class Ingredients
{
	std::string contains;
	int calories;
	int carbs;
	int proteins;
	int fat;
	int salt;
	std::pair<int, int> sugar;//first-all sugar, second-added sugar


public:
	Ingredients();
	Ingredients(Ingredients &other);
	~Ingredients();
};

