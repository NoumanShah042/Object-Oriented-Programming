#include<iostream>
using namespace std;






//main topic



class X
{

public:
	int x1 = 90,
		x2=100;
	
};



class A :virtual public  X
{

public:
	int a=70;


};


class B :virtual public  X
{

public:
	int b1 = 600;


};


class C : public  A, public  B
{

public:
	int c1 = 50;


};




int main()
{
	C obj;

	A*p=&obj;
	B*q = &obj;
	X*r = &obj;

	cout <<"A*p  "<< p<<endl;
	cout << "B*q " << q << endl;
	cout << "X*r  " << r << endl;


	cout << "\n (int*)&obj      " << ((int*)&obj) << endl;
	cout << "\n ((int*)&obj + 1)  " << ((int*)&obj + 1) << endl;
	cout << "\n ((int*)&obj + 2) " << ((int*)&obj + 2) << endl;
	cout << "\n ((int*)&obj + 3) " << ((int*)&obj + 3) << endl;
	cout << "\n ((int*)&obj + 4) " << ((int*)&obj + 4) << endl;
	cout << "\n ((int*)&obj + 5) " << ((int*)&obj + 5) << endl;
	cout << "\n ((int*)&obj + 6) " << ((int*)&obj + 6) << endl;
	
	//*((int*)&obj + 3) = 90;

	cout << endl << endl;
	cout << "\n *(int*)&obj      " << (*(int*)&obj) << endl;
	cout << "\n *((int*)&obj + 1)  " << *((int*)&obj + 1);
	cout << "\n *((int*)&obj + 2) " << *((int*)&obj + 2) ;
	cout << "\n *((int*)&obj + 3) " << *((int*)&obj + 3) ;
	cout << "\n *((int*)&obj + 4) " << *((int*)&obj + 4);
	cout << "\n *((int*)&obj + 5) " << *((int*)&obj + 5);
	cout << "\n *((int*)&obj + 6) " << *((int*)&obj + 6);
	//cout << "\n *((int*)&obj + 3) " << *((int*)&obj + 7);


	return 0;
}







// virtual inheritance    of x and A
/*
class X
{
public:
	int x1 = 90;
	int x2 = 9999;
};
class A :virtual public  X
{

public:
	int a=70;


};
int main()
{
	A obj;

	A*ptt = &obj;
	X*ptr = &obj;




	cout << "ptt   " << ptt << endl;
	cout << "ptr  " << ptr << endl;

	int * g = (int*)ptt;
	g++;
	g++;
	cout << *g << endl;
	cout << *((int*)ptr) << endl;;


	cout << *((int*)(*(int*)&obj)-2);


	cout << "\n (int*)&obj      " << ((int*)&obj) << endl;
	cout << "\n ((int*)&obj + 1)  " << ((int*)&obj + 1) << endl;
	cout << "\n ((int*)&obj + 2) " << ((int*)&obj + 2) << endl;
	cout << "\n ((int*)&obj + 3) " << ((int*)&obj + 3) << endl << endl;


	/*cout << *((int*)&obj);

	cout << endl;

	//X * p = &obj;
	//cout <<"X * p = &obj   " <<p;
	//cout << *((int*)p);



	//X* ptr = new A;
	//ptr->x1;

	//cout << "\nnouman   "<<*((int*)ptr);

cout << "\n *(int*)&obj      " << (*(int*)&obj) << endl;
cout << "\n *((int*)&obj + 1)  " << *((int*)&obj + 1) << endl;
cout << "\n *((int*)&obj + 2) " << *((int*)&obj + 2) << endl;
cout << "\n *((int*)&obj + 3) " << *((int*)&obj + 3) << endl;

//cout << "\n *((int*)&obj + 3) " << *((int*)&obj + 5) << endl;
//cout << "\n *((int*)&obj + 3) " << *((int*)&obj + 6) << endl;
////cout << "\n *((int*)&obj + 3) " << *((int*)&obj + 7) << endl;


return 0;
}

*/


//   access memeber in virtual inheritance
/*
/*
	X * p = &obj;
	cout << (p->x1 = 90000);;

	cout<<endl;
	((X*)(*(int*)&obj))->x2 = 90;
	cout << ((X*)(*(int*)&obj));
	cout << typeid(((X*)(*(int*)&obj))).name() << endl;
	cout<<((X*)(*(int*)&obj))->x2<<"         break";

	(*(int*)&obj)->x1;
	cout << &obj<<endl;
	*/


// diamond inheritance
/*

class Vehicle
{
public:
	int weight;
}
; class LandVehicle : public Vehicle
{


	void f()
	{
		weight=89;
	}

};
class WaterVehicle : public Vehicle
{ };
class AmphibiousVehicle : public LandVehicle, public WaterVehicle
{
public:
	AmphibiousVehicle()
	{
		LandVehicle::weight = 10;
		WaterVehicle::weight = 10;
	}
};

int main()
{
	AmphibiousVehicle obj;
	obj.WaterVehicle::weight;

	//obj.WaterVehicle::GetMaxLoad();   // Error

	return 0;
}

*/