#ifndef BATTLE_SHIP_H
#define BATTLE_SHIP_H
#include"Ship.h"

class BattleShip :public Ship
{
	int totalNoOFMissiles;
public:

	BattleShip(CString name1, CString year1, int totalNoOFMissiles1);
	void print();
};


#endif