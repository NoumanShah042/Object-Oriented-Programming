#include<iostream>
#include"BattleShip.h"
using namespace std;


//      BattleShip::


BattleShip::BattleShip(CString name1, CString year1, int totalNoOFMissiles1) :Ship(name1, year1)
{
	totalNoOFMissiles = totalNoOFMissiles1;
}

void BattleShip::print()
{
	Ship::print();
	cout << "\nTotal No. OF Missiles:" << totalNoOFMissiles << endl;
}