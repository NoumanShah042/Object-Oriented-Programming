#include<iostream>
using namespace std;
#include"counter.h"

        //         Counter::


void  Counter::increment()
{
	value++;

}


Counter::Counter(int i) :value(i)
{

}

void Counter::reset()
{
	value = 0;
}
void  Counter::starttAt(int i)
{
	value = i;
}


int Counter::getCounterValue()
{
	return value;
}