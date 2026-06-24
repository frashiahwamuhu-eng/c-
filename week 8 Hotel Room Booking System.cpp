/*Hotel Room Booking System,Frashiah Wamuhu,BCS-05-0007/2025*/
#include <iostream>
# include <string>
using namespace std;

class  RoomBooking{
	public:
    string Guestname;
    int Roomnumber;
    int daysbooked;
     
     //constructor
     RoomBooking (string m,int n,int o){
     	Guestname=m;
     	Roomnumber=n;
     	daysbooked=o;
     	cout<<"Room booking confirmed"<<endl;
	 }
	 //member function 
	 void displayBooking(){
	 	cout<<"Booking details:"<<endl;
	 	cout<<"The Guest name is:"<<Guestname<<endl;
	 	cout<<"The Room number is:"<<Roomnumber<<endl;
	 	cout<<"The Number of days booked is:"<<daysbooked<<endl;
	 }
	 
	 //destructor
	 ~RoomBooking(){
	 	cout<< "Booking ended, room released"<<endl;
	 }
	};
	int main(){
		//create an object
		RoomBooking room("JulesMakena",14,2);
		//booking details
		room.displayBooking();
	}

