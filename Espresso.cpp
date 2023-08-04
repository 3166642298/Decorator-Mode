#include "Espresso.h"

Espresso::Espresso()
{
	this->description = "ÕôÁó¿§·È";
}

string Espresso::getDescription()
{
	return this->description;
}

double Espresso::cost()
{
	return 1.99;
}
