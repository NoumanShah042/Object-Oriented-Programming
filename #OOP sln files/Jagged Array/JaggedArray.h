#ifndef JAGGEDARRAY_H
#define JAGGEDARRAY_H
#include"Array.h"

class JaggedAray
{

	Array * * data;
	int rows;
	bool isValidRow (int r) const;


public:
	JaggedAray();
	JaggedAray(int r, ...);
	JaggedAray(const JaggedAray & ref);
	Array & operator [] (int i) ;   //getset
	const Array & operator [] (int i) const;
	int getRows() const;
	int getColumns(int r)const;
	~JaggedAray();


};



#endif
