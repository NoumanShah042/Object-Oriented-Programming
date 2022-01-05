
#include <iostream>
#include"Set.h"
using namespace std;

Set::Set(int cap ) :Array(cap)
{
	
	noOfElements = 0;
	//std::cout << "Set(int cap = 0) :data(cap)" << std::endl;
	/*int s= data.getCapacity();
	for (int i = 0; i <s ; i++)
	{
		data.getSet(i) = 0;
	}*/

}
int Set::getCapacity() const
{
	return Array::getCapacity();
}

bool Set::isValidIndex(int index) const
{
	return (index >= 0 && index < noOfElements);
}
const int & Set::operator[](int index) const
{
	if (isValidIndex(index))
	{
		return Array::operator[](index);
	}
	exit(0);

}
void Set::print() const 
{
	cout << "{";
	for (int i = 0; i < noOfElements ; i++)
	{
		cout << Array::operator[](i);
		if (i != noOfElements - 1)
		{
			cout << ",";
		}
	}
	cout << "}";
	cout <<"\n";


}
int Set::getCardinality() const
{
	return noOfElements;
}

void Set::reSize(int newCapacity)
{

	
	if (newCapacity == Array::getCapacity())
	{
		return;
	}

	if (newCapacity < Array::getCapacity())
	{
		noOfElements = newCapacity;                 //change noOfElements in case newcapacity < capacity
	}
	
	Array::resize(newCapacity);

	//cout << data.getCapacity();
	


}

Set::Set(const Set & ref):Array(ref)
{
	noOfElements=ref.noOfElements;
}
Set & Set::operator=(const Set & ref)
{
	Array::operator=(ref);
	noOfElements = ref.noOfElements;

	return *this;
}



void Set::insert(int element)
{
	if (Array::getCapacity() == noOfElements)
	{
		reSize((Array::getCapacity() * 2));
	}

	if (!isMember(element))
	{
		Array::operator[](noOfElements) = element;
		noOfElements = noOfElements + 1;
	}


}

Set Set::calcUnion(const Set & s2) const
{
	int size = s2.noOfElements + noOfElements;

	Set a(size);

	for (int i = 0; i < noOfElements; i++)
	{     // Array::operator[](i)
		a.insert(Array::operator[](i));          // copy elements of set 1
		/*a.data.getSet(i) = data.getSet(i);
		a.noOfElements = a.noOfElements + 1;*/
	}


	for (int j = 0; j < s2.noOfElements; j++)
	{
		int b = s2.Array::operator[](j);
		if (!a.isMember(b))
		{
			a.insert(s2.Array::operator[](j));
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

	Array obj(5,1,2,3,4,5);
	obj[2];
	obj.operator[](2);

	for (int i = 0 ; i < noOfElements; i++)
	{
		if (val == Array::operator[](i))
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
			if (Array::operator[](i) == s2.Array::operator[](j))
			{
				a.insert(s2.Array::operator[](j));
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

			if (Array::operator[](i) == s2.Array::operator[](j))
			{
				count = count + 1;
			}

			
		}

		if (!count)
		{

			a.insert(Array::operator[](i));

		}
	}

   

	return a;

}

bool Set::isEmpty()const
{
	return (noOfElements == 0);
}

bool  Set::isFull()const
{

	return (noOfElements == Array::getCapacity());
	
}

int  Set::getElementPosition(int element) const
{
	for (int i = 0; i < noOfElements; i++)
	{
		if (element == Array::operator[](i))
		{
			return i;
		}
	}
}


//Array::operator[](i)

//
//Set  Set::calcSymmetricDifference(const Set & s2) const
//{
//	//Set call(*this);
//	
//	Set c(this->calcDifference(s2));           //c=a-b
//	Set d(s2.calcDifference(*this));           //d=b-a
//
//	Set a(c.calcUnion(d));
//
//	a.print();
//
//	return a;
//}


void Set::displayPowerSet()
//void printPowerSet(char *set, int set_size)
{
	/*set_size of power set of a set with set_size
	n is (2**n -1)*/
	unsigned int powersetSize = pow(2,noOfElements);
	int counter, j;

	/*Run from counter 000..0 to 111..1*/
	for (counter = 0; counter < powersetSize; counter++)
	{
		cout << "{ ";
		for (j = 0; j < noOfElements; j++)
		{
			/* Check if jth bit in the counter is set
				If set then print jth element from set */
				//cout << (counter & (1 << j));
			//cout << endl<<(counter & (1 << j))<<endl;
			if (counter & (1 << j))
				cout << Array::operator[](j)<<" ";
			//cout << endl;
		}
		cout << "}";
		//cout << endl;
	}
}


