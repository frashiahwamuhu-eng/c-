/*PROGRAM TO COMPUTE THE LIBRARY MANAGEMENT SYSTEM,BCS-05-0007/2025,Frashiah Wamuhu*/
#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copiesAvailable;

public:
    void inputDetails() {
        cout << "Enter book title: ";
        cin >> title;

        cout << "Enter author name: ";
        cin >> author;

        cout << "Enter number of copies available: ";
        cin >> copiesAvailable;
    }

    void borrowBook() {
        if (copiesAvailable > 0) {
            copiesAvailable--;
            cout << "Book borrowed successfully." << endl;
        } else {
            cout << "No copies available." << endl;
        }
    }

    void displayDetails() {
        cout << "\nBook Details" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << copiesAvailable << endl;
    }
};

int main() {
    Book book1;

    book1.inputDetails();
    book1.borrowBook();
    book1.displayDetails();

    return 0;
}
