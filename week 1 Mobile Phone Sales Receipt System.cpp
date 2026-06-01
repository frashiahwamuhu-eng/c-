/*program to compute Driving Test Result Evaluation System
Frashiah Wamuhu
BCS-05-0007/2025*/
#include <iostream>
using namespace std;
int main(){
	//variable declaration
	string studentname;
	int Theory_test_marks;
	 int Practical_test_marks;
	  
	  
	//prompt user to enter the details
	cout<<"Enter the name:"<<studentname<< "\n";
	cin>>studentname;
	
		cout<<"Enter the Theory_test_marks:"<<Theory_test_marks  << "\n";
	cin>>Theory_test_marks;
	
	
		cout<<"Enter the Practical_test_marks :"<<Practical_test_marks  << "\n";
	cin>>Practical_test_marks;
	
	
	
	//calculations
	double Average_Score= (Theory_test_marks +Practical_test_marks)/2;

	
	
	//enter the outputs
	 cout<<"The marks " << endl;
	 cout<<" student name"<<studentname << endl;
	 cout<<" theory marks"<<Theory_test_marks << endl ;
	 cout<<"practical marks "<<Practical_test_marks<< endl ;
	 cout<<"Average_Score"<<Average_Score<< endl ;
	
	
	//determine pass or fail
	if(Average_Score>=50){
		cout<<"Result:PASS"<<endl;
	}
	else{
		cout<<"Result:FAIL"<<endl;
	}
	return 0;
	
	
	
}
