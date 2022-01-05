#include<iostream>
#include"CString.h"
using namespace std;


int CString::getSize()
{
	return size;
}
CString::CString(const char * a)
{
	size = getLength(a);
	///	cout<<"cstrig   getlength   "<<size<<endl;
	data = new char[size + 1];

	myStrcpy(data, a);

	/*int i = 0;
	for ( ; a[i] != '\0';i++)
	{
		data[i] = a[i];
	}
	data[i] = '\0';*/

}
bool CString::isEmpty()
{
	if (!data)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
CString::CString(char c)
{
	data = new char[2];
	size = 2;
	data[0] = c;
	data[1] = 0;
}
void CString::display()
{
	cout << data;
}

void CString::display() const
{
	cout << data;

}

bool CString::isValidIndex(int index) const
{
	if (index >= 0 && index < size)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}



const char & CString::at(const int index) const
{

	if (isValidIndex(index))
	{
		return data[index];
	}
	exit(0);
}
int  CString::getLength()
{
	int length = 1;
	for (int i = 0; at(i) != '\0'; i++)
	{
		length = length + 1;
	}
	return length;
}
int CString::getLength(const char * p)
{
	int stringLength = 0;
	for (int i = 0; p[i] != 0; i++)
	{
		stringLength += 1;
	}
	return stringLength;
}
void CString::myStrcpy(char * des, const char * src)
{
	int i = 0;
	for (; src[i] != '\0'; i++)
	{
		des[i] = src[i];
	}

	des[i] = '\0';
}
int CString::findCharOccurnce(CString * substr, int start)
{
	int count = 0;
	for (int i = 0; (*substr).at(i) != '\0'; i++)
	{
		for (int j = start; at(j) != '\0'; j++)
		{
			if ((*substr).at(i) == at(j))
			{
				count = count + 1;
				//cout << count<<endl;
			}

		}

	}

	return count;
}
CString::~CString()
{
	if (!data)
	{
		return;
	}

	delete[] data;
	data = nullptr;
	size = 0;


}
CString::CString()
{
	size = 0;
	data = nullptr;

}

void CString::resize(int a)
{
	if (a <= 0)
	{
		this->~CString();
		return;
	}
	//size = a;
	char * p = new char[a + 1];
	int i = 0;

	for (; i < (a > size ? size : a); i++)         //(a > size ? size : a)
	{
		p[i] = data[i];
	}


	p[i] = '\0';

	this->~CString();
	data = p;
	size = a;
	//delete p;
	p = nullptr;

}
bool CString::isValidIndex(int index)
{
	if (index >= 0 && index < size)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
char & CString::at(int index)
{

	if (isValidIndex(index))
	{
		return data[index];
	}
	exit(0);
}
void  CString::input()
{

	cin.getline(data,100);

}

void CString::trimLeft()
{

	int count = 0;

	for (int i = 0; data[i] == ' ' || data[i] == '\t' || data[i] == '\n'; i++)
	{
		count = count + 1;    //give count of white space char
	}

	for (int i = 0; data[i] != '\0'; i++)
	{
		data[i] = data[count];
		count = count + 1;
	}










	/*
	for (int i = 0 ; data[i] == ' ' || data[i] == '\t' || data[i] == '\n' ; )
	{

			for (int j = 0; data[j] != '\0'; j++)
			{
				data[j] = data[j + 1];
			}

	}*/


}



void CString::reverse()
{
	CString d((const char *)data);

	int i = 0;
	int a = size - 1;
	for (; i < size; i++)
	{
		d.data[i] = data[a];

		a = a - 1;
	}
	//cout << "value of a " << a;
	d.data[i] = '\0';
	//cout << "size of d  " << d.size;
	this->~CString();

	/*cout << d.data<<endl;
	cout << "gdhgsh"<<endl;*/
	data = d.data;
	size = d.size;
	d.data = nullptr;


}

void CString::makeUpper()
{

	for (int i = 0; i < size && data[i] != '\0'; i++)
	{
		if (data[i] >= 97 && data[i] <= 122)
		{
			data[i] = data[i] - 32;
		}
	}

}

void CString::makeLower()
{

	for (int i = 0; i < size && data[i] != '\0'; i++)
	{
		if (data[i] >= 65 && data[i] <= 90)
		{
			data[i] = data[i] + 32;
		}
	}

}