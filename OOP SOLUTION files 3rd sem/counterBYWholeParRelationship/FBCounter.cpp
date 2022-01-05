#include<iostream>
using namespace std;
#include"FBCounter.h"


//    FBCounter::


void FBCounter::increment()
{
	a.increment();
}

void FBCounter::reset()
{
	a.reset();
}

void FBCounter::starttAt(int i)
{
	a.starttAt(i);
}

FBCounter::FBCounter(int i):a(i)
{

}

int FBCounter::getCounterValue()
{
	return a.getCounterValue();
}

void FBCounter::decrement()
{
	int b = a.getCounterValue();
	b = b - 1;
	a.starttAt(b);
}