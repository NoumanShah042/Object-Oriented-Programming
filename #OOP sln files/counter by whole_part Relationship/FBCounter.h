#ifndef FBCOUNTER_H
#define FBCOUNTER_H
#include"counter.h"
          


//    using Wholepart Relationship

class FBCounter
{
	Counter  a;

public:
	FBCounter(int i=0);
	void decrement();
	void increment();
	void reset();
	void starttAt(int i);
	int getCounterValue();


};



#endif
