#ifndef CARGO_SHIP_H
#define CARGO_SHIP_H
#include"Ship.h"

class CargoShip :public Ship
{
	int tonnage;
public:

	CargoShip(CString name1, CString year1, int tonnage1);
	void print();
};


#endif