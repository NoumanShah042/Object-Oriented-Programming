#include <iostream>
using namespace std;



struct   FullName
{
	char firstName[50];
	char middleName[50];
	char lastName[50];

};


int main()
{
	
	FullName info;
	strcpy(info.firstName, "Syed");
	strcpy(info.middleName, "Nouman");
	strcpy(info.lastName, "Rehman");

	cout << info.firstName << " " << info.middleName << " " << info.lastName << endl;
	


	return 0;
}