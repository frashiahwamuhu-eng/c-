/*program to compute the  Student Fee Security System (Encapsulation) ,Frashiah Wamuhu BCS-05-0007/2025*/
#include <iostream>
using namespace std;
class Student{
	private:
		//data members
		string studentname;
		string admissionnumber;
		float feebalance;
		public:
			void inputStudentData(){
				cout<<"Enter the student name:"<<endl;
				getline(cin,studentname);
				
				cout<<"Enter the admission number :"<<endl;
				cin >>admissionnumber;
				
				cout<<"Enter the fee balance :"<<endl;
				cin>>feebalance;
				
			}
			
		   void	makePayment(float payment){
				feebalance-=payment;
				cout<<"The updated fee balance is:"<<feebalance<<endl;
			}
		   void	 displayStatus() {
				cout <<"The student details are:"<<endl;
				cout<<"The student name is:"<<studentname<<endl;
				cout<<"The admission number is:"<<admissionnumber<<endl;
				cout<<"The remaining fee balance is:"<<feebalance<<endl;
				
			}	
};
             int main(){
             Student stu;
             float payment;
             stu.inputStudentData();
             cout<<"Enter payment:";
             cin>>payment;
            
             stu.makePayment(payment);
              stu.displayStatus() ;
			 
			 
			 	return 0;
			 }
