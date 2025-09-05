#include "ToDoList.h"

int main() {
	ToDoList todoList;
	while (true) {
		cout << "\nTo-Do List Menu:\n";
		cout << "1. Add Task\n";
		cout << "2. Remove Task\n";
		cout << "3. Mark Task as Completed\n";
		cout << "4. Display Tasks\n";
		cout << "5. Exit\n";
		cout << "Choose an option: ";
		
		int choice;
		cin >> choice;
		cin.ignore();

		if (choice == 1) {			// Add Task
			string description;
			cout << "Enter task description: ";
			getline(cin, description);
			todoList.addTask(description);
		}
		else if (choice == 2) {		// Remove Task
			int index;
			cout << "Enter task number to remove: ";
			cin >> index;
			todoList.removeTask(index - 1);
		}
		else if (choice == 3) {		// Mark Task as Completed
			int index;
			cout << "Enter task number to mark as completed: ";
			cin >> index;
			todoList.markTaskCompleted(index - 1);
		}
		else if (choice == 4) {		// Display Tasks
			todoList.displayTasks();
		}
		else if (choice == 5) {		// Exit
			break;
		}
		else {						// Invalid option
			cout << "Invalid option. Please try again.\n";
		}
		cout << '\n' << string(40, '-') << '\n';
	}
	return 0;
}