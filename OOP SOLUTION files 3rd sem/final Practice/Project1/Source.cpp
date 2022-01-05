#include<iostream>
using namespace std;

class Rabbit;

struct Locked
{

private:
	friend class Rabbit;
	Locked()
	{
		cout << "\nLocked()";
	}
	void g()
	{}

};

struct Rabbit :public Locked
{


public:

	Rabbit()
	{
		cout << "\nRabbit()";
		Locked a;
		a.g();
		g();
	}

	


};

struct BugsBunny :public Rabbit
{


public:

	BugsBunny()
	{
		cout << "\nBugsBunny()";
	}




};



int main()
{
	BugsBunny obj;
	
	return 0;
}

//Quiz 11 challenge B
/*

class A
{
protected:
	void g()
	{

	}
public:
	A()
	{

	}
	~A()
	{

	}
	void f()
	{

	}
};
class B:protected A 
{
public:
	B()
	{

	}
	~B()
	{

	}
	void s()
	{
		A a;
		
		
		g();
		this->A::~A();

	}
	
};
int main()
{
	
	B obj;
	obj.s();
	


}
*/

//downcasting
/*

class A
{
	virtual void f()
	{

	}
};
class B :public A
{
	virtual void f()
	{

	}
};
int main()
{
	

	A a;
	B b;

	A*p = &b;
	B*q = (B*)&a;
	p = q;
	q = p;
	q = dynamic_cast<B*>(p);


}


*/


//void printArray(int* array, int size)
//{
//	for (int i = 0; i < size; i++)
//		cout << array[i] << ",";
//}
//
//void print(int* a)
//{
//	
//		cout << ",\nhello\n";
//}
//
//int main()
//{
//	
//	char a[6] = { 'a', 'b','d','k'};
//	char * f = a;
//	cout << f;
//	//int a = 10;
//	//int b = 50;
//	//int d[6] = { 1,2,3,4,4,4};
//	//d[0] = 100;
//	//print(&a);
//	//for(int i=0;i<6;i++)
//	//{
//	//	//cout << d[i]<<endl;
//	//
//	//}
//	//printArray(d,6);
//	return 0;
//}