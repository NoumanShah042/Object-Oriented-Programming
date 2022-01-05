#include<iostream>
#include"Task.h"
using namespace std;



//Task::


Task::Task(): taskDate(), taskTime(), taskMsg()
{}


Task::Task(const Date & d, const Time & t, const CString & m) :taskDate(d), taskTime(t), taskMsg(m)  //taskMsg(m)  : it first call copy constructor and then  destructor  for "m" execute 
{}                                                                                                   

void Task::setTask(const Date & d, const Time & t, const CString & m)
{
	taskDate = d;
	taskTime = t;
	//taskMsg = m;
	taskMsg.~CString();
	//taskMsg.resize(0);
	taskMsg.concatEqual(m);
	
}

void Task::updateDate(const Date & nd)
{
	taskDate = nd;
}
void Task::updateMessage(const CString & m)
{
	taskMsg.~CString();
	taskMsg.concatEqual(m);
}
void Task::updateTime(const Time & nt)
{
	taskTime = nt;
}
Date Task::getDate() const
{
	return taskDate;
}
Time Task::getTime() const
{
	return taskTime;
}
CString Task::getMessage() const
{
	return taskMsg;
}

void Task::displayTask()
{
	std::cout << "\n\n\n";
	taskDate.displayDate();
	std::cout << '\n';
	taskTime.printTwelveHourFormat();
	std::cout << '\n';
	taskMsg.display();
	std::cout <<"\n\n\n";
}
