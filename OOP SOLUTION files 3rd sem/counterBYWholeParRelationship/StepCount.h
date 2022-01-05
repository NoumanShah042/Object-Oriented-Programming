#ifndef STEP_COUNT_H
#define STEP_COUNT_H
#include"counter.h"
class StepCount :public  Counter
{
	int step;
public:

	StepCount(int value = 0, int step = 1);

	void increment();
	void decrement();

	int getSteps();


};





#endif
