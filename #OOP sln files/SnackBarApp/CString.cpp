#include<iostream>
#include"CString.h"
using namespace std;



ostream & operator<<(ostream & cout, CString & str)
{
	str.display();
	return cout;
}

int CString::getSize()
{
	return size;
}
CString::CString(const char * a)
{
	cout << "CString::CString(const char * a)\n";
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
bool CString::operator!() const
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
CString::CString(const char c)
{
	data = new char[2];
	size = 2;
	data[0] = c;
	data[1] = 0;
}
void CString::display() const
{
	cout << data;

	//cout << this;
}
int  CString::getLength() const
{
	int length = 0;
	for (int i = 0; data[i] != '\0'; i++)
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
	for (int i = 0; (*substr).data[i] != '\0'; i++)
	{
		for (int j = start; data[j] != '\0'; j++)
		{
			if ((*substr).data[i] == data[j])
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
	cout << "\nCString::~CString()\n";
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
	cout << "CString::CString()\n";
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
bool CString::isValidIndex(int index)  const
{
	if (index >= 0 && index <= size)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
char & CString::operator[](const int index)
{

	if (isValidIndex(index))
	{
		return data[index];
	}
	exit(0);
}

const char & CString::operator[](const int index) const
{

	if (isValidIndex(index))
	{
		return data[index];
	}
	exit(0);
}



void CString::input()
{

	char input;
	cin.get(input);//   scedular
	int index = size;   //nouman index =6

	while (input != '\0' && input != '\n')
	{
		resize(index + 1);    //    array 8
		data[index] = input;   //
		index = index + 1;
		cin.get(input);
		size = index;
	}

	data[index] = '\0';

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
void CString::operator += (const CString & s2)
{
	int count = size;
	resize(size + s2.size);
	for (int i = count; i < (count + s2.size); i++)
	{
		data[i] = s2.data[i - count];


		//cout<<endl << data<<endl;
	}
	data[count + s2.size] = '\0';
}
CString CString::operator +(const CString & s2)  //concat
{
	//cout << &s2<<endl;
	CString temp(*this);
	int count = size;
	temp.resize(count + s2.size);
	for (int i = count; i < (count + s2.size); i++)
	{
		temp.data[i] = s2.data[i - count];


		//cout<<endl << data<<endl;
	}
	temp.data[count + s2.size] = '\0';

	temp.display();

	return temp;
}

CString::CString(CString && a)
{
	cout << "\nCString::CString(CString && a)\n";
	data = a.data;
	size = a.size;
	a.data = nullptr;
	a.size = 0;
}

CString::CString(const CString & a)
{
	cout << "\nCString::CString(const CString & a)\n";
	if (!a.data)
	{
		data = nullptr;
		size = 0;
		return;
	}

	size = a.size;
	data = new char[a.size + 1];
	for (int i = 0; i < (a.size + 1); i++)
	{
		data[i] = a.data[i];
	}
}

CString & CString::operator = (CString && ref)//  move assignment operator
{
	cout << "\noperator = (CString && ref)\n";
	this->~CString();
	data = ref.data;
	size = ref.size;
	ref.data = nullptr;
	ref.size = 0;

	return *this;
}
CString & CString::operator= (const CString & ref)
{
	cout << "\nCString & CString::operator= (const CString & ref)\n";
	if (!ref.data)
	{
		data = nullptr;
		size = 0;
		return *this;
	}

	this->~CString();
	size = ref.size;
	data = new char[ref.size + 1];
	for (int i = 0; i < (ref.size + 1); i++)
	{
		data[i] = ref.data[i];
	}

	return *this;
}