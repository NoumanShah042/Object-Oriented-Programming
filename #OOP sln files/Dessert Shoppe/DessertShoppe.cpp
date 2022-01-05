#include<iostream>
using namespace std;
#include"DessertShoppe.h"

//  DessertShoppe::

double DessertShoppe::_TAX_Rate;
const CString DessertShoppe::_STORE_NAME(" Dessert Shoppe");
const int DessertShoppe::_MAX_ITEM_NAME_WIDTH=100;


double DessertShoppe::getTexRate()
{
	return _TAX_Rate;
}

void  DessertShoppe::setTaxRate(int a)
{
	_TAX_Rate = a;

}


 CString  DessertShoppe::centsToDollars(int cents)
{
	 CString s = "";
	 if (cents < 0)
	 {
		 s += "-";
		 cents *= -1;
	 }
	 int dollars = cents / 100;
	 cents = cents % 100;
	 if (dollars > 0)
		 s += dollars;
	 s += ".";
	 if (cents < 10)
		 s +="0";
	 s += cents;
	 return s;
}