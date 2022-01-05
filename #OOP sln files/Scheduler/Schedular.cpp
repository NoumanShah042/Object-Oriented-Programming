#include"Schedular.h"
using namespace std;

Schedular::Schedular()
{
	capacity = 5;
	noOfTasks = 0;
	taskList = new Task [capacity]  ;

}
void Schedular::addTask(const Task & t)
{
	taskList[noOfTasks].updateDate(t.getDate());
	taskList[noOfTasks].updateTime(t.getTime());
	taskList[noOfTasks].updateMessage(t.getMessage());
	noOfTasks = noOfTasks + 1;
}

void Schedular::resize(int a)
{
	Schedular new1;

	delete [] new1.taskList;
	new1.taskList = nullptr;

	new1.taskList = new Task [a];
	new1.capacity = a;
	new1.noOfTasks = 0;
	for (int i = 0; i < noOfTasks; i++)
	{
		Task a = taskList[i];        //  as i have my own copy constructor for CString compiler use it instead of his own copy constructor that makes sallow copy hence we can copy one task to another easily   
	
		new1.addTask(a);
	}

	delete [] taskList;
	taskList = nullptr;
	taskList = new1.taskList;
	capacity = new1.capacity;
	noOfTasks = new1.noOfTasks;
}



void  Schedular::displayTask(const Date & d)
{
	for (int i = 0  ; i < noOfTasks  ;  i++)
	{
		Date a = taskList[i].getDate();

		if (a.getday() == d.getday() && a.getMonth() == d.getMonth() && a.getYear() == d.getYear())
		{
			taskList[i].displayTask();
			return;
		}
	}
}










