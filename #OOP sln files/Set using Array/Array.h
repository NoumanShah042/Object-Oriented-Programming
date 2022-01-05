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
	Array(const Array & ref);
	int & getSet(int index) const;
	int getCapacity() const ;
	void resize(int newCapacity);

};

#endif

