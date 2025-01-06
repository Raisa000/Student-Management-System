#include <iostream>
#include <string>
#include<conio.h>
using namespace std;

// Base class: Person
class Person {
protected:
    string name;
    int age;

public:
    // Constructor to initialize a Person
    Person(string name, int age) : name(name), age(age) {}

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
    Student(string name, int age, int studentID, float grade)
        : Person(name, age), studentID(studentID), grade(grade) {}

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
    Teacher(string name, int age, string subject)
        : Person(name, age), subject(subject) {}

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

int main() {
    // Create a StudentManagement object
    StudentManagement sm;

    // Create Students and Teachers
    Student* student1 = new Student("Noore Safa Raisa", 21, 23303428, 88.5);
    Student* student2 = new Student("Md. Hasibul Hasan", 22, 23303419, 92.0);
    Teacher* teacher1 = new Teacher("Tania Akter Mim", 31, "OOP in C++");

    // Add them to the management system
    sm.addPerson(student1);
    sm.addPerson(student2);
    sm.addPerson(teacher1);

    // Display details of all persons in the system
    cout << "All Person Details:" << endl;
    sm.displayAll();

    // Update a student's grade
    student1->updateGrade(95.0);

    // Display updated details of all persons
    cout << "\nUpdated Person Details:" << endl;
    sm.displayAll();

    getch();
}
