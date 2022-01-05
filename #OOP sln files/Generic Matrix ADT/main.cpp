#include<iostream>
#include"Matrix.h"
#include"CString.h"
using namespace std;


int main()
{
	
	Matrix<CString>  a(2,2);
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> a.at(i, j);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout<< a.at(i, j)<<" ";
		}
		cout << endl;
	}
	/*
	for (int i = 0; i < order; i++)
	{
		for (int j = 0; j < order; j++)
		{
			cin>>a.at(i, j);
		}
	}
	*/
	return 0;
}