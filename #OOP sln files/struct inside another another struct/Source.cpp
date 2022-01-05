#include<iostream>
using namespace std;

struct Address
{
	char city[30];
	char country[50];
	int streetNo;     char block[30];
	char colony[100];
};
struct Phone
{
	int intlCode;
	int cityCode;
	int phoneNo;
};
struct Student
{
	char rollNo[15];   
	char name[40];    
	Address ads; 

	
	Phone ph;
};
int main()
{
	Student std[5];
	std[0].ph.intlCode = 92;
	(std[0].ph).cityCode = 43;
	(std[0].ph).phoneNo = 4347657;

	
	//Address ad;

	//cin.ignore();
	strcpy(std[0].ads.city, "Lahore");
	

	//std[0].ads = ad;

	strcpy(std[0].rollNo, "121");
	strcpy(std[0].name, "nouman");
	
	cout << std[0].ads.city;
	
	
	return 0;
	
}
