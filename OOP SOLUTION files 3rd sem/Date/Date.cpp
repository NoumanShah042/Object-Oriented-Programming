#include<iostream>
#include"Date.h"
#include"CString.h"
using namespace std;

const int Date::dayInMonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
Date::Date()
{
	year = 1900;
	month = 1;
	day = 1;
}

void Date::getDateInFormat1() const
{
	
}

bool Date::isLeapYear()const
{
	return   (!(year % 4) && (year % 100)) || !(year % 400)  ;
		
		     
}

Date::Date(int a, int b, int c)
{
	if (c >= 1900 && c <= 2100)
	{
		year = c;
	}
	else
	{
		year = 1900;
	}

	if (b >= 1 && b <= 12)
	{

		month = b;
	}
	else
	{
		month = 1;
	}

	bool flag = isLeapYear();
	
	if (flag  && month==2 )
	{
		
		if (a >= 1 && a <= 29)             
		{
			
			day = a;
		}
	}
	else if (a >= 1 && a <= dayInMonth[month])              
	{
		day = a;
	}
	else
	{
		day = 1;
	}

}

void Date::displayDate()
{
	cout << day <<" "<< month <<" "<< year<<endl;

}

void Date::printFormat1() const
{
	cout << day<<"/" << month << "/" << year;
}

void Date::printFormat2() const
{
	cout << retString(month) << " " << day <<" , "<< year;
	
}

void Date::printFormat3() const
{

	cout << day <<" "  <<retString(month) << " " << year;
}

int Date::getTotaldaysInMonth() const
{
	return dayInMonth[month];
}

int  Date::getday() const
{
	return day;
}
int  Date::getMonth() const
{
	return month;
}
int Date::getYear() const
{
	return year;
}

void Date::setDate(int a, int b, int c)
{

	if (c >= 1900 && c <= 2100)
	{
		year = c;
	}
	else
	{
		year = 1900;
	}

	if (b >= 1 && b <= 12)
	{

		month = b;
	}
	else
	{
		month = 1;
	}

	bool flag = isLeapYear();

	if (flag  && month == 2)
	{

		if (a >= 1 && a <= 29)
		{

			day = a;
		}
	}
	else if (a >= 1 && a <= dayInMonth[month])
	{
		day = a;
	}
	else
	{
		day = 1;
	}

}

void Date::setday(int a)
{
	/*if (a >= 1 && a <= dayInMonth[getMonth()])
	{
		day = a;
	}
	else
	{
		day = 0;
	}*/
	
	bool flag = isLeapYear();

	if (flag  && month == 2)
	{

		if (a >= 1 && a <= 29)
		{

			day = a;
		}
		else 
		{
			day = 1;
		}
	}
	else if (a >= 1 && a <= dayInMonth[month])
	{
		day = a;
	}
	else
	{
		day = 1;
	}
}
void Date::setMonth(int b)
{
	if (b >= 1 && b <= 12)
	{

		month = b;
	}
	else
	{
		month = 1;
	}
}
void Date::setYear(int c)
{
	if (c >= 1900 && c <= 2100)
	{
		year = c;
	}
	else
	{
		year = 1900;
	}
}





const char * Date::retString(int a) const
{

	if (a == 1)
	{
		return "january";        //january","February","March","April","May","June","July","August","September","October","November","December"
    }
	else if(a==2)
	{
		return "February";
	}

	else if (a == 3)
	{
		return "March";
	}
	else if (a == 4)
	{
		return "April";
	}
	else if (a == 5)
	{
		return  "May";
	}
	else if (a == 6)
	{
		return  "June";
	}
	else if (a == 7)
	{
		return  "july";
	}
	
	if (a == 8)
	{
		return "August";
	}
	else if (a == 9)
	{
		return  "September";         //january","February","March","April","May","June","July","August","September","October","November","December"
	}

	else if (a == 10)
	{
		return  "October";
	}
	else if (a == 11)
	{
		return  "November";
	}
	else if (a == 12)
	{
		return  "December";
	}
	




	//const char ** p = new const char *[13];


	//for (int i = 0; i < 13; i++)
	//{
	//	p[i] = new const char[15];
	//}
	////const  char * dayName[13] = { "ahjh","january","February","March","April","May","June","July","August","September","October","November","December" };

	//p[0] = nullptr;
	//p[1] = "january";
	//p[2] = "February";
	//p[3] = "March";
	//p[4] = "April";
	//p[5] = "May";
	//p[6] = "June";
	//p[7] = "July";
	//p[8] = "August";
	//p[9] = "September";
	//p[10] = "October";
	//p[11] = "November";
	//p[12] = "December";

	

}







