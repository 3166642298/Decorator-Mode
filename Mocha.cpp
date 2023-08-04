#include "Mocha.h"

Mocha::Mocha(Beverage* beverage)
{
	this->beverage = beverage;
}

string Mocha::getDescription()
{
	return beverage->getDescription() + ",Ä¦¿¨";
}

double Mocha::cost()
{
	return beverage->cost()+0.20;
}
