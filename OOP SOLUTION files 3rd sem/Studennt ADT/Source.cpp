#include<iostream>
using namespace std;


class Student 
{
	char rollNo[11];
	char name[100];
	int semester;
	float CGPA;


public:
	void setRollNo(const char * p)
	{
		
		strcpy(rollNo, p);
	}
	void setSemester(int s)
	{
		if (s >= 0)
		{
			semester = s;
		}
	}
	void setName(const char * p)
	{
		strcpy(name, p);
	}
	void setCGPA(float gp)
	{
		if (gp >= 0 && gp <= 4)
		{
			CGPA = gp;
		}
	}

	const char * getRollNo()
	{
		return (const char *)rollNo;

	}
	const char * getName()
	{
		return (const char *)name;
	}
	float getCGPA()
	{
		return CGPA;
	}
	int getSemester()
	{

		return semester;
	}


	bool isStudentDropOut()
	{
		if (((semester == 1) && ( CGPA < 1.5))  || ((semester != 1) && (CGPA < 1.7) ) )
		{ 
			return true ;
		}
		else
		{
			return false;
		}
	}    

};

int main()
{
	Student st;
	st.setRollNo("bcsf18M027");
	st.setSemester(2);
	st.setName("Nouman");
	st.setCGPA(1.5);

	//const char * p = st.getRollNo();
	cout << st.getRollNo()<<'\n';
	cout << st.getName() << '\n';
	cout << st.getCGPA() << '\n';
	cout << st.getSemester() << '\n' << '\n';

	cout << st.isStudentDropOut();

	



	return 0;
}