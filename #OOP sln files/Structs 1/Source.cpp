#include<iostream>
using namespace std;


struct student 
{
	char name [10];
	int age;
	float gpa;

};


struct GradeInfo
{
	int a;
	int * testScore = new int[5]{ 0,2,3,4,5 };
	float avg;

};


int main()
{
	GradeInfo std1;
	
	//cout << *(std1.testScore+0)<<endl;
	//cout << std1.testScore[0] << endl;
	GradeInfo * ptr = &std1;
	cout <<( &std1)<<":"<<ptr;
	//cout << *(ptr->testScore+0); 
	//cout << *(*ptr).testScore + 1;
	//cout<<
	//student st[3];

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "enetr Name:";
	//	cin.getline(st[i].name, 10);
	//	cout << "enetr age:";
	//	cin >> st[i].age;
	//	cout << "enetr gpa:";
	//	cin >> st[i].gpa;
	//	cout << endl;
	//	cin.ignore();
	//	
	//}
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "name :" << st[i].name << endl;
	//	cout << "age :" << st[i].age << endl;
	//	cout << "gpa :" << st[i].gpa << endl;
	//}

	return 0;

}


