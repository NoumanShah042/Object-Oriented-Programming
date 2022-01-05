#ifndef ARRAY_H
#define ARRAY_H

class Array
{
	int * data;    // int * data = new int[5]{ 2,3,4,5,6, };
	int capacity;
	bool isValidIndex(int index) const;
public:

	Array(int argCount = 0, ...);
	~Array();
	void display(const Array & ref);
	Array(const Array & ref);                 // copy constructor
	Array & operator= (const Array & ref);   // copy assignment operator

	int &  getSet(int index);
	int & operator [](int index);                   //same as  int & getSet(int index);  
	const int & operator [](int index) const;                   //int & getSet(int index);  

	int getCapacity();      
	void resize(int newCapacity);
	//Array(int capacity = 0);
	//Array(Array & ref);   compiler constructor
	
};


#endif
