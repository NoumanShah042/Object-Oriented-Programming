#include <iostream>
#include"Array.h"
#include<stdarg.h>
using namespace std;


void Array::display(const Array & ref)
{
	for (int i = 0; i < ref.capacity; i++)
	{
		cout << ref.data[i] << " ";

	}
	cout << endl;

	/*for (int i = 0 ; i < capacity; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;*/
	
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
	cout << "Array(const Array & ref)\n";
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

Array::Array(int argCount, ...)
{
	cout << "Array::Array(int argCount, ...)       "<< argCount<<endl;
	if (argCount <= 0)
	{
		capacity = 0;
		data = nullptr;
		//cout << "f    " << data << "  f"<<endl;

		return;
	}
	
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
 
bool Array::isValidIndex(int index)
{
	if (index >= 0 && index < capacity)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

int &  Array::getSet(int index)
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

int  Array::getCapacity()
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
	cout << (newCapacity > capacity ? capacity : newCapacity)<<endl;
	for (int i = 0 ; i < (newCapacity > capacity ? capacity : newCapacity) ; i++)
	{
		p[i] = data[i];
	}
	this -> ~Array();
	data = p;
	capacity=newCapacity;
}

Array::~Array()
{
	cout << "\n~Array()\n";
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
	//cout << "~array";
}





