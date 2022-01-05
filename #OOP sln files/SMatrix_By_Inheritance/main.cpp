#include<iostream>
#include"SMatrix.h"
using namespace std;

SMatrix f()
{
	SMatrix  a(3);
	int order = a.getOrder();
	for (int i = 0; i < order; i++)
	{
		for (int j = 0; j < order; j++)
		{
			cin >> a.at(i, j);
		}
	}

	cout << endl;
	a.display();

	return a;
}
int main()
{
	/*
	SMatrix  a(3);
	int order = a.getOrder();
	for (int i = 0; i < order; i++)
	{
		for (int j = 0; j < order; j++)
		{
			cin >> a.at(i, j);
		}
	}

	cout << endl;
	a.display();
*/
	
	SMatrix  b(3);
	int order1 = b.getOrder();
	for (int i = 0; i < order1; i++)
	{
		for (int j = 0; j < order1; j++)
		{
			cin >> b.at(i, j);
		}
	}
	
	b.display();
	cout << endl;

	b = f();
	b.display();


	////b = a;
	////b.display();

	//SMatrix  c(a+b);
	//c.display();
	//cout << endl;

	//SMatrix  c(a.Transpose());
	//c.display();
	//cout << endl;
	//a.display();

	return 0;
}