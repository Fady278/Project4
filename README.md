# Project 4 - Clean Code Demo (C++)

A simple C++ project to demonstrate **Clean Code** concepts using classes and object-oriented design.

---

## 📌 Overview
This project implements a basic **To-Do List** application.  
It highlights the importance of:
- Meaningful names
- Small, single-purpose functions
- Separation of concerns
- Encapsulation of data
- Readability and maintainability

---

## 🏗️ Classes

### 1. **Task**
Represents a single to-do item.

**Variables**
- `std::string description` → The task description  
- `bool completed` → Whether the task is completed  

**Functions**
- `setDescription()` → Set the task description  
- `getDescription()` → Get the task description  
- `markCompleted()` → Mark the task as completed  
- `isCompleted()` → Check if the task is completed  
- `toString()` → Get a string representation of the task  

---

### 2. **ToDoList**
Manages a collection of tasks.

**Variables**
- `std::vector<Task> tasks` → A list of tasks  

**Functions**
- `addTask()` → Add a new task to the list  
- `removeTask()` → Remove a task from the list by index  
- `markTaskCompleted()` → Mark a task as completed by index  
- `displayTasks()` → Display all tasks in the list  

---

## 🚀 How to Compile & Run

### Using `g++`
```bash
g++ main.cpp Task.cpp ToDoList.cpp -o todo_app
./todo_app
