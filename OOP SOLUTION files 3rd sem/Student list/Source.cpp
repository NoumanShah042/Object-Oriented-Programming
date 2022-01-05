#include<iostream>
using namespace std;


struct Date
{
	int day;
	int month;
	int year;

};
struct Student
{
	char name[100];
	char rollNo[15];
	float cgpa;
	Date dob;
};
struct StudentList
{
	Student * list;
	int noOfStudents;
	int capacity;


};


int compareDates(Date  d1, Date d2)
{
	if (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day)
		return 1;

	if (d1.year < d2.year)
		return 0;  
	else if (d1.year > d2.year)
		return -1;
	if (d1.month < d2.month)
		return 0;
	else if (d1.month > d2.month)
		return -1;
	if (d1.day < d2.day)
		return 0;
	else if (d1.day > d2.day)
		return -1;
	return -2;
}

void displayStudents(StudentList & ml, Date d, float cgpa)
{
	int i = 0;  
	int dc;
	for (int i = 0; i < ml.noOfStudents; i++)
	{
		dc = compareDates(ml.list[i].dob, d);
		if ((dc == -1 || dc == 1) && ml.list[i].cgpa >= cgpa)
			cout << ml.list[i].name << "\n";
	}
}


int main()
{
	StudentList sl;
	sl.capacity = 5;
	sl.list = new Student[5];
	Date d = { 12,12,1988 };
	Student s = { "Saad"," BCSF18A003",3.5,d };
	sl.list[0] = s;

	strcpy(s.name, "Kashif");
	strcpy(s.rollNo, "BSEF18M001");
	s.cgpa = 3.8;
	s.dob.day = 1;
	s.dob.month = 3;
	s.dob.year = 1990;
	sl.list[1] = s;


	strcpy(s.name, "Tayyab");
	strcpy(s.rollNo, "BSEF18A014");
	s.cgpa = 3.6;
	s.dob.day = 25;
	s.dob.month = 10;
	s.dob.year = 1997;
	sl.list[2] = s;


	strcpy(s.name, "Zafar");
	strcpy(s.rollNo, "BCSF18M001");
	s.cgpa = 3.6;
	s.dob.day = 25;
	s.dob.month = 10;
	s.dob.year = 1998;
	sl.list[3] = s;


	sl.noOfStudents = 4;
	displayStudents(sl, Date{ 1,1,1982 }, 3.1);
	return 0;
}
















