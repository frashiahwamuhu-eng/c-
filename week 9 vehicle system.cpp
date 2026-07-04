/*Program to compute vehicle system ,BCS-05-0007/2025,Frashiah Wamuhu*/
#include <iostream>
using namespace std;
class vehicle{
	public:
	//attributes
	string Brand;
	int yearofmanufacture;
	//member function
	void displayvehicle(){
		cout<<"The brand is:"<<Brand<<endl;
		cout<<"The year of manufacture is:"<<yearofmanufacture<<endl;
		
	}
	
};
class car:public vehicle{
	public:
	int numberofdoors;
	string enginecapacity;
	//member function
	void displaycar(){
		displayvehicle();
		cout<<"The number of doors are:"<<numberofdoors<<endl;
		cout <<"The engine capacity is"<<enginecapacity<<endl;
		
	}
};

int main(){
car obj;
cout<<"Enter the brand:";
cin>>obj.Brand;

cout<<"Enter the year of manufacturing:";
cin>> obj.yearofmanufacture;

cout<<"Enter the number of doors:";
cin>>obj.numberofdoors;

cout<<"Enter the engine capacity:";
cin>>obj.enginecapacity;

 obj.displaycar();


	return 0;
}
