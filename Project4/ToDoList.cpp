#include "ToDoList.h"

ToDoList::ToDoList() {}

void ToDoList::addTask(const string& description) { // Add a new task to the list
	tasks.emplace_back(description);
}

void ToDoList::removeTask(int index) {				// Remove a task from the list by index
	if (index >= 0 && index < tasks.size()) {
		tasks.erase(tasks.begin() + index);
	}
}

void ToDoList::markTaskCompleted(int index) {		// Mark a task as completed by index
	if (index >= 0 && index < tasks.size()) {
		tasks[index].markCompleted();
	}
}

void ToDoList::displayTasks() const {				// Display all tasks in the list
	for (size_t i = 0; i < tasks.size(); ++i) {
		cout << i + 1 << ". " << tasks[i].toString() << endl;
	}
}