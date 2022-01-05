#include<iostream>
#include"Matrix.h"
using namespace std;

int main()
{
	Matrix a(3,3);

	int rows = a.getRows();
	int colm = a.getColumns();
	for (int i = 0 ; i < rows; i++)
	{
		for (int j = 0 ; j < colm; j++)
		{
			cin>>a.at(i, j);
		}

	}
	
	
	a.display();

	cout << a.isSymmetric();

}


