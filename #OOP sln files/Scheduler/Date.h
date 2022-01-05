#ifndef DATE_H
#define DATE_H
#include"CString.h"

class Date
{
	int day;
	int month;
	int year;
	static const int dayInMonth[13] ;
	
	//static const int x = 800;
	

	

public:
	bool isLeapYear()const;
	void getDateInFormat1() const;
	CString getDateInFormat2() const;
	CString getDateInFormat3() const;
	const char * retString(int a) const;	
	Date();
	Date(int a, int b, int c);
	void setDate(int d, int m, int y);
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

	void incDay(int a = 1);
	void incMonth(int a = 1);
	void incYear(int a = 1);




};








#endif