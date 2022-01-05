#ifndef CHECK_OUT_H
#define CHECK_OUT_H
#include"DessertItem.h"
#include"Array.h"
class Checkout
{
	DessertItem ** list;
	Array countPerItem;
	int itemCount= 0;
	int listCapacity;
public:
	Checkout();
	void clear();
	~Checkout();
	void enterItem(const DessertItem& item,int cnt=1);
	double totalCost();
	double totalTax();
};

















#endif