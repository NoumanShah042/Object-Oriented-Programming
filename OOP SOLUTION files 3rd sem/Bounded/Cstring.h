
#ifndef CSTRING_H
#define CSTRING_H

class CString
{
	char * data;
	int size;

public:
	
	const char & at(const int index) const;
	bool isValidIndex(int index) const;
	void makeLower();
	void makeUpper();
	int getSize();
	CString(const char * a);
	CString();
	CString(char c);
	void display();
	void display() const;
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
	int find(const CString & substr, int start) const;
};







#endif

