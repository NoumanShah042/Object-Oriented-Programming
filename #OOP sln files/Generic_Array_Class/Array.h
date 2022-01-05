#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>

using namespace std;

template<typename T>

class Array
{
	T * data;
	int size;
	bool isValidIndex(int index) const
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
public:


	void display(const Array<T> & ref)
	{
		for (int i = 0; i < ref.getSize(); i++)
		{
			cout << ref[i] << " ";

		}
		cout << endl;

	}
	
	Array(const Array<T> & ref)
	{

		if (ref.data == 0)
		{
			data = 0;
			size = 0;
			return;
		}
		size = ref.size;
		data = new T[size];
		memcpy(data, ref.data, size * sizeof(T));
	}
	Array(Array<T> && ref)
	{
		cout << "\nArray(Array && ref)\n";
		data = ref.data;
		size = ref.size;
		ref.data = nullptr;
		size = 0;
	}

	Array<T>& operator=(Array<T> && ref)
	{
		cout << "\nArray::operator=(Array && ref)\n";
		this->~Array();
		data = ref.data;
		size = ref.size;           //  self assignment check
		ref.data = nullptr;
		size = 0;

		return *this;
	}

	Array<T> & operator=(const Array<T> & ref)
	{
		if (&ref == this)
		{                          // if ref =nullptr
			return *this;
		}
		this->~Array();
		size = ref.size;
		data = new T[size];
		memcpy(data, ref.data, size * sizeof(T));

		return *this;
	}



	Array()
	{

		data = nullptr;
		size = 0;

	}


	

	

	const int & operator[](int index) const
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


	T &  operator[](int index)
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



	/*const T &  operator[](int index) const
	{
		if (isValidIndex(index))
		{
			return data[index];
			
		}
		exit(0);
	}
*/
	int getSize() const
	{
		return size;
	}

	void resize(int newsize)
	{
		if (newsize <= 0)
		{
			this->~Array();
			return;
		}

		T * p = new T[newsize];
		//cout << (newsize > size ? size : newsize) << endl;
		int n = (newsize > size ? size : newsize);
		for (int i = 0; i < n; i++)
		{
			p[i] = data[i];
		}
		this -> ~Array();
		data = p;
		size = newsize;
	}

	~Array()
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







};






////Array(int argCount = 0, ...);
//Array();
//~Array();
//Array(const Array & ref);  // copy ctor
//Array & operator=(const Array & ref);   //copy Assignment
//Array(Array && ref);
//Array& operator=(Array && ref);
//const int & operator[](int index) const;
//int & operator[](int index);
//int getSize() const ;
//void resize(int newsize);
#endif

