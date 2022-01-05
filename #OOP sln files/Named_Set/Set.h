#ifndef SET_H
#define  SET_H
#include"Array.h"


class Set
{
	Array data;
	int noOfElements;
	bool isValidIndex(int index) const;
	
public:
	Set(int cap = 0);
	Set(const Set & ref);
	Set & operator=(const Set & ref);
	void displayPowerSet();
	int getCapacity() const;
	bool isFull()const;
	bool isEmpty()const;
	const int & operator[](int index) const; // 14
	void insert(int element);
	void print() const;
	int getCardinality() const;
	void reSize(int newCapacity) ;
	Set calcUnion(const Set & s2) const;
	bool isMember(int val) const;
	Set calcInterSection(const Set & s2) const;
	Set calcDifference(const Set & s2) const;
//	Set calcSymmetricDifference(const Set & s2) const;
	int getElementPosition(int element) const;
};









#endif