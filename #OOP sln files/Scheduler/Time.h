#ifndef TIME_H
#define TIME_H


class Time
{
	int hour;
	int minute;
	int second;

public:
	Time();  //  default constructor
	Time(int h, int m, int s);
	void setHour(int h);
	void setMinute(int m);
	void setSecond(int s);
	void setTime(int h, int m, int s);
	int getHour();
	int getMinute();
	int getSecond();
	void printTwentyFourHourFormat();
	void printTwelveHourFormat();

	///*void incSec(int = 1);  
	// increment in the second of the calling time object default increment is 1 
	// void incMin( int = 1 );  
	//  increment in the minute of the calling time object default increment is 1 
	// void incHour( int = 1 );  
	//  increme*/nt in the hour of the calling time object default increment is 1 

};












#endif
