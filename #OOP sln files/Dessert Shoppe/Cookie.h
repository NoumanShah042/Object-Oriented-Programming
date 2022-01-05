#ifndef COOKIE_h
#define COOKIE_h

#include"DessertItem.h"

class Cookie:public DessertItem
{
	double number;
	double pricePerDozen;    //   in cents
public:
	Cookie(double num, double price, CString nam);
	double getCost() const override;

};

#endif
