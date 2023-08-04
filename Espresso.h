#pragma once
#ifndef ESPRESSO_H
#define ESPRESSO_H
#include"Beverage.h"
class Espresso :public Beverage {
public:
	Espresso();
	string getDescription() override;
	double cost() override;
};
#endif // !ESPRESSO_H
