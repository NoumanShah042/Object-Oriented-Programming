
#include"Header.h"

class Quiz
{
	

public:
	int a ;
	Quiz() :a(5)
	{
		cout << "\ndef ctor\n";
	}
	Quiz(const Quiz & ref):a(10)
	{
		cout << "\n const quiz &\n";
	}
	
	Quiz(Quiz && ref):a(20)
	{
		cout << "\nquiz &&\n";
	}
	Quiz & operator=(const Quiz  r)
	{
		cout << "\noperator=(const Quiz  r) "<<endl;
		a = r.a; 
		cout << r.a << endl;;
		return *this;
	}
	/*Quiz & operator=(Quiz && r)
	{
		cout << "\noperator=(Quiz && r)  " << endl;
		
		return *this;
	}*/

	

};

Quiz f()
{
	Quiz a;
	return a;
}

Quiz f()
{
	Quiz a;
	return a;
}
int main()
{
	Quiz q;
	Quiz s(q);
	move(q);

	f().


	//q = move(q);  //  move(q) krne se kia ho ga k q object R value bn jae ga  
	               // behaves as conversion constructor 
	               // ab agr move assignmet ho ga tw wo chale ga
	              // is case ma nhi ha tw ye copy assignment k pas jae ga 
	              // ab copy assignment by value le rha ha tw is k lye
	               // pehle move constructor chale ga
	               // or phir operator= ki body




//	q = s;
//	Quiz q;
	//Quiz s(Quiz());
	//f(Quiz());
	//cout << "break";
	//Quiz q(f());
	//cout << "break";
	return 0;
}



//quiz  9 question par B
//
//class Quiz
//{
//	int a = 90;
//
//public:
//	
//	Quiz() :a(5)
//	{
//		cout << "\ndef ctor\n" << a;
//	}
//	Quiz(const Quiz &)
//	{
//		cout << "\ndef const quiz &\n";
//	}
//	Quiz(Quiz &)
//	{
//		cout << "\nquiz &\n";
//	}
//	
//
//};
//void f(Quiz )
//{
//	cout << "\nvoid f(Quiz )\n";
//}
//
//void f( Quiz &)
//{
//	cout << "\nvoid f(Quiz &)\n";
//}/*
//Quiz f()
//{
//	Quiz q;
//
//	cout << "\nvoid f()\n";
//	return q;
//}

// make one function friend of class
/*
//class Y
//{
//private:
//	int c, d;
//	
//
//	friend void X::g();
//
//public:
//
//	//friend void DoSomething(X & obj);
//
//	void disp()
//	{
//		
//
//		cout << c << ":" << d << "\n";
//		
//	}
//	
//
//};
//
//class X
//{
//private:
//	int a, b;
//
//public:
//	
//	void disp()
//	{
//
//		cout << a << ":" << b << "\n";
//	}
//
//
//};
//int main()
//{ 
//	X x;
//	x.g();
//	
//	Y y;
//
//
//	return 0;
//}*/

/*#include <iostream>
using namespace std;




class X
{
private:
	int a, b;
public:
	friend void DoSomething(X & obj);
	friend class Y;
	void disp()
	{
		cout << a <<":"<< b << "\n";
	}
};
class Y
{
private:
	int c, d;
	X obj;
public:
	//friend void DoSomething(X & obj);

	void disp()
	{
		cout <<( obj.a=90 )<< ":" <<( obj.b=60 )<< "\n";
		obj.a = 9999;
		obj.b = 600000;
	}
	void disp2()
	{
		cout << obj.a<< ":" << obj.b << "\n";
	}


};

void DoSomething( X & obj)
{

	obj.a = 3;
	obj.b = 4;
	//cout << obj.a << ":" << obj.b << "\n";
}
void f()
{
	X x;
	
	DoSomething(x);
}

int main()
{
	//f();
	X x;
	//x.disp();
	DoSomething(x);
	x.disp();
	cout << endl;

	Y y;
	y.disp();
	y.disp2();
	return 0;
}

*/

