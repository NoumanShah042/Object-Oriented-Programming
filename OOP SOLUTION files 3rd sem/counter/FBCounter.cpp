#include<iostream>
using namespace std;
#include"FBCounter.h"






void FBCounter::decrement()
{
	int a = getCounterValue();
	a = a - 1;
	starttAt(a);
}