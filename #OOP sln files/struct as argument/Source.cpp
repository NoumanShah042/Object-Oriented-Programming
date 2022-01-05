#include<iostream>
using namespace std;
void fun(struct student * std);
void fun2(struct student std);

struct student
{
	char name[10];
	int age;
	float gpa;

};

int main()
{
	student stu;

	cout << "enetr Name:";
	cin.getline(stu.name, 10);
	cout << "enetr age:";
	cin >> stu.age;
	cout << "enetr gpa:";
	cin >> stu.gpa;
	cout << endl;

	fun2(stu);
	fun(&stu);

	
	return 0;

}

void fun(student * std)
{
	cout << "name :" << std->name << endl;
	cout << "age :" << std->age << endl;
	cout << "gpa :" << std->gpa << endl;


}


void fun2(struct student std)
{
	cout << "name :" << std.name << endl;
	cout << "age :" << std.age << endl;
	cout << "gpa :" << std.gpa << endl;
}