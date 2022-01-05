#ifndef TASK_H
#define TASK_H

#include"Date.h"
#include"CString.h"
#include"Time.h"

class Task
{
	Date taskDate;
	Time taskTime;
	CString taskMsg;

public:
	Task();
	
	Task(const Date & d, const Time & t, const CString & m);
	//call as   Task t1(   Date(1, 1, 2018) ,   Time(12, 12, 12)  ,  CString("Nouman")   ); cout << endl;     
	

	void setTask(const Date & d, const Time & t, const CString & m);
	//   call as   t1.setTask(Date(2, 1, 2018), Time(1, 12, 12), CString("Syed"));
	void updateDate(const Date & nd);  // call as  t1.updateMessage("rehman");
	void updateTime(const Time & nt);
	void updateMessage(const CString & m);
	Date getDate() const;
	Time getTime() const;
	CString getMessage() const;

	void displayTask();
	

};



#endif

