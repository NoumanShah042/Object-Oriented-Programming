#include<iostream>
#include"Car.h"
using namespace std;

//  Car::

Car::Car() :Automobile()
{
	cout << "\nCar::Car():Automobile()\n";
	doors = 0;
	
}
Car::Car(CString carMake, int carModel, int carMileage, double carPrice, int carDoors): Automobile(carMake, carModel, carMileage, carPrice)
{
	cout << "\nCar::Car(CString carMake, int carModel, int carMileage, double carPrice, int carDoors):  "<<&carMake<<'\n';
	doors = carDoors;
}
Car::~Car()
{
	std::cout << "\n~Car()\n";
}

int  Car::getDoors()
{
	return doors;
}