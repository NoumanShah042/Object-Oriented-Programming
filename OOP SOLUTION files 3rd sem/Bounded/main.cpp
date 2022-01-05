#include<iostream>
#include"Bounded.h"
#include"WaterLogList.h"
using namespace std;


int main()
{
	WaterLogList a;
	a.logWater(1);
	a.logWater(1);
	a.logWater(1);
	a.logWater(1);
	a.logWater(1);
	cout<<a.totalWaterIntakeToday();
	/*BoundedInteger a(5,12);

	for (int i = -10; i < 101; i++)
	{
		cout << i << "\t:\t";
		cout << a.getValue() << '\t';
		a.decrement(i);
		cout << a.getValue() << '\n';
		a.setValue(a.getLowerBound());
	}*/

	/*
	cout<<a.getLowerBound()<<endl;
	cout << a.getUpperBound() << endl;
	cout << a.getValue();

	//a.increment(11);
	a.decrement(9);
	cout << endl << a.getValue();*/
	return 0;
}
