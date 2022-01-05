#include <iostream>
#include"NamedSet.h"
#include<stdarg.h>
using namespace std;


//    NamedSet::

void  NamedSet::setName(CString s)
{
	name = s;
}

NamedSet   NamedSet::calcUnion(const NamedSet & s2) const
{

	return Set::calcUnion(s2);
}

NamedSet::NamedSet(const Set & ref) :Set(ref),name("A")
{

}

CString  NamedSet::getName()
{
	return name;
}


NamedSet  NamedSet::calcSymmetricDifference(const NamedSet & s2) const
{
	//return Set::calcSymmetricDifference(s2);

//	cout << "\nNamedSet::calcSymmetricDifference(const NamedSet & s2) const\n";

	Set c(this->calcDifference(s2));           //c=a-b
	Set d(s2.calcDifference(*this));           //d=b-a

	Set a(c.calcUnion(d));

	//a.print();

	return a;

}

NamedSet::~NamedSet()
{

}

NamedSet::NamedSet(const NamedSet&ref):name(ref.name),Set(ref)
{

}

NamedSet& NamedSet::operator=(const NamedSet&ref)
{
	this->~NamedSet();
	name = ref.name;
	Set::operator=(ref);
	return *this;
}

NamedSet::NamedSet(CString n, int cap , ...): name(n),Set(cap)
{

	//int capacity;
	//cout << "Array::Array(int argCount, ...)" << endl;
	//capacity = cap;
//	data = new int[capacity];
	va_list v1;
	va_start(v1, cap);      //it store arguments in va_list variable
	for (int i = 0; i < cap; i++)   // now store values in heap from va_variable
	{
		insert(va_arg(v1, int));
	}
	va_end(v1);

}

void NamedSet::print() const
{
	name.display();
	cout << " = ";
	Set::print();
}