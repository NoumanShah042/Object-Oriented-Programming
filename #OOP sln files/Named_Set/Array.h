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
	Array(const Array & ref);  // copy ctor
	Array & operator=(const Array & ref);   //copy Assignment
	Array(Array && ref);
	Array& operator=(Array && ref);

	const int & operator[](int index) const;
	int & operator[](int index);

	int getCapacity() const ;
	void resize(int newCapacity);

};

#endif

