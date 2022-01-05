#ifndef TRUCK_H
#define TRUCK_H
#include"Automobile.h"


class Truck :public Automobile
{
	CString driveType;

public:
	Truck();
	Truck(const Truck & ref);
	//Truck(const Truck & ref);
	Truck & operator=(const Truck & ref);
	void display();
	Truck(CString truckMake ,int truckModel,int truckMileage,int truckPrice,CString truckDriveType );
	CString getDriveType();
	//~Truck();
};





#endif
