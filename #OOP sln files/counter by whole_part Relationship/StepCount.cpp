#include<iostream>
using namespace std;
#include"StepCount.h"



StepCount::StepCount(int value,int step):Counter(value),step(step)
{

}

void StepCount::increment()
{
	for (int i = 0; i <step; i++)
	{
		Counter::increment();
	}
}


int StepCount::getSteps()
{
	return step;
}
void StepCount::decrement()
{
	for(int i = 0; i < step; i++)
	{
		int b = getCounterValue();
		b = b - 1;
		starttAt(b);
	}
	
}