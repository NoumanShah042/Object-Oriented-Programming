
#ifndef DESSERT_ITEM_H
#define DESSERT_ITEM_H
#include"CString.h"

class DessertItem
{
	CString  name;
public:
	DessertItem(CString = "");
	CString getName() const; 

	virtual double getCost() const = 0;
	virtual double getTax() const;

};










#endif

