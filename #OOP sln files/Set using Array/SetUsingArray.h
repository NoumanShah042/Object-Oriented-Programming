#ifndef SETUSINGARRAY_H
#define  SETUSINGARRAY_H
#include"Array.h"
#include <iostream>

class Set
{
	Array data;
	int noOfElements;
public:
	Set(int cap = 0) :data(cap)
	{
		noOfElements = 0;
		//std::cout << "Set(int cap = 0) :data(cap)" << std::endl;
		/*int s= data.getCapacity();
		for (int i = 0; i <s ; i++)
		{
			data.getSet(i) = 0;
		}*/

	}
	int getCapacity() const;
	void insert(int element);
	void print() const;
	int getCardinality() const;
	void reSize(int newCapacity);
	Set calcUnion(const Set & s2) const;
	bool isMember(int val) const;
	Set calcInterSection(const Set & s2) const;
	Set calcDifference(const Set & s2) const;
	Set calcSymmetricDifference(const Set & s2) const;

};









#endif