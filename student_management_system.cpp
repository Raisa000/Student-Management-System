#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

// Base class: Person
class Person {
protected:
    string name;
    int age;

public:
    // Constructor to initialize a Person
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Virtual function to display person details
    virtual void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    virtual ~Person() {} // Virtual destructor
};

// Derived class: Student (Inherits from Person)
class Student : public Person {
private:
    int studentID;
    float grade;

public:
    // Constructor to initialize a Student
    Student(string name, int age, int studentID, float grade): Person(name, age) {

        this->studentID=studentID;
        this->grade=grade;

        }

    // Override displayDetails() for Student-specific details
    void displayDetails() override {
        Person::displayDetails(); // Call base class function
        cout << "Student ID: " << studentID << endl;
        cout << "Grade: " << grade << endl;
    }

    // Function to update student's grade
    void updateGrade(float newGrade) {
        grade = newGrade;
    }

    ~Student() {} // Destructor
};

// Derived class: Teacher (Inherits from Person)
class Teacher : public Person {
private:
    string subject;

public:
    // Constructor to initialize a Teacher
    Teacher(string name, int age, string subject): Person(name, age) {

    this->subject=subject;


    }

    // Override displayDetails() for Teacher-specific details
    void displayDetails() override {
        Person::displayDetails(); // Call base class function
        cout << "Subject: " << subject << endl;
    }

    ~Teacher() {} // Destructor
};

// Class to manage a collection of persons (Students and Teachers)
class StudentManagement {
private:
    Person* people[10];  // Array to store up to 10 persons (students or teachers)
    int currentCount = 0; // Keeps track of how many people are added

public:
    // Function to add a Person (Student or Teacher)
    void addPerson(Person* person) {
        if (currentCount < 10) {
            people[currentCount++] = person;
        } else {
            cout << "System is full. Cannot add more people." << endl;
        }
    }

    // Function to display details of all persons in the system
    void displayAll() {
        for (int i = 0; i < currentCount; i++) {
            people[i]->displayDetails(); // Polymorphism: Calls the correct displayDetails() for each person
            cout << "----------------------------" << endl;
        }
    }

    ~StudentManagement() {
        // Clean up dynamically allocated memory
        for (int i = 0; i < currentCount; i++) {
            delete people[i];
        }
    }
};

// Function for login authentication
bool login() {
    string username, password;
    const string validUsername = "IUBAT";
    const string validPassword = "123";

    cout << "===== Login =====" << endl;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (username == validUsername && password == validPassword) {
        cout << "Login successful!" << endl;
        return true;
    } 
    else {
        cout << "Access denied!" << endl;
        return false;
    }
}

// Function to display the menu
void displayMenu() {
    cout << "\n===== Menu =====" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Add Teacher" << endl;
    cout << "3. Display All" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    // Login authentication
    if (!login()) {
        getch();
        return 0;
    }

    // Create a StudentManagement object
    StudentManagement sm;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        if (choice == 1) {
            // Add a Student
            string name;
            int age, studentID;
            float grade;
            cout << "Enter Student Name: ";
            cin >> name;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Student ID: ";
            cin >> studentID;
            cout << "Enter Grade: ";
            cin >> grade;
            sm.addPerson(new Student(name, age, studentID, grade));
            cout << "Student added successfully!" << endl;
        } else if (choice == 2) {
            // Add a Teacher
            string name, subject;
            int age;
            cout << "Enter Teacher Name: ";
            cin >> name;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Subject: ";
            cin >> subject;
            sm.addPerson(new Teacher(name, age, subject));
            cout << "Teacher added successfully!" << endl;
        } else if (choice == 3) {
            // Display all persons
            cout << "All Person Details:" << endl;
            sm.displayAll();
        } else if (choice == 4) {
            // Exit
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    getch();
    return 0;
}
