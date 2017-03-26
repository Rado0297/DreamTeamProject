#include "stdafx.h"
#include "Ingredients.h"


Ingredients::Ingredients()
{
}

Ingredients::Ingredients(Ingredients & other)
{
	 contains=other.contains;
	 calories=other.calories;
	 carbs=other.carbs;
	 proteins=other.proteins;
	 fat=other.fat;
	 salt=other.salt;
	 sugar=other.sugar;
}


Ingredients::~Ingredients()
{
}
