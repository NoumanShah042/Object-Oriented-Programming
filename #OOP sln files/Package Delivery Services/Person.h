#ifndef PERSON_H
#define  PERSON_H
#include"CString.h"
class Person
{
	CString name;
	CString address;
	CString city;
	CString state;
	int senderZip;
	int recipientZip;


public:
	Person();
	Person(const  Person & ref);
	Person & operator=(const  Person & ref);
	Person(Person && ref);
	Person& operator=(Person && ref);
	Person(CString name1,CString addr,CString city1,CString state1,int SZip,int RZip);
	void displayPerson();
	~Person()
	{
		std::cout << "\n~Person()\n";
	}




};





#endif