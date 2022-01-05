#include<iostream>
using namespace std;



struct Student
{
	char rollNo[11];
	int semesterNumber;
	char name[100];
	char subjects[5][81];
	float subjectsMarks[5];
	float creditHours[5];
};

void inputStudent(Student & s)
{
	cout << "Enter Roll # :";
	cin.getline(s.rollNo, 11);

	cout << "Semester Number :";
	cin >> s.semesterNumber;
	cin.ignore();
	cout << "eneter Name :";
	cin.getline( s.name,100);
	//cin.ignore();
	for (int i = 0; i < 5; i++)
	{
		cout << "enter subject :"<<'\n';
		cin .getline( s.subjects[i],81);
		cout << "enter subject marks :" <<'\n';
		cin >> s.subjectsMarks[i];
		cout << "enter subject creditHours :" << '\n';
		cin >> s.creditHours[i];
		cin.ignore();
	}

}


float findGRade( float marks )
{
	float gradePoint;
	//char grade[2];
	//int i = 0;

	if (marks >= 85)
	{
		//grade[0] = 'A';
		gradePoint = 4;
	}
	else if (marks >= 80)
	{
		//grade[0] = '-';
		gradePoint = 3.7 ;
	}
	else if (marks >= 75)
	{
		//grade[0] = '-';
		gradePoint = 3.3;
	}
	else if (marks >= 70)
	{
		//grade[0] = '-';
		gradePoint = 3;
	}
	else if (marks >=65 )
	{
		//grade[0] = '-';
		gradePoint = 2.7;
	}
	else if (marks >=61 )
	{
		//grade[0] = '-';
		gradePoint = 2.3;
	}
	else if (marks >=58 )
	{
		//grade[0] = '-';
		gradePoint = 2;
	}
	else if (marks >= 55 )
	{
		//grade[0] = '-';
		gradePoint = 1.7;
	}
	else if (marks >= 50 )
	{
		//grade[0] = '-';
		gradePoint =1 ;
	}
	else 
	{
		//grade[0] = '-';
		gradePoint = 0;
	}
	return gradePoint;
}

float calculateGPA(Student s)
{
	float gpa;
	float gradePoint[5];
	for (int i = 0; i < 5; i++)
	{
		gradePoint[i] = findGRade(s.subjectsMarks[i]);
	}

	float multipicationOFCeditHOursAndGade[5];
	for (int i = 0; i < 5; i++)
	{
		multipicationOFCeditHOursAndGade[i] = s.creditHours[i]*gradePoint[i];
	}
	float numerator=0;
	for (int i = 0 ; i < 5 ; i++)
	{
		numerator = multipicationOFCeditHOursAndGade[i] + numerator;

	}

	float totalCreditHours=0;
	for (int i = 0; i < 5; i++)
	{
		totalCreditHours = s.creditHours[i] + totalCreditHours;

	}

	return (numerator / totalCreditHours);
}

bool findGreaterNumber(float a, float b)
{
	if (a > b)
	{
		return true;
	}
	else
	{
		return false;
	}

}



const char  * const getSubjectNameWithHighestGrade(Student s)
{
	int indexwithHighGrade=0;
	
	for (int i = 0; i<5; i++)
	{
		indexwithHighGrade = (findGreaterNumber(s.subjectsMarks[i], s.subjectsMarks[i + 1]) ? i : (i + 1)  )  ;
           
	}
	cout << indexwithHighGrade;
	return  s.subjects[indexwithHighGrade];

}




Student GetHigherGPAsStudent(Student s1, Student s2)
{
	
	

	return findGreaterNumber(calculateGPA(s1), calculateGPA(s2)) ? s1 : s2;

}

int main()
{

	Student s1,s2;
	inputStudent(s1);
	//cout<<findGRade(83)<<endl;
	//cout<<calculateGPA(s1);
	cout << getSubjectNameWithHighestGrade(s1);

}