#ifndef  BOUNDED_H
#define  BOUNDED_H

class BoundedInteger
{
	int lowerBound;
	int upperBound;
	int value;

public:
	BoundedInteger();
	BoundedInteger(int lb, int ub);
	BoundedInteger(int lb, int ub,int val);
	bool isValidBound(int lb, int ub);
	void setValue(int val);
	int getValue() const;
	int getLowerBound();
	int getUpperBound();
	void increment(int inc = 1);
	void decrement(int dec = 1);
	bool isValidValue(int val);
};

#endif
