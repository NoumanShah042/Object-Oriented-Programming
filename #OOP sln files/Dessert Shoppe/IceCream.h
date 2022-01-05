#ifndef ICE_CREAM_h
#define ICE_CREAM_h

#include"DessertItem.h"

class IceCream :public DessertItem
{
	double cost;
	    //   in cents
public:
	IceCream(double cst, CString nam);
	double getCost() const override;

};

#endif
