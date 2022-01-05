#include<iostream>
#include"Date.h"
#include"CString.h"
using namespace std;

int main()
{


	Date a(29,2,2000);
	a.displayDate();
	cout << endl;
	//cout<<a.isLeapYear()<<endl;
	a.printFormat3();
	cout << endl;
	cout << char(48);
	
	//cout << a.retString(12);
	//a.displayDate();
	//cout << a.getday()<<" " << a.getMonth() << " "<< a.getYear()<<endl;
//	a.setday(12);
	//a.displayDate(); cout << endl;
	//cout<<a.getTotaldaysInMonth();
//	a.printFormat2();
	return 0;
	
}