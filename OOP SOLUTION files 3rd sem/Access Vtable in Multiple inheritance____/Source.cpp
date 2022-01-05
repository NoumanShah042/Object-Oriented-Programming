#include<iostream>
using namespace std;

//   /*  https://www.go4expert.com/articles/virtual-table-vptr-multiple-inheritance-t16616/    */

struct X
{

	X(int p) :fx(p)
	{}
	int fx;
};

struct Y
{

	Y(int p) :fy(p)
	{}
	int fy;
};

struct B : public virtual X, public Y
{
	B(int p):X(p-1),Y(p-2)
	{}
};

struct C : public virtual X, public Y
{
	C(int p) :X(p + 1), Y(p + 2)
	{}
};

class D :public B, public C
{
public:
	D(int p) :X(p + 3), B(p - 2), C(p)
	{

	}
};

int main()
{
	/*D*d = new D(5);
	B*b = d;
	C*c = d;*/


	




	D *p = new D(5);
	int *q = (int*)p;
	for (int i = 0; i < 10; i++)
	{
		cout << p[i];
	}

	//
	//cout << "object layout:\n";
	//cout << "vptr to base1  :" << *((int*)&obj + 0) << endl;
	//cout << "field of base1:" << *((int*)&obj + 1) << endl;
	//cout << "vptr to base2  :" << *((int*)&obj + 2) << endl;
	//cout << "vptr to base3  :" << *((int*)&obj + 3) << endl;
	////cout << "field of derive  :" << *((int*)&obj + 4) << endl << endl << endl;



	return 0;
}
