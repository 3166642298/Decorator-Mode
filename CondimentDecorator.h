#pragma once
#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H
#include"Beverage.h"
class CondimentDecorator :public Beverage {
public:
	Beverage* beverage;
};
#endif
