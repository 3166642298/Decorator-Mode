#pragma once
#ifndef BEVERAGE_H
#define BEVERAGE_H
#include<iostream>
using namespace std;
class Beverage {//饮料基类
public:
	string description = "不知名饮料";
	virtual string getDescription();
	virtual double cost();
};
#endif