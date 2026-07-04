/* A program to compute School Management System
   BCS-05-0007/2025
   Frashiah Wamuhu
*/

#include <iostream>
using namespace std;

// Base class
class Person {
public:
    // Attributes
    string name;
    int age;

    // Member function
    void displayPerson() {
        cout << "The Name is: " << name << endl;
        cout << "The Age is: " << age << endl;
    }
};

// Derived class
class Student : public Person {
public:
    // Attributes
    int admission_number;
    int class1;

    // Member function
    void displayStudent() {
        displayPerson();
        cout << "The Admission Number is: " << admission_number << endl;
        cout << "The Class is: " << class1 << endl;
    }
};

int main() {
    // Create object
    Student stu;

    // Input details
    cout << "Enter the name: ";
    getline(cin, stu.name);

    cout << "Enter the age: ";
    cin >> stu.age;

    cout << "Enter the admission number: ";
    cin >> stu.admission_number;

    cout << "Enter the class: ";
    cin >> stu.class1;

    // Display details
    cout << "\nStudent Details" << endl;
    stu.displayStudent();

    return 0;
}
