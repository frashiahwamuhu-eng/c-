/* Program to compute employee bonus system (for loop)
Frashiah Wamuhu
BCS-05-0007/2025*/
#include<iostream>
using namespace std;


int main() {
    string employeeName;
    double basicSalary, bonus, totalSalary;

    for (int i = 1; i <= 5; i++) {
        cout << "Employee " << i << endl;

        cout << "Enter employee name: ";
        cin >> employeeName;

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        // Calculate bonus and total salary
        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;

        // Display report
        cout << "Employee Report" << endl;
        cout << "Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    return 0;
}
