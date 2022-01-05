#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H
#include"CString.h"


class Automobile
{
	CString make;
	int model;
	int mileage;
	double price;
public:
	Automobile();
	Automobile(const Automobile & ref);
	Automobile & operator=(const Automobile & ref);

	void display();
	Automobile(CString  automake, int autoModel, int autoMileage, double autoPrice);
	CString getMake() const;
	int getModel() const;
	int getMileage()const;
	double getPrice() const;
	~Automobile();
};




#endif