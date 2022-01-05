#include<iostream>
using namespace std; 
#include"Truck.h"

int main()
{

	Truck a("BMW", 2008, 5000, 500000,"Single");
	Truck b("Mercedes", 2005, 7000, 700000, "double");



	b = a;

	b.Truck::display();
	cout << "nouman";
	//Truck b(a);
//	cout << "\nnouan\n";
	//b.displayTruck();


	/*CString a("hello");
	CString b = "hello";*/



	///*cout << "start" << endl;
	/*Automobile a("BMW", 2008, 5000, 500000);
	Automobile b(a);
	b.display();*/
	//cout << "\nnouman"<<endl;
	return 0;
}









