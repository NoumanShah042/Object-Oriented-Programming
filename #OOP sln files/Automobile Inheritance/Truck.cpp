#include<iostream>
#include"Truck.h"
using namespace std;
   // Truck::
Truck::Truck():driveType(""),Automobile()
{

}

//
//Truck::~Truck()
//{
//	cout << "\nTruck::~Truck()\n";
//}
//Automobile(CString  automake, int autoModel, int autoMileage, double autoPrice);
	
void Truck::display()
{
	Automobile::display();
	cout << "Truck Drive Type  : ";
	driveType.display();
	cout << endl;
}



Truck::Truck(CString truckMake, int truckModel, int truckMileage, int truckPrice,CString truckDriveType)
	              : driveType(truckDriveType),Automobile(truckMake, truckModel, truckMileage, truckPrice)
{
	cout <<"\nin Truck parametrized constructor######:                "<< "&truckDriveType  :"<<&truckDriveType<<"  @@@@@@@@@@    " << "&truckMake :" << &truckMake << "  @@@@@@@@@@   " << "&driveType  :" << &driveType<<endl;
}



Truck & Truck::operator=(const Truck & ref)     // copy assignment operator
{
	

	driveType = ref.driveType;
	

   Automobile::operator=(ref);
	return *this;
}

Truck::Truck(const Truck & ref):driveType(ref.driveType),Automobile(ref)
{
	cout << "\nTruck(const Truck & ref):driveType(ref.driveType),Automobile(ref)\n";
}

CString Truck::getDriveType()  
{
return driveType;
}

