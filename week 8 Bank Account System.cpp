/*program to compute Constructors and Destructors,frashiah wamuhu,BCS-05-0007/2025
*/
#include <iostream>
#include <string>
using namespace std;
class BankAccount{
public:
//attributes
string Accountname;
int Accountnumber;
double  Accountbalance;


//constructor
	BankAccount(string m,int n,double o){
    Accountname = m;
    Accountnumber = n;
    Accountbalance = o;
  		
		cout<<"Account successfully created"<<endl;
	}
	//member function
	void displayAccount(){
		cout<<"Account details:"<<endl;
		cout<<"Account holder name:"<<Accountname<<endl;
		cout<<"Account number:"<<Accountnumber<<endl;
		cout<<"Account balance:"<<Accountbalance<<endl;
	}
	
	~BankAccount(){
		cout<<"Account closed successfully"<<endl;
	}
};
int main(){
	//object of the class
	BankAccount account1("John Doe", 123456, 50000.00);
	
	//account details 
	account1.displayAccount();
	
	return 0;
}

