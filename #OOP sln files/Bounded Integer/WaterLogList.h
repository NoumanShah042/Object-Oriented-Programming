
#ifndef WATERLOGLIST_H
#define WATERLOGLIST_H
#include"WaterLog.h"

enum WaterUnits { MILLI_LITRE, LITRE };

class WaterLogList
{
	WaterLog  ** waterLogArray;
	WaterUnits defaultWaterUnits = MILLI_LITRE;
	int waterLogCount;
	int waterLogCapacity;
	//void resize();
public:
	WaterLogList();
	~WaterLogList();
	void logWater(float);
	void logWater(float a, Date d, Time t);
	WaterUnits getdefaultWaterUnis();
	void changeDefaultWaterUnits(WaterUnits);
	float totalWaterIntakeToday() const;
	float totalWaterIntakeCurrentMonth() const;

};








#endif
