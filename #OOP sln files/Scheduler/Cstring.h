
#ifndef CSTRING_H
#define CSTRING_H

class CString
{
	char * data;
	int size;

public:
	CString(const CString & a);
	void makeLower();
	void makeUpper();
	int getSize();
	CString(const char * a);
	CString();
	CString(char c);
	void display();
	int getLength(const char * p);
	int getLength() const; 
	void reverse();
	void trimLeft();
	void trimRight();
	void trim();
	bool isEmpty();
	~CString();
	void input();
	char & at(int index) const;
	bool isValidIndex(int index) const;
	void myStrcpy(char * des, const char * src);
	void resize(int a);
	int findCharOccurnce(CString * substr, int start = 0);
	void concatEqual(const CString & s2);
	
};







#endif

