#include<iostream>
using namespace std;

int main()
{
	long long int num;
	
	long long int fact = 1;
	cout << "enter num :";
	cin  >>num;

	while(num != 1)
	{
		fact = fact * num;

		num = num - 1;

	}

	cout <<endl<<"fact of num is "<< fact;
	

	return 0;







}