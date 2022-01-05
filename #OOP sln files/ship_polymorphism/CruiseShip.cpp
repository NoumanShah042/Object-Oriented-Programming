#include<iostream>
#include"CruiseShip.h"
using namespace std;


//      CruiseShip::


CruiseShip::CruiseShip(CString name1, CString year1,int noOfPas):Ship(name1, year1)
{
	MaxNoOFPassengers = noOfPas;
}

void CruiseShip::print()
{
	Ship::print();
	cout << "\nNo. of Passengers:" << MaxNoOFPassengers << endl;
}