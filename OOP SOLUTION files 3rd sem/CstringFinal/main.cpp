#include<iostream>
#include"CString.h"
using namespace std;

//
//CString f()
//{
//	
//	CString a("nouman");
//	cout << "\nin f()"<<&a<<endl;
//	return a;
//}
//
CString f()
{
	CString c("hello");
	return c;
}

int main()
{
	CString a("1234");
	//cout<<a.toInteger();
	a.insert(3, "syed");
	a.display();
	//cout << endl << a.getLength();
	cout << endl << a.getSize();
	

//	char a[7] = "nouman";

	
	/*cout <<endl;
	a.display();
	cout << endl <<a.getLength();
	a.shrink();
	cout << endl;
	a.display();
	cout << endl;
	cout<<a.getLength();*/
	


	//CString a(CString("Nouman"));
	//cout << "\nbreak1\n";

	//CString b = "Nouman";
	//cout << "\nbreak2\n";

	//CString c = CString("helo");
	//cout << "\nbreak3\n";


	//CString a("nouman");
	//CString b("syed");
	//cout << "\nbreak\n";
	//CString c(a + b);
	//cout << "\nbreak2\n";
	
	////cout <<"\nnew"<< endl;
	//CString b(f());
	//cout << &b << endl;
	//b.display();




	/*CString a("6fgfgsf67");
	cout << a.toInteger();*/

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