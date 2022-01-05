#include<iostream>
#include"CargoShip.h"
#include"BattleShip.h"
#include"CruiseShip.h"
using namespace std;

int main()
{
	Ship**p = new Ship*[5];
	cout << "\nbraek\n";
	p[0] = new CargoShip("Pak","1960",500);
	p[1]= new CruiseShip("Travel", "2019", 100);
	p[2] = new BattleShip("PakBahria", "2010", 1000);
	p[3] = new Ship("hwai", "2020");

	p[0]->print();
	p[1]->print();
	p[2]->print();
	p[3]->print();
	
	return 0;
}