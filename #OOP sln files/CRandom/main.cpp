#include<iostream>
using namespace std;
#include"CRandom.h"
#include<ctime>

int getrand(int lower, int upper)
{
	
	return (rand() % (upper - lower + 1) + lower);
}

int main()
{
	srand(time(0));

	CRandom a;
	a.getRandomSequence(10, 15, 3);
	//for (int i = 0; i < 100; i++)
	//{
	//	cout << a.getRandomNumber(10, 15)<<endl;
	//}
	
	//a.getRandomSequence(10, 15, 6);

	/*Array a(5, 1, 2, 3, 4, 5);
	a[5] = 90;
	a[6] = 100;
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << ",";
	}*/
	return 0;
}