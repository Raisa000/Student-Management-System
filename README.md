# Student Management System in C++

This project is a simple **Student Management System** implemented in C++ using object-oriented programming concepts such as inheritance, polymorphism, and encapsulation. It provides functionality to manage a small collection of students and teachers.

## Features
- **Person Base Class**: A generic class representing a person with basic attributes like name and age.
- **Student Derived Class**: Inherits from the `Person` class, adding attributes like `studentID` and `grade`. Also includes functionality to update grades.
- **Teacher Derived Class**: Inherits from the `Person` class, adding a specialization for the subject they teach.
- **StudentManagement Class**: Manages a collection of `Person` objects (both students and teachers), utilizing polymorphism to handle them uniformly.

## Key Functionalities
- Add up to 10 students or teachers to the management system.
- Display details of all students and teachers in the system.
- Update a student's grade.

## Code Structure
- **Base Class (`Person`)**: Contains common attributes (`name`, `age`) and a virtual function to display details.
- **Derived Classes (`Student`, `Teacher`)**:
  - `Student`: Adds `studentID` and `grade` attributes and overrides the `displayDetails` method.
  - `Teacher`: Adds `subject` attribute and overrides the `displayDetails` method.
- **StudentManagement Class**:
  - Stores an array of `Person*` pointers.
  - Provides functionality to add new `Person` objects and display their details.
- **Dynamic Memory Management**:
  - The system dynamically allocates memory for `Student` and `Teacher` objects and releases it in the destructor.

## How to Use
1. Clone or copy the code into your C++ development environment.
2. Compile and run the program.
3. The program initializes with a few hardcoded students and a teacher. It displays their details and demonstrates grade updates.

## Sample Output
### Initial Details:
```
All Person Details:
Name: Noore Safa Raisa
Age: 21
Student ID: 23303428
Grade: 88.5
----------------------------
Name: Md. Hasibul Hasan
Age: 22
Student ID: 23303419
Grade: 92
----------------------------
Name: Tania Akter Mim
Age: 31
Subject: OOP in C++
----------------------------
```

### After Updating Grade:
```
Updated Person Details:
Name: Noore Safa Raisa
Age: 21
Student ID: 23303428
Grade: 95
----------------------------
Name: Md. Hasibul Hasan
Age: 22
Student ID: 23303419
Grade: 92
----------------------------
Name: Tania Akter Mim
Age: 31
Subject: OOP in C++
----------------------------
```

## Requirements
- **Compiler**: A C++ compiler supporting C++11 or higher.
- **Libraries**: Standard C++ libraries and `conio.h` for `getch()` (optional).

## Notes
- The program is limited to a maximum of 10 `Person` objects.
- Error handling for input is minimal; the system assumes valid data is provided.
- The `getch()` function is used for pausing the console output and may need to be replaced or removed for non-Windows systems.

## License
This project is released under the MIT License. Feel free to use, modify, and distribute it as needed.

