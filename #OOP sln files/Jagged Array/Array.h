#ifndef ARRAY_H
#define ARRAY_H

class Array
{
	int * data;
	int capacity;
	bool isValidIndex(int index) const;
public:

	Array(int argCount = 0, ...);
	~Array();
	void display(const Array & ref);
	Array(const Array & ref);                 //copy constructor
	Array & operator= (const Array & ref);   //coopy constructor

	int & operator [](int index);                   //int & getSet(int index);  
	const int & operator [](int index) const;                   //int & getSet(int index);  

	int getCapacity();      
	void resize(int newCapacity);
	//Array(int capacity = 0);
	//Array(Array & ref);   compiler constructor
	
};


#endif
