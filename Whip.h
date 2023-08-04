#pragma once
#ifndef WHIP_H
#define WHIP_H
#include"CondimentDecorator.h"
class Whip :public CondimentDecorator {
public:
	Whip(Beverage* beverage);
	string getDescription() override;
	double cost() override;
};
#endif // !WHIP_H
