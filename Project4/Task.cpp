#include "Task.h"

Task::Task(const string& desc) : description(desc), completed(false) {}	// Constructor to initialize a task with a description

string Task::getDescription() const {									// Get the task description
	return description; 
}

void Task::setDescription(const string& desc) {							// Set the task description
	description = desc; 
}

bool Task::isCompleted() const {										// Check if the task is completed
	return completed; 
}

void Task::markCompleted() {											// Mark the task as completed
	completed = true; 
}

string Task::toString() const {											// Get a string representation of the task
	return (completed ? "[Finished] " : "[X] ") + description;
}