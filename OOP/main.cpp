#include <iostream>
#include"JaggedArray.h"
#include"Array.h"
using namespace std;


int main()
{

	/*Array a(5);
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];

	}
	a.display(a);*/

	JaggedAray c(3,2,2,2);

	//cout<<c.getColumns(1);
	int cap= c[0].getCapacity();
	for (int i = 0; i < cap; i++)             //array 1
	{
		cin >> c[0][i];
	}
	cap = c[1].getCapacity();
	for (int i = 0; i < cap; i++)             //array 2
	{
		cin >> c[1][i];
	}
	c[2].getCapacity();
	for (int i = 0; i <cap; i++)             //array 3
	{
		cin >> c[2][i];
	}
	cout << endl;

	/*
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
	*/
	c[0].display(c[0]);
	c[1].display(c[1]);
	c[2].display(c[2]);

	cout << endl; cout << endl;



	//JaggedAray d(c);
	//for (int i = 0; i < 3; i++)             //shi ha
	//{

	//	cout << d[0][i];
	//}cout << endl;
	//for (int i = 0; i < 4; i++)             //shi ha
	//{

	//	cout << d[1][i];
	//}cout << endl;
	//for (int i = 0; i < 2; i++)             //shi ha
	//{
	//	cout << d[2][i];
	//}




	return 0;
}