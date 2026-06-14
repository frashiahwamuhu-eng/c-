#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string admissionNumber;
    float feeBalance;

public:
    void inputStudent() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter admission number: ";
        cin >> admissionNumber;

        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    void makePayment() {
        float payment;

        cout << "Enter payment amount: ";
        cin >> payment;

        feeBalance = feeBalance - payment;
    }

    void displayStatus() {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: " << feeBalance << endl;
    }
};

int main() {
    Student student1;

    student1.inputStudent();
    student1.makePayment();
    student1.displayStatus();

    return 0;
}

