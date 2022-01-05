#include<iostream>
using namespace std;

//   /*  https://www.go4expert.com/articles/virtual-table-vptr-multiple-inheritance-t16616/    */

class Base1
{
public:
	int a=80;

	virtual void func1() { cout << "Base1::func1()" << endl; }
	virtual void func2() { cout << "Base1::func2()" << endl; }

};

class Base2 {

public:
	virtual void func1() { cout << "Base2::func1()" << endl; }
	virtual void func2() { cout << "Base2::func2()" << endl; }
};

class Base3 {
public:
	virtual void func1() { cout << "Base3::func1()" << endl; }
	virtual void func2() { cout << "Base3::func2()" << endl; }
};

class Derive : public Base1, public Base2, public Base3
{
public:

	int b=90;

	virtual void disp1()
	{
		cout << "Derive::disp1" << endl;
	}
	virtual void Fnc()
	{
		cout << "Derive::disp2" << endl;
	}

};

typedef  void(*function)(void);

int main()
{
	Derive obj;
	function func = NULL;
	cout << "object layout:\n";
	cout << "vptr to base1  :" << *((int*)&obj + 0) << endl;
	cout << "field of base1:" << *((int*)&obj + 1) << endl;
	cout << "vptr to base2  :" << *((int*)&obj + 2) << endl;
	cout << "vptr to base3  :" << *((int*)&obj + 3) << endl;
	cout << "field of derive  :" << *((int*)&obj + 4) << endl << endl << endl;
	 
	//Size contains the _vptr of all it's base classes and Base class data and it's own  
	//Data
	cout << "Size of obj = " << sizeof(obj) << endl;

	// calling 1st virtual function of Base1
	func = (function)*((int*)*(int*)((int*)&obj + 0) + 0);
	func();

	// calling 2nd virtual function of Base1
	func = (function)*((int*)*(int*)((int*)&obj + 0) + 1);
	func();

	//Next location contains the Base1's data, lets change it and check the o/p
	int* pInt = (int*)&obj + 1;
	*(pInt + 0) = 30;


	cout << "Base1 class fields: a =" << obj.a << endl;




	// calling 1st virtual function of Drive
//	func = (function)*(    (int*)*(int*)((int*)&obj + 0) + 2    );
	/*func = (function)*((int*)*((int*)&obj + 0) + 2);
	func();*/

	cout<< (*((int*)*((int*)&obj + 0) + 2))<<endl;
	

	((function)(*((int*)*((int*)&obj + 0) + 2)))();

	/*
	//my try
	void(*fc)(void);
	fc= (function)( *((int*)*((int*)&obj + 0) + 2));
	fc(); cout << "nouman\n";*/
	//(((int*)*((int*)&obj + 0) + 2));
	
	

	// calling 2nd virtual function of Drive
	func = (function)*((int*)*(int*)((int*)&obj + 0) + 3);
	func();

	// calling 1st virtual function of Base2
	func = (function)*((int*)*(int*)((int*)&obj + 2) + 0);
	func();

	// calling 2nd virtual function of Base2
	func = (function)*((int*)*(int*)((int*)&obj + 2) + 1);
	func();

	// calling 1st virtual function of Base3
	func = (function)*((int*)*(int*)((int*)&obj + 3) + 0);
	func();

	// calling 2nd virtual function of Base3
	func = (function)*((int*)*(int*)((int*)&obj + 3) + 1);
	func();

	//At the end, it contains it's own data i.e. Derive classes data, lets change it and   
	//check the o/p
	pInt = (int*)&obj + 4;
	*(pInt + 0) = 100;
	cout << "Derive class fields: b =" << obj.b << endl;

	return 0;
}
