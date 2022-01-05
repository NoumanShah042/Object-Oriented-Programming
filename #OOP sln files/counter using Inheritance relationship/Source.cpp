#include<iostream>
using namespace std;
#include"FBCounter.h"

//          using Inheritace relationship



int main()
{
	FBCounter a;
	//cout<<a.getCounterValue()<<'\n';
	a.increment();
	a.increment();
	a.decrement();
	a.increment();
	cout << a.getCounterValue() << '\n';


	return 0;
}