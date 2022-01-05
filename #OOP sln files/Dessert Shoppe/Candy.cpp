#include<iostream>
using namespace std;
#include"Candy.h"



//     Candy::


double Candy::getCost() const 
{
	return weight * pricePerPound;
}

Candy::Candy(double wigh, double price, CString nam):DessertItem(nam)
{
	 weight= wigh;
	pricePerPound= price;
}