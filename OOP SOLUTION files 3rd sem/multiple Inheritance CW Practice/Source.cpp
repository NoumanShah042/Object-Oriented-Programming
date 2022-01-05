
#include<iostream>
using namespace  std;

// multiple inheritance checking constructor





class X
{
	int x1, x2;
public:
	X(int x)
	{

		cout << "\nX()";
	}


};


class A:virtual public X
{

public:
	int a;
	A():X(1)
	{
		cout << "\nA()";
	}

	void h()
	{
		cout << "\nA::h\n";
	}
	void g()
	{
		cout << "\nA::g\n";
	}

};

class B :virtual public X
{


public:



	B():X(1)
	{
		cout << "\nB()";
	}

	

	void g()
	{
		cout << "\nB::g\n";
	}

};


class C:public A,public B
{
	int c;

	
public:



	C():A(),B(),X(1)
	{
		cout << "\nC()";
	}
	void i()
	{
		cout << "\nC::i\n";
	}
};

int main()
{
	C obj;
	cout << endl;
	




	//cout << p<<"   " << q << "   " << r;


	//obj.g();
	//obj.h();
	//obj.i();
	//cout<<obj.a;






}


