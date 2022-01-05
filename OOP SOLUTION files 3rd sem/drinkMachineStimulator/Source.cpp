#include<iostream>
using namespace std;

enum status
{
	checjk,uncheck

};

struct drinkMachine
{
	char drinkName[50];
	float drinkCost;
	int numberOfDrinksInMachine;

};

void print(drinkMachine  d[5])
{
	strcpy(d[0].drinkName, "cola");
	strcpy(d[1].drinkName, "Root Beer");
	strcpy(d[2].drinkName, "Lemon-Lime");
	strcpy(d[3].drinkName, "Grape-soda");
	strcpy(d[4].drinkName, "cream soda");

	for (int i = 0; i <5; i++)
	{
		cout << d[i].drinkName << endl;

	}

}


int main()
{
	drinkMachine d[5];
	

	print(d);
	strcpy(d[0].drinkName, "cola");
	cout << d[0].drinkName;
	//strcpy(d[0].drinkName, "cola");
	
	return 0;
}