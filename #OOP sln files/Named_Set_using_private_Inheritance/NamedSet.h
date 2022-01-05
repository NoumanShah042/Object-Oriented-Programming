#ifndef NAMED_SET_H
#define NAMED_SET_H
#include"Set.h"
#include"CString.h"

class NamedSet:public Set
{
	using Set::calcUnion;
	using Set::operator=;
	using Set::print;
	using Set::calcDifference;
	//using Set::displayPowerSet;
	//using Set::insert;


	CString name;
public:
	NamedSet(const Set & ref);  
	NamedSet(CString n = "A", int cap = 0, ...);
	void print() const;
	//     NamedSet
	NamedSet(const NamedSet&ref);
	NamedSet& operator=(const NamedSet&ref);
	CString getName();
	NamedSet calcUnion(const NamedSet & s2) const;
	NamedSet calcSymmetricDifference(const NamedSet & s2) const;
	void setName(CString s);

	~NamedSet();


};


#endif
