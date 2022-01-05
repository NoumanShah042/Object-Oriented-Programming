#include<iostream>
#include"Automobile.h"
using namespace std;

//                  Automobile::

Automobile::Automobile():make("")
{
	cout << "\nAutomobile::Automobile():make("")\n";
	model = 0;
	mileage = 0;
	price = 0.0;
}


Automobile & Automobile::operator=(const Automobile & ref)
{

	make = ref.make;
	model = ref.model;
	mileage = ref.mileage;
	price = ref.price;

	return *this;
}

void Automobile::display()
{
	cout << "\nAutomobile Make   : ";
	make.display();
	cout << endl;
	cout << "Automobile model  : " << model<<endl;
	cout << "Automobile mileage: " << mileage << endl;
	cout << "Automobile price  : " << price << endl;
}
Automobile::Automobile(const Automobile & ref):make(ref.make)
{
	cout << "\nAutomobile(const Automobile & ref):make(ref.make)\n";
	model=ref.model;
	mileage=ref.mileage;
	price=ref.price;
}
Automobile::~Automobile()
{
	cout << "\nAutomobile::~Automobile()\n";
}

Automobile::Automobile(CString  automake, int autoModel, int autoMileage, double autoPrice) :make(automake)
{
	cout << "\nAutomobile(CString automake, int autoModel, int autoMileage, double autoPrice) :make(automake)   " << "&automake:" << &automake << "  @@@  " << "&make:" << &make;

	model = autoModel;
	mileage = autoMileage;
	price = autoPrice;
}

CString Automobile::getMake() const
{
	return make;
}
int Automobile::getModel() const
{
	return model;
}
int Automobile::getMileage()const
{
	return mileage;
}
double Automobile::getPrice() const
{
	return price;
}
