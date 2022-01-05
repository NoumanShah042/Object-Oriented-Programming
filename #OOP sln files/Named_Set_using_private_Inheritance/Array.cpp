#include <iostream>
#include"Array.h"
#include<stdarg.h>
using namespace std;


void display(const Array & ref)
{
	for (int i = 0; i < ref.getCapacity(); i++)
	{
		cout << ref[i] << " ";

	}
	cout << endl;

}
//Array::Array( Array & ref)
//{
//	cout << "ref address" << &ref<<endl;
//	capacity = ref.capacity;	
//	data = ref.data;
//	
//}
Array::Array(const Array & ref)
{

	if (ref.data == 0)
	{
		data = 0;
		capacity = 0;
		return;
	}
	capacity = ref.capacity;
	data = new int[capacity];
	memcpy(data, ref.data, capacity * sizeof(int));
}
Array::Array(Array && ref)
{
	cout << "\nArray(Array && ref)\n";
	data = ref.data;
	capacity = ref.capacity;
	ref.data = nullptr;
	capacity = 0;
}

Array& Array::operator=(Array && ref)
{
	cout << "\nArray::operator=(Array && ref)\n";
	this->~Array();
	data = ref.data;
	capacity = ref.capacity;           //  self assignment check
	ref.data = nullptr;
	capacity = 0;

	return *this;
}

Array & Array::operator=(const Array & ref)
{
	if (&ref == this)
	{                          // if ref =nullptr
		return *this;
	}
	this->~Array();
	capacity = ref.capacity;
	data = new int[capacity];
	memcpy(data, ref.data, capacity * sizeof(int));

	return *this;
}

Array::Array(int argCount, ...)
{
	if (argCount <= 0)
	{
		capacity = 0;
		data = 0;
		return;
	}
	//cout << "Array::Array(int argCount, ...)" << endl;
	capacity = argCount;
	data = new int[capacity];
	va_list v1;
	va_start(v1, argCount);      //it store arguments in va_list variable
	for (int i = 0; i < capacity; i++)   // now store values in heap from va_variable
	{
		data[i] = va_arg(v1, int);
	}
	va_end(v1);
	
}

//Array::Array(int cap)
//{
//	capacity = 0;
//	data = nullptr;
//	if (cap > 0)
//	{
//		data = new int[cap];
//		capacity = cap;
//	}
//}

bool Array::isValidIndex(int index) const
{
	//return  (index >= 0 && index < capacity);
	if (index >= 0 && index < capacity)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

const int & Array::operator[](int index) const
{
	if (isValidIndex(index))
	{
		return data[index];
		//cin>>data[1];
		//cout << "asjg"<<endl;
		//int & a = data[index];
		//return a;
	}
	exit(0);
}
int &  Array::operator[](int index)
{
	if (isValidIndex(index))
	{
		return data[index];
		//cin>>data[1];
		//cout << "asjg"<<endl;
		//int & a = data[index];
		//return a;
	}
	exit(0);
}

int  Array::getCapacity() const
{
	return capacity;
}

void Array::resize(int newCapacity)
{
	if (newCapacity <= 0)
	{
		this->~Array();
		return;
	}

	int * p = new int[newCapacity];
	//cout << (newCapacity > capacity ? capacity : newCapacity) << endl;
	int n = (newCapacity > capacity ? capacity : newCapacity);
	for (int i = 0; i < n; i++)
	{
		p[i] = data[i];
	}
	this -> ~Array();
	data = p;
	capacity = newCapacity;
}

Array::~Array()
{
	if (!data)
	{
		return;
	}
	else
	{
		delete[] data;
		data = nullptr;
		capacity = 0;
	}
	//cout << "Array::~Array()"<<endl;
}





