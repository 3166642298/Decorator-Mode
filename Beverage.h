#pragma once
#ifndef BEVERAGE_H
#define BEVERAGE_H
#include<iostream>
using namespace std;
class Beverage {//���ϻ���
public:
	string description = "��֪������";
	virtual string getDescription();
	virtual double cost();
};
#endif