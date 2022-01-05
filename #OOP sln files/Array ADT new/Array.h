#ifndef ARRAY_H
#define ARRAY_H

class Array
{
	int * data;
	int capacity;
	bool isValidIndex(int index);
public:

	Array(int argCount = 0, ...);
		~Array();
	void display(const Array & ref);
	Array(const Array & ref);
	Array(Array && ref)
	{
		std::cout << "\nmove\n";
	}

	int & getSet(int index);
	int getCapacity();
	void resize(int newCapacity);
	
	//Array(int capacity = 0);
	//Array(Array & ref);   compiler constructor
	
};


#endif
