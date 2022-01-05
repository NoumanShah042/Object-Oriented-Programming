#include<iostream>
using namespace std;
#include"DessertItem.h"
#include"DessertShoppe.h"   

//       DessertItem::

double DessertItem::getTax() const
{
	DessertShoppe a;
	return a.getTexRate();
}

CString DessertItem::getName() const
{
	return name;
}

DessertItem::DessertItem(CString a): name(a)
{

}