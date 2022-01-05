#ifndef SUV_H
#define SUV_H
#include"Automobile.h"

class SUV :public Automobile
{
	int passsengers;
public:
	SUV();
	SUV(CString SUVMake, int SUVMOdel, int SUVMileage, double SUVPrice, int SUVPassengers);
	int getPassengers();
};

#endif
