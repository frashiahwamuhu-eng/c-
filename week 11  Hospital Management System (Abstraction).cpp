/*program to compute hospital management system ,BCS-05-0007/2025,Frashiah wamuhu*/

#include <iostream>
#include <string>
using namespace std;

// Abstract Class
class MedicalStaff
{
protected:
    string staffName;
    int staffID;

public:
    MedicalStaff(string name, int id)
    {
        staffName = name;
        staffID = id;
    }

    // Pure virtual function
    virtual void calculateSalary() = 0;

    // Non-virtual function
    void displayDetails()
    {
        cout << "Staff Name: " << staffName << endl;
        cout << "Staff ID: " << staffID << endl;
    }
};

// Derived Class - Doctor
class Doctor : public MedicalStaff
{
private:
    double basicSalary;
    double allowance;

public:
    Doctor(string name, int id, double basic, double allow)
        : MedicalStaff(name, id)
    {
        basicSalary = basic;
        allowance = allow;
    }

    void calculateSalary()
    {
        double salary = basicSalary + allowance;
        cout << "Doctor Salary: " << salary << endl;
    }
};

// Derived Class - Nurse
class Nurse : public MedicalStaff
{
private:
    double basicSalary;
    double overtimePay;

public:
    Nurse(string name, int id, double basic, double overtime)
        : MedicalStaff(name, id)
    {
        basicSalary = basic;
        overtimePay = overtime;
    }

    void calculateSalary()
    {
        double salary = basicSalary + overtimePay;
        cout << "Nurse Salary: " << salary << endl;
    }
};

int main()
{
    MedicalStaff *staff;

    Doctor d("John Kamau", 101, 80000, 15000);
    Nurse n("Mary Wanjiku", 202, 40000, 5000);

    staff = &d;
    staff->displayDetails();
    staff->calculateSalary();

    cout << endl;

    staff = &n;
    staff->displayDetails();
    staff->calculateSalary();

    return 0;
}
