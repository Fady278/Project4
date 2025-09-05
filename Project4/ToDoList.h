#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Task.h"
using namespace std;

class ToDoList
{
private:
	vector<Task> tasks;
public:
	ToDoList();
	void addTask(const string& description);// Add a new task to the list
	void removeTask(int index);				// Remove a task from the list by index
	void markTaskCompleted(int index);		// Mark a task as completed by index
	void displayTasks() const;				// Display all tasks in the list
};

