#include <iostream>
#include"JaggedArray.h"
using namespace std;


int main()
{
	JaggedAray c(3, 3, 4, 2);
	
	//cout<<c.getColumns(1);

	for (int i = 0; i < 3; i++)             //shi ha
	{
		cin >> c[0][i];
	}
	for (int i = 0; i < 4; i++)             //shi ha
	{
		cin >> c[1][i]; 
	}
	for (int i = 0; i < 2; i++)             //shi ha
	{
		cin >> c[2][i];
	}
	cout << endl;
	for (int i = 0; i < 3; i++)             //shi ha
	{
		
		cout << c[0][i];
	}cout << endl;
	for (int i = 0; i < 4; i++)             //shi ha
	{
		
		cout << c[1][i];
	}cout << endl;
	for (int i = 0; i < 2; i++)             //shi ha
	{
		cout << c[2][i];
	}
	cout << endl; cout << endl;



	JaggedAray d(c);
	for (int i = 0; i < 3; i++)             //shi ha
	{

		cout << d[0][i];
	}cout << endl;
	for (int i = 0; i < 4; i++)             //shi ha
	{

		cout << d[1][i];
	}cout << endl;
	for (int i = 0; i < 2; i++)             //shi ha
	{
		cout << d[2][i];
	}

/*
	Array a(5);
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		a.display(a);
	}*/

	
	return 0;
}