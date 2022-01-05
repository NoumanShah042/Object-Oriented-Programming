#ifndef DATE_H
#define DATE_H
#include"CString.h"
#include"Bounded.h"
class Date
{

	BoundedInteger day;
	BoundedInteger month;
	BoundedInteger year;
	static const int dayInMonth[13] ;
	
	//static const int x = 800;
	bool isLeapYear()const;

	

public:
		
	Date();
	Date(int d, int m, int y);
	void setDate(int a, int b, int c);
	void setday(int a);
	void setMonth(int b);
	void setYear(int c);
	int  getday() const;
	int  getMonth() const ;
	int getYear() const ;
	void displayDate();
	void printFormat1() const;
	void printFormat2() const;
	void printFormat3() const;
	int getTotaldaysInMonth() const;
	void decDay();
	void decMonth();
	void decYear();
	void incDay(int i = 1);
	void incMonth(int a = 1);
	void incYear(int i = 0);

	const char * retString(int a) const;
};








#endif