#include<iostream>
#include"CString.h"
using namespace std;

int main()
{
	CString a("6fgfgsf67");
	cout << a.toInteger();


/*
	CString a("          abcdfdgdgdg \n\t     ");
	a.display();  cout << "nouman" << endl;
	cout<<a.getSize(); cout << endl;
	a.trim();
	a.display(); cout <<"nouman"<< endl;
	cout<<a.getSize(); cout << endl;
*/

	/*
	CString a(" \n\t     abcdfdgdgdg");
	a.display(); cout << endl;
	cout<<a.getSize(); cout << endl;
	a.trimLeft();
	a.display(); cout << endl;
	cout<<a.getSize(); cout << endl;*/
	return 0;
}