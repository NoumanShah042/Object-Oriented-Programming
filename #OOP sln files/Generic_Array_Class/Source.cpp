#include<iostream>
using namespace std;
#include"Array.h"
#include"CString.h"
int main()
{

	Array<Array<int> > a;
	//Array<int> b;
	a.resize(3);
	
	for (int i = 0; i < 3; i++)
	{
		a[i].resize(3);
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
		
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout << endl;
	}



	/*a.display(a);
	cout << endl;;
	cout << endl;;
	Array<int> b;
	b.resize(3);

	
	for (int i = 0; i < 3; i++)
	{
		cin >> b[i];
	}

	b.display(b);


	cout << "\nbreak;\n";
	a = b;
	a.display(a);
	b.display(b);
*/
	/*for (int i = 0; i < 3; i++)
	{
		cout<< a[i]<<":";
	}*/
	



	return 0;
}