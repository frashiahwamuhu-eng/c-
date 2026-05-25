/* Frashiah Wamuhu,BCS-05-0007/2025,Program to compute the scholarships*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variable declarations
    string studentName;
    double marks;
    double attendance;
    string scholarshipStatus;

    // 1. Prompting the user for input
    cout << "Enter student name: ";
    getline(cin, studentName); // Use getline to allow spaces in names

    cout << "Enter exam marks (0-100): ";
    cin >> marks;

    cout << "Enter attendance percentage (0-100): ";
    cin >> attendance;

    // 2. Nested if statements to determine scholarship eligibility
    if (marks >= 70) {
        // Nested evaluation for marks 70 or above
        if (attendance >= 80) {
            scholarshipStatus = "Full Scholarship";
        } else {
            scholarshipStatus = "Partial Scholarship";
        }
    } 
    else if (marks >= 50 && marks <= 69) {
        // Nested evaluation for marks 50 to 69
        if (attendance >= 85) {
            scholarshipStatus = "Partial Scholarship";
        } else {
            scholarshipStatus = "No Scholarship";
        }
    } 
    else {
        // Evaluation for marks below 50
        scholarshipStatus = "No Scholarship";
    }

    // 3. Displaying the student name and scholarship status
    cout << "\n-----------------------------------" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Scholarship Status: " << scholarshipStatus << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}
