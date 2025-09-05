#pragma once
#include <string>
using namespace std;

class Task
{
private:
	string description;
	bool completed;
public:
	Task(const string& desc);				// Constructor to initialize a task with a description

	void setDescription(const string& desc);// Set the task description
	string getDescription() const;			// Get the task description

	void markCompleted();					// Mark the task as completed
	bool isCompleted() const;				// Check if the task is completed
	string toString() const;				// Get a string representation of the task
};