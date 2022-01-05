#ifndef COUNTER_H
#define COUNTER_H


class Counter
{

private:
	int value;
public:
	Counter(int i = 0);
	void increment();
	void reset();
	void starttAt(int i);
	int getCounterValue();

};





#endif
