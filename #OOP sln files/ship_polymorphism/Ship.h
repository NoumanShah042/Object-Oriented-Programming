#ifndef SHIP_H
#define SHIP_H
#include"CString.h"

class Ship
{
	CString name;
	CString builtYear;
public:
	Ship(CString name1, CString year1);
	virtual void print();
};



#endif