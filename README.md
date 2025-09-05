# Project4 - Clean Code ToDo List

A simple project to demonstrate **Clean Code** concepts using C++.

---

## 📌 Project Overview
This project implements a basic **To-Do List application** with two classes:  
- **Task**: Represents an individual task.  
- **ToDoList**: Manages a collection of tasks.  

It’s designed to highlight principles of clean, maintainable, and readable code.

---

## 🏗️ Classes and Their Responsibilities

### 1. Task
Represents a single to-do item.  
**Variables**
- `description` *(string)* → Task description  
- `completed` *(boolean)* → Status of the task  

**Functions**
- `setDescription` → Set the task description  
- `getDescription` → Get the task description  
- `markCompleted` → Mark the task as completed  
- `isCompleted` → Check if the task is completed  
- `toString` → Get a string representation of the task  

---

### 2. ToDoList
Represents a collection of tasks.  
**Variables**
- `tasks` *(vector<Task>)* → Stores all tasks  

**Functions**
- `addTask` → Add a new task to the list  
- `removeTask` → Remove a task from the list by index  
- `markTaskCompleted` → Mark a task as completed by index  
- `displayTasks` → Display all tasks in the list  
