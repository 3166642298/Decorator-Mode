#pragma once
#ifndef MOCHA_H
#define MOCHA_H
#include"CondimentDecorator.h"
class Mocha :public CondimentDecorator {
public:
	Mocha(Beverage* beverage);
	string getDescription() override;
	double cost() override;
};
#endif // !MOCHA_H
