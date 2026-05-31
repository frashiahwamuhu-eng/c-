/*program to compute savings withdrawal system (while loop)
Frashiah Wamuhu
BCS-05-0007/2025*/
#include <iostream>
using namespace std;

int main(){
	//  predifined  variables
	string correctUsername="Frashiah";
	string correctPassword ="2425";
	
	string username,password;
	
	
	  do {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword) {
            cout << "Access Granted" << endl;
        } else {
            cout << "Incorrect credentials, try again" << endl;
        }

    } while (username != correctUsername || password != correctPassword);

    return 0;
}

	
	
	
	
	
	
	
	
	


	
	
	
	
	
	
	
	

