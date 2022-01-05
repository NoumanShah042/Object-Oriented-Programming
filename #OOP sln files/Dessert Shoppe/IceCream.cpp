
#include<iostream>
using namespace std;
#include"IceCream.h"

//      IceCream::

IceCream::IceCream(double cst, CString nam):DessertItem(nam)
{
	cost = cst;
}

double  IceCream::getCost() const
{
	return cost;
}










