
#include<iostream>
#include"WaterLog.h"
#include<ctime>
using namespace std;


//       WaterLog::


WaterLog::WaterLog(float a )
{
	time_t t = time(NULL);
	tm curTime = * localtime(&t);

	waterDate.setDate(curTime.tm_mday, curTime.tm_mon + 1, curTime.tm_year + 1900);
	waterTime.setTime(curTime.tm_hour, curTime.tm_hour, curTime.tm_sec);

	quantity = a;
	
}


WaterLog::WaterLog(float a, Date d, Time t)
{
	quantity = a;
	waterDate = d;
	waterTime = t;

}

void WaterLog::setQuantity(float a)
{
	quantity = a;
}
void WaterLog::setWaterTime(Time t)
{
	waterTime = t;

}
void WaterLog::setWaterDate(Date d)
{
	waterDate = d;
}
float  WaterLog::getQuantity()
{
	return quantity;

}
Date WaterLog::getWaterDate()
{
	return waterDate;
}
Time WaterLog::getWaterTime()
{
	return waterTime;
}

