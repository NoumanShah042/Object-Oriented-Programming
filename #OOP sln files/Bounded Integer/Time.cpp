#include<iostream>
#include"Time.h"
using namespace std;



Time::Time(int h, int m, int s):hour(1,12,0),minute(1,50,0),second(1,59,0)
{

	setTime(h, m, s);


	/*cout << "parameterized" << endl;
	if (h >= 0 && h <= 23)
		hour = h;
	else
		hour = 12;
	if (m >= 0 && m <= 59)
		minute = m;
	else
		minute = 0;
	if (s >= 0 && s <= 59)
		second = s;
	else
		second = 0;*/
}
void Time::setHour(int h)
{
		hour.setValue(h)  ;
}
void Time::setMinute(int m)
{
	
	minute.setValue(m);
}
void Time::setSecond(int s)
{
	second.setValue(s);
}
void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

int Time::getHour()
{
	return hour.getValue();
}
int Time::getMinute()
{
	return minute.getValue();
}
int Time::getSecond()
{
	return second.getValue();
}
void Time::printTwentyFourHourFormat()
{
	cout << hour.getValue() << ":" << minute.getValue() << ":" << second.getValue();
}
void Time::printTwelveHourFormat()
{
	int rem = hour.getValue() % 12;
	if (rem == 0)
	{
		cout << hour.getValue() << ":" << minute.getValue() << ":" << second.getValue();
	}
	else
	{
		cout << rem << ":" << minute.getValue() << ":" << second.getValue();

	}

}