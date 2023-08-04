#include<iostream>
#include"Beverage.h"
#include"Espresso.h"
#include"HouseBlend.h"
#include"Mocha.h"
#include"Whip.h"
using namespace std;
int main()
{
	Beverage* beverage = new Espresso;
	beverage = new Whip(beverage);
	beverage = new Mocha(beverage);
	cout << beverage->getDescription() << " $ " << beverage->cost() << endl;

	Beverage* beverage1 = new HouseBlend;
	beverage1 = new Mocha(beverage1);
	beverage1 = new Whip(beverage1);
	cout << beverage1->getDescription() << " $ " << beverage1->cost() << endl;
	return 0;
}