#include<iostream>
#include"CargoShip.h"
using namespace std;


//      CargoShip::


CargoShip::CargoShip(CString name1, CString year1, int tonnage1) :Ship(name1, year1)
{
	tonnage = tonnage1;
}

void  CargoShip::print()
{
	Ship::print();
	cout << "\nCapacity in Tonnage:" << tonnage << endl;
}