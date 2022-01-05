#include<iostream>
using namespace std;
#include"Sundae.h"


//        Sundae::
//    IceCream(double cst, CString nam);

Sundae::Sundae(double costOfIceCream, double costOfTopping, CString nam): IceCream(costOfIceCream, nam)
{
	this->costOfTopping = costOfTopping;
}

double Sundae::getCost() const
{
	return (IceCream::getCost() + costOfTopping);
}








