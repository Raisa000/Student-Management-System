# Student Management System - C++ Project

## Overview
The **Student Management System** is a C++ application that allows managing student records. This project demonstrates the application of various Object-Oriented Programming (OOP) principles such as **Encapsulation**, **Inheritance**, **Polymorphism**, and **Abstraction** to create a well-structured and modular system. The system allows operations like adding, displaying, modifying, and deleting student records.

## Features
- **Add Student Records**: Allows the addition of student information (e.g., name, roll number, course, etc.).
- **Display Student Records**: View all students’ information stored in the system.
- **Modify Student Records**: Edit existing student details.
- **Delete Student Records**: Remove student records from the system.
- **Search Functionality**: Search for students by name, roll number, or course.
- **Student Classification**: Manage different types of students (e.g., undergraduate, graduate) using inheritance.

## OOP Concepts Used
- **Encapsulation**: Student details are encapsulated in classes to maintain the integrity of student data.
- **Inheritance**: Derived classes like `Undergraduate` and `Graduate` inherit common properties and functions from the base `Student` class.
- **Polymorphism**: Function overloading and overriding techniques are implemented for student management.
- **Abstraction**: The core logic of adding, modifying, and deleting records is abstracted away from the user interface (menu-driven options).

## Installation

### Prerequisites
- C++ Compiler (e.g., GCC, Clang)
- Text Editor/IDE (e.g., Visual Studio Code, Code::Blocks, or Eclipse)

### Steps to Set Up
1. Clone or download the repository to your local machine.
2. Open the project in your preferred IDE or text editor.
3. Compile the C++ source code using the appropriate compiler command.
   ```bash
   g++ -o StudentManagementSystem main.cpp
