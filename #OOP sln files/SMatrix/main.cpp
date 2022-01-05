#include<iostream>
#include"Matrix.h"
#include"SMatrix.h"
using namespace std;


int main()
{
	

	SMatrix  a(3);
	int order = a.getOrder();
	for (int i = 0; i < order; i++)
	{
		for (int j = 0; j < order; j++)
		{
			cin>>a.at(i, j);
		}
	}
	cout << endl;
	a.display();
	cout << endl;
	SMatrix  c=a.Transpose();
	c.display();
	cout << endl;
	a.display();
	return 0;
}