#include<iostream>
#include"Person.h"
using namespace std;

 //         Person::


//
//
//CString name;
//CString address;
//CString city;
//CString state;
//int senderZip;
//int recipientZip;


Person& Person::operator=(Person && ref)
{
	cout<<"\nPerson& Person::operator=(Person && ref)\n";
	this->~Person();
	name = move(ref.name);
	city = move(ref.city);
	state = move(ref.state);
	senderZip = ref.senderZip;
	recipientZip = ref.recipientZip;

	return *this;
}
Person::Person(Person && ref):name(move(ref.name)),address(move(ref.address)),city(move(ref.city)),state(move(ref.state))
{
	cout << "\n\nin person move ctor";
	senderZip=ref.senderZip;
	recipientZip=ref.recipientZip;
}

Person::Person():name(), address(),city(), state()
{
	senderZip=0;
	 recipientZip=0;
}
void Person::displayPerson()
{
	cout << '\n';
	cout << "person name: ";
	name.display();
	cout << "person address: ";
	address.display();
	cout << "person city: ";
	city.display();
	cout << "person state: ";
	state.display();
	cout << "sender Zip: ";
	cout << senderZip << "\n";
	cout << "recipient Zip: ";
	cout << recipientZip << "\n";
}

Person::Person(CString name1, CString addr, CString city1, CString state1, int SZip, int RZip) :name(name1),address(addr),city(city1),state(state1)
{
	senderZip=SZip;
	recipientZip=RZip;
}



Person::Person(const  Person & ref):name(ref.name), city(ref.city),state(ref.state)
{
	cout << "\n:Person(const  Person & ref)\n";
	senderZip = ref.senderZip;
	recipientZip = ref.recipientZip;

}



Person & Person::operator=(const  Person & ref)
{
	if (this == &ref)
	{
		return *this;
	}

	name = ref.name;
	city = ref.city;
	state = ref.state;
	senderZip = ref.senderZip;
	recipientZip = ref.recipientZip;

	return *this;
}
