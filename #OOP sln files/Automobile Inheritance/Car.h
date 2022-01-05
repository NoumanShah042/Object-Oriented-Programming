
#ifndef CAR_H
#define CAR_H
#include"Automobile.h"

class Car:public Automobile
{

	int doors;

public:
	Car();
	Car(CString carMake, int carModel, int carMileage, double carPrice, int carDoors);
	int getDoors();
	~Car();
	

};


#endif