# Project4
A simple project to demonstrate Clean Code concepts

Contains 2 classes: 1- Task 2- ToDoList
1- Task
  Variables:
    - description (string)
    - completed (boolean)
  Fucntions:
    - setDescription   // Set the task description
    - getDescription   // Get the task description
    - markCompleted    // Mark the task as completed
    - isCompleted      // Check if the task is completed
    - toString         // Get a string representation of the task
2- ToDoList
	Variables:
    - tasks (vector<Task)
  Functions:
    - addTask                 // Add a new task to the list
	  - removeTask				      // Remove a task from the list by index
	  - markTaskCompleted		    // Mark a task as completed by index
	  - displayTasks	          // Display all tasks in the list
