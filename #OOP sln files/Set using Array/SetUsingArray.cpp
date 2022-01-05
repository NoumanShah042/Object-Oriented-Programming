
#include <iostream>
#include"Array.h"
#include"SetUsingArray.h"

using namespace std;


int Set::getCapacity() const
{
	return data.getCapacity();
}

void Set::insert(int element)
{
	if (data.getCapacity() == noOfElements)
	{
		reSize((data.getCapacity() * 2));
	}

	if(!isMember(element))
	{
		data.getSet(noOfElements) = element;
		noOfElements = noOfElements + 1;
	}

	
}
void Set::print() const 
{
	for (int i = 0; i < noOfElements ; i++)
	{
		cout << data.getSet(i) << " ";

	}
	cout << endl;


}
int Set::getCardinality() const
{
	return noOfElements;
}

void Set::reSize(int newCapacity)
{

	
	if (newCapacity == data.getCapacity())
	{
		return;
	}

	if (newCapacity < data.getCapacity())
	{
		noOfElements = newCapacity;                 //change noOfElements in case newcapacity < capacity
	}
	
	data.resize(newCapacity);

	//cout << data.getCapacity();
	


}
Set Set::calcUnion(const Set & s2) const
{
	int size = s2.noOfElements + noOfElements;

	Set a(size);

	for (int i = 0; i < noOfElements; i++)
	{
		a.insert(data.getSet(i));          // copy elements of set 1
		/*a.data.getSet(i) = data.getSet(i);
		a.noOfElements = a.noOfElements + 1;*/
	}


	for (int j = 0; j < s2.noOfElements; j++)
	{
		int b = s2.data.getSet(j);
		if (!a.isMember(b))
		{
			a.insert(s2.data.getSet(j));
		}
	}

	/*cout << a.noOfElements<< endl;
	cout << a.data.getCapacity() << endl;
	a.print();
	a.print();
	cout << endl;*/

	return a;
}

bool Set::isMember(int val) const
{

	for (int i = 0 ; i < noOfElements; i++)
	{
		if (val == data.getSet(i))
		{
			return 1;
		}
	}

	return 0;
}

Set Set::calcInterSection(const Set & s2) const
{
	int size =  noOfElements ;

	Set a(size);

	for (int i = 0 ; i < noOfElements ; i++)
	{
		for (int j = 0; j < s2.noOfElements; j++)
		{
			if ( data.getSet(i) == s2.data.getSet(j))
			{
				a.insert(s2.data.getSet(j));
			}
		}
	}
	/*cout << endl;
	a.print();*/
	return a;
}
Set Set::calcDifference(const Set & s2) const
{
	int size = noOfElements+s2.noOfElements;

	Set a(size);
	
	
	for (int i = 0 ; i < noOfElements ;i++  )
	{
		int count = 0;

		for ( int j = 0 ;  j < s2.noOfElements ; j++)
		{

			if (data.getSet(i) == s2.data.getSet(j))
			{
				count = count + 1;
			}

			
		}

		if (!count)
		{

			a.insert(data.getSet(i));

		}
	}

   

	return a;

}

Set  Set::calcSymmetricDifference(const Set & s2) const
{
	//Set call(*this);
	
	Set c(this->calcDifference(s2));           //c=a-b
	Set d(s2.calcDifference(*this));           //d=b-a

	Set a(c.calcUnion(d));

	a.print();

	return a;
}




