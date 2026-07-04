/*program to compute the employee data protection system,Frashiah Wamuhu BCS-05-0007/2025*/
#include <iostream>
using namespace std;
class Employee{
	private:
		//data members
		string Employeename;
		int EmployeeID;
		float Bsalary;
		float Netsalary;
		public:
		setEmployeeDetails(){
			cout<<"Enter the Employee name:"<<endl;
			getline(cin,Employeename);
				cout<<"Enter the Employee ID:"<<endl;
				cin>>EmployeeID;
					cout<<"Enter the Basic salary"<<endl;
					cin>>Bsalary;
					
		}	
		calculateSalary(){
			return Netsalary=Bsalary+0.10*Bsalary;
		}
		displayEmployeeDetails(){
			cout<<"The employee details are: \n";
			cout<<"The Employee name is: "<<Employeename;
			cout<<"The Employee ID is:"<<EmployeeID ;
			cout<<" The Basic salary is:"<<Bsalary ;
			cout<<" The  Net salary is:"<<Netsalary;
		}
		
};
int main(){
	Employee emp;
	emp.setEmployeeDetails();
	emp.calculateSalary();
	emp.displayEmployeeDetails();
	
	return 0;
}
