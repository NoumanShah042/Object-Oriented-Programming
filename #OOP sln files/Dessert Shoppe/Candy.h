#ifndef CANDY_H
#define CANDY_H
#include"DessertItem.h"

class Candy :public DessertItem
{
	double weight;
	double pricePerPound ;    //   in cents

public:
	Candy(double wigh, double price, CString nam);
	double getCost() const override;
};

#endif
