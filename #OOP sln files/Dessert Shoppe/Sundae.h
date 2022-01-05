#ifndef SUNDAE_h
#define  SUNDAE_h

#include"IceCream.h"

class Sundae :public IceCream
{
	double costOfTopping;
	//   in cents
public:
	Sundae(double costOfIceCream,double costOfTopping, CString nam);
	double getCost() const override;

};

#endif
