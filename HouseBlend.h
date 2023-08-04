#pragma once
#ifndef HOUSEBLEND
#define HOUSEBLEND
#include"Beverage.h"
class HouseBlend :public Beverage {
public:
	HouseBlend();
	double cost() override;
};
#endif // !HOUSEBLEND
