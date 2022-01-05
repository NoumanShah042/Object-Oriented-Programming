
#ifndef BASE_H
#define BASE_H

#include <iostream>
using namespace std;


// class Base1 definition
class Base
{
protected: // accessible to derived classes
	int num;// inherited by derived class

public:
	Base(int a)
	{
		num = a;
		std::cout << "\nBase()   "<<num<<"\n";
	} // end Base1 constructor

	int getData() const
	{
		return num;
	} // end function getData
}; // end class Base1

#endif // BASE_H
