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
   ```
4. Run the compiled program:
   ```bash
   ./StudentManagementSystem
   ```

## Code Structure
The project is organized into the following files:

- **main.cpp**: The entry point of the program, containing the main menu and user interaction.
- **Student.h**: Header file containing the declaration of the base `Student` class.
- **Student.cpp**: Implementation of the `Student` class functions.
- **Undergraduate.h**: Header file for the derived `Undergraduate` class.
- **Undergraduate.cpp**: Implementation of the `Undergraduate` class functions.
- **Graduate.h**: Header file for the derived `Graduate` class.
- **Graduate.cpp**: Implementation of the `Graduate` class functions.
- **StudentManager.h**: Class to handle the student data and related operations like add, display, modify, and delete.
- **StudentManager.cpp**: Implementation of functions to manage student data.

## Usage

### Menu Options:
Once the program is executed, the following options will be presented to the user:

1. **Add Student**
   - Input student details like name, roll number, course, etc.
2. **Display All Students**
   - Displays all the students in the system.
3. **Modify Student Record**
   - Modify existing student information.
4. **Delete Student Record**
   - Delete a student by roll number.
5. **Search Student**
   - Search for students by name, roll number, or course.
6. **Exit**
   - Exit the program.

### Example:

```cpp
Add Student:
Name: John Doe
Roll Number: 123
Course: Computer Science
Type: Undergraduate
```

The system will add the student details and store them.

## Classes and Functions

### `Student` Class (Base Class)
- **Attributes**:
  - `name`: Name of the student.
  - `rollNumber`: Unique roll number for the student.
  - `course`: Course the student is enrolled in.
  
- **Methods**:
  - `setDetails()`: Set the details of a student.
  - `displayDetails()`: Display the details of the student.
  
### `Undergraduate` Class (Derived Class)
- **Additional Attributes**:
  - `year`: Year of study (e.g., 1st year, 2nd year).
  
- **Methods**:
  - `displayDetails()`: Override base class method to display additional information about the student.

### `Graduate` Class (Derived Class)
- **Additional Attributes**:
  - `thesisTitle`: Title of the graduate’s thesis.

- **Methods**:
  - `displayDetails()`: Override base class method to display additional information about the graduate.

### `StudentManager` Class
- **Methods**:
  - `addStudent()`: Add a new student to the system.
  - `displayStudents()`: Display all student records.
  - `modifyStudent()`: Modify an existing student’s details.
  - `deleteStudent()`: Delete a student from the system.
  - `searchStudent()`: Search for students by various criteria.

## Example of Code Snippet

```cpp
class Student {
protected:
    string name;
    int rollNumber;
    string course;

public:
    void setDetails(string n, int r, string c) {
        name = n;
        rollNumber = r;
        course = c;
    }

    virtual void displayDetails() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << ", Course: " << course << endl;
    }
};

class Undergraduate : public Student {
private:
    int year;

public:
    void setDetails(string n, int r, string c, int y) {
        Student::setDetails(n, r, c);
        year = y;
    }

    void displayDetails() override {
        Student::displayDetails();
        cout << "Year: " << year << endl;
    }
};
```

## Contributing

Feel free to fork this project and submit pull requests. If you find any issues or want to suggest improvements, please create an issue on GitHub.

## License
This project is open-source and available under the [MIT License](LICENSE).
```

---

You can copy and paste this into a `README.md` file for your project.
