#ifndef CRUISE_SHIP_H
#define CRUISE_SHIP_H
#include"Ship.h"

class CruiseShip :public Ship
{
	int MaxNoOFPassengers;
public:

	CruiseShip(CString name1, CString year1,int noOfPas);
	void print();
};


#endif