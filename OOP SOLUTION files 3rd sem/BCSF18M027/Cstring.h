
#ifndef CSTRING_H
#define CSTRING_H

class CString
{
	char * data;
	int size;

public:
	void makeLower();
	void makeUpper();
	int getSize();
	CString(const char * a);
	CString();
	CString(char c);
	void display();
	int getLength(const char * p);
	int getLength();
	void reverse();
	void trimLeft();
	void trimRight();
	void trim();
	bool isEmpty();
	~CString();
	void input();
	char & at(int index);
	bool isValidIndex(int index);
	void myStrcpy(char * des, const char * src);
	void resize(int a);
	int findCharOccurnce(CString * substr, int start = 0);
};







#endif

