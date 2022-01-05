#include<iostream>
#include"Time.h"
using namespace std;



Time::Time()
{
	hour = 1;
	minute = 0;
	second = 0;
	cout << "default"<<'\n';
}

Time::Time(const Time & ref)
{
	cout << "Time(const Time & ref)";
}

Time::Time(int h, int m, int s)
{
	cout << "parameterized" << endl;
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
		second = 0;
}
void Time::setHour(int h)
{
	if (h >= 0 && h <= 23)
		hour = h;
}
void Time::setMinute(int m)
{
	if (m >= 0 && m <= 59)
		minute = m;
}
void Time::setSecond(int s)
{
	if (s >= 0 && s <= 59)
		second = s;
}
void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

int Time::getHour()
{
	return hour;
}
int Time::getMinute()
{
	return minute;
}
int Time::getSecond()
{
	return second;
}
void Time::printTwentyFourHourFormat()
{
	cout << hour << ":" << minute << ":" << second;
}
void Time::printTwelveHourFormat()
{
	int rem = hour % 12;
	if (rem == 0)
	{
		cout << hour << ":" << minute << ":" << second;
	}
	else
	{
		cout << rem << ":" << minute << ":" << second;

	}

}