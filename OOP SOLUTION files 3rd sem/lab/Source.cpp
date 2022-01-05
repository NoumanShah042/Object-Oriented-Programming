#include<iostream>
using namespace std;
char * convertnumbertoString(int num);
int calRightMostDigit(int num);

int calLen(int num);

int main()
{

char * str = convertnumbertoString(410);
	cout << str;
	delete[]str;
	return 0;
	
	
}

int calRightMostDigit(int num)
{
	int  quot = num;
	int len = calLen(num);
	while(len!=1)
	{
		quot = quot / 10;
		len = len - 1;
	}

	return quot;
}
int calLen(int num)
{
	int quot = num;
	int count = 0;
	while (quot != 0)
	{
		quot = quot / 10;
		count = count + 1;
	}
	return count;
}


char * convertnumbertoString(int num)
{
	char * p = new char [3];

	for (int i=0 ;calRightMostDigit(num) != 0 ;i++)
	{
		p[i] = (char) calRightMostDigit(num);
		int a = 1;
		for (int j = 0; j < calRightMostDigit(num); j++)
		{
			a = a * 10;
		}

		num = num / (a * calRightMostDigit(num));


	}
	return p;


}

