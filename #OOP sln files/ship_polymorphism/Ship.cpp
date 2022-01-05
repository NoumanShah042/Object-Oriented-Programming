#include<iostream>
#include"Ship.h"
using namespace std;


Ship::Ship(CString name1, CString year1):name(name1), builtYear(year1)
{

}

void Ship::print()
{
	 cout << "\nShip name:";
	 name.display();
	 cout << "\nBuilt year:";
	 builtYear.display();
}