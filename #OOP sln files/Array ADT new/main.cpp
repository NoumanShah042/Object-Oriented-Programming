#include <iostream>
#include<stdarg.h>
using namespace std;
#include"Array.h"



Array f()
{
	Array x(3);
	cout << &x << endl;
	return x;
}

int main()
{

	//Array z(f()); cout << "\nNouman\n";
	Array z(10,2,3,333,3,34,34,34,3,4,3,3,4);
	z.display(z);


	//Array a(5);
   
	//for (int i = 0 ; i <a.getCapacity(); i++)
	//{
	//	cin >> a.getSet(i);
	//}
	//a.display(a);

	//a.resize(4); cout << "jshdjsd";
	////cout<< a.getCapacity()<<endl;
	//a.display(a);
	/*for (int i = 0; i < size1; i++)
	{
		cout<< a.getSet(i)<<",";
	}*/
	/*

	cout << endl;




	

*/






//	
	//f(a);

//	cout << endl;
////	cout << "b array"; cout << endl;
//	Array b=a;
//	Array z = b;
//	
//
//	cout << "contents of b " << endl;
//	cout<<b.getCapacity(); cout << endl;
//	for (int i = 0; i < b.getCapacity(); i++)
//	{
//		cout << b.getSet(i) << ",";
//	}
//	cout << endl;
//	cout << "contents of z " << endl;
//	cout << z.getCapacity(); cout << endl;
//	for (int i = 0; i < z.getCapacity(); i++)
//	{
//		cout << z.getSet(i) << ",";
//	}
//	cout << endl;
//
	return 0;
}