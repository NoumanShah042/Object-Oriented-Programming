#include<iostream>
#include"Checkout.h"
using namespace std;
//#include"IceCream.h"

//        Checkout::

Checkout::Checkout()
{
	listCapacity = 50;

	for (int i = 0; i < 50; i++)
	{
		list = new DessertItem*[listCapacity];
	}


}

Checkout::~Checkout()
{
	for (int i = 0; i < itemCount; i++)
	{
		delete list[i];
	}
}








double  Checkout::totalTax()
{
	int totalTax = 0;
	for (int i = 0; i < itemCount; i++)
	{
		totalTax= totalTax+ list[itemCount]->getTax();
	}
	return  totalTax;
}


double Checkout::totalCost()
{
	int totalCost = 0;
	for (int i =0; i < itemCount; i++)         // add tax
	{
		totalCost = totalCost + list[itemCount]->getCost();
	}

	return totalCost;
}



void  Checkout::enterItem(const DessertItem & item, int cnt)
{
	for (int i = 0; i < cnt; i++)
	{
		list[itemCount] =  new item;          // dynamic_cast<DessertItem*>(item);
	}
}
void Checkout::clear()
{
	this->~Checkout();

}










