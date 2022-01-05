#include<iostream>
#include"Bounded.h"
using namespace std;

//                    BoundedInteger::

BoundedInteger::BoundedInteger()
{
	lowerBound = INT_MIN;
	upperBound = INT_MAX;
	value = lowerBound;
}
bool BoundedInteger::isValidBound(int lb, int ub)
{
	return (lb <= ub);
	
}

BoundedInteger::BoundedInteger(int lb, int ub)
{
	if (isValidBound(lb, ub))
	{
		lowerBound = lb;
		upperBound = ub;
		value = lowerBound;

	}
	else
	{
		lowerBound = INT_MIN;
		upperBound = INT_MAX;
		value = lowerBound;
	}

}
BoundedInteger::BoundedInteger(int lb, int ub, int val)
{
	if (isValidBound(lb, ub))
	{
		lowerBound = lb;
		upperBound = ub;
		if(isValidValue(val))
		{
			value = val;
		}
		else
		{
			value = lowerBound;
		}
		

	}
	else
	{
		lowerBound = INT_MIN;
		upperBound = INT_MAX;
		value = lowerBound;
	}
}
void BoundedInteger::setValue(int val)
{
	if (isValidValue(val))
	{
		value = val;
	}
	//exit(0);

}
bool BoundedInteger::isValidValue(int val)
{
	return (val >= lowerBound && val <= upperBound);
}

int BoundedInteger::getValue() const
{
	return value;
}
int  BoundedInteger::getLowerBound()
{
	return lowerBound;

}
int BoundedInteger::getUpperBound()
{
	return upperBound;
}



void  BoundedInteger::increment(int inc )
{

	int a = value + inc;

	if ((value + inc) > upperBound)
	{
		
		
		a = a - upperBound;
		value = a + lowerBound - 1;

		if ( value > upperBound)
		{
			int a = value % upperBound;
			value = lowerBound + a -1;

		}
		return;
	}

	value = a;

}

void BoundedInteger::decrement(int dec)
{
	int a = value - dec;    //5-1=4

	if ((value - dec) < lowerBound)
	{
		a = lowerBound - a;      //a=1
		value = upperBound - a + 1;

		if (value < lowerBound)
		{
			int a = lowerBound - value;

			value = upperBound - a + 1;
		}
		//cout <<endl<< a<<endl;
		
		return;

	}

	value = a;

}

