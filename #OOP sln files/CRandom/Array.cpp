#include <iostream>
#include"Array.h"
#include<stdarg.h>
using namespace std;


void display(const Array & ref)
{
	for (int i = 0; i < ref.getSize(); i++)
	{
		cout << ref[i] << " ";

	}
	cout << endl;

}
//Array::Array( Array & ref)
//{
//	cout << "ref address" << &ref<<endl;
//	size = ref.size;	
//	data = ref.data;
//	
//}
Array::Array(const Array & ref)
{

	if (ref.data == 0)
	{
		data = 0;
		size = 0;
		return;
	}
	size = ref.size;
	data = new int[size];
	memcpy(data, ref.data, size * sizeof(int));
}
Array::Array(Array && ref)
{
	cout << "\nArray(Array && ref)\n";
	data = ref.data;
	size = ref.size;
	ref.data = nullptr;
	size = 0;
}

Array& Array::operator=(Array && ref)
{
	if (&ref == this)
	{                          // if ref =nullptr
		return *this;
	}
	if (!ref.data)
	{
		data = nullptr;
		size = 0;
		return *this;
	}
	cout << "\nArray::operator=(Array && ref)\n";
	this->~Array();
	data = ref.data;
	size = ref.size;           //  self assignment check
	ref.data = nullptr;
	size = 0;

	return *this;
}

Array & Array::operator=(const Array & ref)
{
	if (&ref == this)
	{                          // if ref =nullptr
		return *this;
	}

	if (!ref.data)
	{
		data = nullptr;
		size = 0;
		return *this;
	}
	this->~Array();
	size = ref.size;
	data = new int[size];
	memcpy(data, ref.data, size * sizeof(int));

	return *this;
}

Array::Array(int argCount, ...)
{
	if (argCount <= 0)
	{
		size = 0;
		data = 0;
		return;
	}
	//cout << "Array::Array(int argCount, ...)" << endl;
	size = argCount;
	data = new int[size];
	va_list v1;
	va_start(v1, argCount);      //it store arguments in va_list variable
	for (int i = 0; i < size; i++)   // now store values in heap from va_variable
	{
		data[i] = va_arg(v1, int);
	}
	va_end(v1);
	
}

//Array::Array(int cap)
//{
//	size = 0;
//	data = nullptr;
//	if (cap > 0)
//	{
//		data = new int[cap];
//		size = cap;
//	}
//}

bool Array::isValidIndex(int index) const
{
	//return  (index >= 0 && index < size);
	if (index >= 0 && index < size)
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

int  Array::getSize() const
{
	return size;
}

void Array::resize(int newSize)
{
	if (newSize <= 0)
	{
		this->~Array();
		return;
	}

	int * p = new int[newSize];
	//cout << (newsize > size ? size : newsize) << endl;
	int n = (newSize > size ? size : newSize);
	for (int i = 0; i < n; i++)
	{
		p[i] = data[i];
	}
	this -> ~Array();
	data = p;
	size = newSize;
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
		size = 0;
	}
	//cout << "Array::~Array()"<<endl;
}





