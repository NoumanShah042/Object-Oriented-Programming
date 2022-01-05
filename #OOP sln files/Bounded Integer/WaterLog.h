
#ifndef WATERLOG_H
#define WATERLOG_H
#include "Date.h"
#include"Time.h"

class WaterLog
{

	float quantity;
	Date waterDate;
	Time waterTime;


public:
	WaterLog(float a = 0.5);
	WaterLog(float a, Date d, Time t);
	void setQuantity(float a);
	void setWaterTime(Time);
	void setWaterDate(Date);
	float getQuantity();
	Date getWaterDate();
	Time getWaterTime();
	
};










#endif