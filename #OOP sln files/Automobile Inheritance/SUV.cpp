#include<iostream>
#include"SUV.h"
using namespace std;

//    SUV::


SUV::SUV():Automobile()
{
	passsengers = 0;
	
}
SUV::SUV(CString SUVMake, int SUVMOdel, int SUVMileage, double SUVPrice, int SUVPassengers):Automobile(SUVMake, SUVMOdel, SUVMileage, SUVPrice)
{

	passsengers = SUVPassengers;
}
int SUV::getPassengers()
{
	return passsengers;
}




