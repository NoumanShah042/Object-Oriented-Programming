#include <iostream>
#include"JaggedArray.h"
#include<stdarg.h>
using namespace std;


//  JaggedAray::


const Array & JaggedAray::operator [] (int i) const
{
	if (isValidRow(i))
	{
		return *(data[i]);
	}
	exit(0);
}

int  JaggedAray::getColumns(int r)const
{
	return data[r]->getCapacity();
}

JaggedAray::JaggedAray()
{
	data = nullptr;
	rows = 0;
}


JaggedAray::JaggedAray(int r, ...)
{
	cout <<" JaggedAray::JaggedAray(int r, ...)"<<endl;
	if (r <= 0)
	{
		data = nullptr;
		rows = 0;
		return;
	}
	data = new Array * [r];
	rows = r;

	va_list v1;
	va_start(v1, r);      //it store arguments in va_list variable
	for (int i = 0; i < r  ; i++)   // now store values in heap from va_variable
	{
		
		data[i] = new  Array(va_arg(v1, int));
	}
	va_end(v1);	
}
JaggedAray::JaggedAray(const JaggedAray & ref)
{
	if (ref.data == nullptr)
	{
		data = nullptr;
		rows = ref.rows;
		return;
	}
	data = new Array *[ref.rows];
	rows = ref.rows;
	for (int i = 0; i < rows; i++)   // now store values in heap from va_variable
	{
		//cout << ref.getColumns(i) << endl;
		int col = ref.getColumns(i);
		data[i] = new  Array(col);
		for (int j = 0; j < col; j++)
		{
			(*this)[i][j] = ref[i][j];
		}
	}

	
}


Array & JaggedAray::operator [] (int i)
{

	return *(data[i]);

}

bool JaggedAray::isValidRow(int r)const
{
	return   (r >= 0 && r <= rows);
	
}

JaggedAray::~JaggedAray()
{
	cout << "JaggedAray::~JaggedAray()";
	if (!data)
	{
		data = nullptr;
		rows = 0;
		return;
	}

	for (int i = 0; i < rows; i++)
	{
		delete  data[i];
		data[i] = nullptr;
	}
	delete [] data;
	data = nullptr;
}

int JaggedAray::getRows() const
{
	return rows;
}