
#include<iostream>
using namespace std;
#include"Cookie.h"


double Cookie::getCost() const
{
	return number * pricePerDozen; // div by 12
}

Cookie::Cookie(double num, double price, CString nam):DessertItem(nam)
{

	number=num;
	 pricePerDozen= price;
}