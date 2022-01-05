



// multiple inheritance practice
/*


class A
{

public:
	int a;
	A()
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

class B
{


public:



	B(int a, int b, int c)
	{
		cout << "\nB::F";
	}

	B(int a, int b)
	{
		cout << "\nB::F";
	}
	B()
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

	using B::g;

public:



	C()
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
	A* p = &obj;
	B*q = &obj;
	C*r = &obj;

	sizeof(obj);




	//cout << p<<"   " << q << "   " << r;


	//obj.g();
	//obj.h();
	//obj.i();
	//cout<<obj.a;






}

*/

// protected inheritance
/*

class A
{

public:

	A()
	{
		cout << "\nA()";
	}

	void h()
	{
		cout << "\nA::h\n";
	}
	virtual void g()
	{
		cout << "\nA::g\n";
	}

};

class B:protected A
{


public:

	B()
	{
		cout << "\nB()";
	}

	B(int a, int b, int c)
	{
		cout << "\nB::F";
	}
	virtual void g()
	{

		A*p = new B;
		p->g();

		cout << "\nB::g\n";
	}



};



int main()
{
	B obj;
	A*p = (A*)&obj;

	//p->g();

	return 0;
}
*/

//   using keyword for ctor inheritance
/*
class A
{
public:
	A()
	{
		cout << "\nA()";
	}
	A(int a)
	{
		cout << "\nA(int a)";
	}
	A(int a, int b)
	{
		cout << "\nA(int a,int b)";
	}
	void h()
	{
		cout << "\nnouan\n";
	}

};

class B :public A
{
	using A::A;
public:
	int a;
	int b;


	B(int a, int b, int c)
	{
		cout << "\nB::F";
	}

	B(int a, int b)
	{
		cout << "\nB::F";
	}
	B()
	{
		cout << "\nB()";
	}

	void g()
	{
	}

};

int main()
{
	B obj2(1,2);







	int a = 9, b = 889;
	B obj;
	obj.A::f(a, b);
	obj.f();
	obj.A::f();





*/
