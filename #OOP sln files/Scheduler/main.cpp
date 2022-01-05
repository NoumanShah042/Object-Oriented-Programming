#include<iostream>
#include"Date.h"
#include"CString.h"
#include "Schedular.h"
#include"Time.h"
#include"Task.h"
using namespace std;




//why write as  Task(const Date & d, const Time & t):taskDate(d),taskTime(t);
//why not as
//Task(Date & d, const Time & t) :taskDate(d), taskTime(t)
//{
//	//d.setDate(1, 1, 1);
//}cannot convert argument 1 from 'Date' to 'Date &'


int main()
{
	

	Schedular tasks;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	 Task t1(Date(1, 1, 2019), Time(12, 12, 12), CString("I am Nouman")); cout << endl;   
	// Task t2(t1); cout << endl; //  as i have my own copy constructor for CString compiler use it instead of his own copy constructor that makes sallow copy    
	 Task t2(Date(2, 1, 2019), Time(12, 12, 12), CString("I am in third semester")); cout << endl;  
	 Task t3(Date(3, 1, 2019), Time(12, 12, 12), CString("I like cricket")); cout << endl;
	 Task t4(Date(4, 1, 2019), Time(12, 12, 12), CString("I alive in Lahore")); cout << endl;
	 Task t5(Date(5, 1, 2019), Time(12, 12, 12), CString("I am happy")); cout << endl;
	 Task t6(Date(6, 1, 2019), Time(12, 12, 12), CString("I am a programmer")); cout << endl;
	 Task t7(Date(7, 1, 2019), Time(12, 12, 12), CString("I am hfjhdjhfjdfhdja programmer")); cout << endl;

	 cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;

	 tasks.addTask(t1);
	 tasks.addTask(t2);
	 tasks.addTask(t3);
	 tasks.addTask(t4);
	 tasks.addTask(t5);

	 tasks.resize(6);

	 tasks.addTask(t6);
	
	 tasks.displayTask(Date(6, 1, 2019));










	/*tasks.addTask(t1);
	tasks.addTask(t2);
	tasks.addTask(t3);*/
	/*tasks.displayTask(Date(1, 1, 2019));
	tasks.displayTask(Date(1, 1, 2019));
*/
	
	//Task t1(Date(1, 1, 2018),Time(12, 12, 12), CString("Noubjsdjhdjshdjsdhndssou")); cout << endl;     //,, CString("Nouman")
	//
	//t1.displayTask();

	//t1.setTask(Date(2, 1, 2018), Time(1, 12, 12), CString("Syed"));
	//t1.displayTask();
	//cout << endl;

	//t1.updateMessage("rehman");
	//t1.displayTask();
	//cout << endl;
	//t1.getMessage().display();
	//cout << endl;
	//
	/*
	CString a("Nouman");
	CString b("subFIEld");
	CString c(b);
	cout << a.getSize(); cout << endl;
	a.display(); cout << endl;
	a.resize(7); cout << a.getSize(); cout << endl;
	a.at(6) = 'N';
	a.at(7) = '\0';
	a.display(); cout << endl; cout << a.getSize(); cout << endl;
	a.concatEqual(b);
	cout << a.getSize();
	c.display(); cout << endl;
	cout << "nouman";
	cout<<c.getSize(); 
	Date a(1, 4, 2012);
	a.incDay(61);
	a.displayDate();*/
	return 0;
}