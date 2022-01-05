#include"WaterLogList.h"
#include<iostream>
#include<ctime>
using namespace std;

WaterLogList::WaterLogList()
{
	waterLogArray = new WaterLog  * [10];
	waterLogCount = 0;
	waterLogCapacity = 10;
}

WaterLogList::~WaterLogList()
{
	for (int i = 0; i < 10; i++)
	{
		
		  delete   waterLogArray[i];
		  waterLogArray[i] = nullptr;
	}

	delete waterLogArray;
	waterLogArray = nullptr;
}

void WaterLogList::logWater(float a)
{
		waterLogArray[waterLogCount] = new WaterLog(a);

		waterLogCount = waterLogCount + 1;
}


void WaterLogList::logWater(float a ,Date d,Time t)
{
	waterLogArray[waterLogCount] = new WaterLog(a,d,t);

	waterLogCount = waterLogCount + 1;
}

WaterUnits  WaterLogList::getdefaultWaterUnis()
{
	return defaultWaterUnits;
}
void  WaterLogList::changeDefaultWaterUnits(WaterUnits c)
{

	defaultWaterUnits = c;

	if (c == LITRE)
	{
		for (int i = 0; i < waterLogCount; i++)
		{
			waterLogArray[i]->setQuantity(waterLogArray[i]->getQuantity() * 1000);
		}
	}

	else
	{
		for (int i = 0; i < waterLogCount; i++)
		{
			waterLogArray[i]->setQuantity(waterLogArray[i]->getQuantity() / 1000);
		}
	}

}

float WaterLogList::totalWaterIntakeToday() const
{
	////////////(curTime.tm_mday, curTime.tm_mon + 1, curTime.tm_year + 1900);
	for (int i = 0; i < waterLogCount; i++)
	{
		float totalIntake = 0;
		time_t t = time(NULL);
		tm curTime = *localtime(&t);
		Date a = waterLogArray[i]->getWaterDate;

		if (a.getday() == curTime.tm_mday && a.getMonth() == curTime.tm_mon + 1 && a.getYear() == curTime.tm_year + 1900)
		{
			totalIntake = waterLogArray[i]->getQuantity() + totalIntake;
		}
	}

}

float WaterLogList::totalWaterIntakeCurrentMonth() const
{
	////////////(curTime.tm_mday, curTime.tm_mon + 1, curTime.tm_year + 1900);
	for (int i = 0; i < waterLogCount; i++)
	{
		float totalIntake = 0;
		time_t t = time(NULL);
		tm curTime = *localtime(&t);
		Date a = waterLogArray[i]->getWaterDate;

		if ( a.getMonth() == curTime.tm_mon + 1 )
		{
			totalIntake = waterLogArray[i]->getQuantity()+ totalIntake;
		}
	}
}



