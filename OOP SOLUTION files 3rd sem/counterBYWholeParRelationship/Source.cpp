#include<iostream>
using namespace std;
#include"StepCount.h"


//    using Wholepart Relationship


int main()
{
	StepCount a(1, 3);
	a.increment();
	cout << a.getCounterValue() << '\n';
	a.decrement();
	cout << a.getCounterValue() << '\n';


	/*FBCounter a(40);
	
	a.increment();
	cout << a.getCounterValue() << '\n';
	a.starttAt(10);
	a.decrement();
	cout << a.getCounterValue() << '\n';*/


	return 0;
}