#include<iostream>
using namespace std;
class student{
	protected:
		int roll;
		char name[50];
	public:
		void getData(){
			cout<<"Enter roll of the student:";
			cin>>roll;
			cin.get();
			cout<<"Enter name of the student:";
			cin.getline(name,50);
		}
		void showData(){
			cout<<"The name of the student: "<<name<<endl;
			cout<<"Roll no = "<<roll<<endl;
		}
};

class address:public student{
	
	protected:
		char city[20],state[20];
		int pin;
	public:
		void getAddress(){
			getData();
			cout<<"Enter name of your city:";
			cin>>city;
			cout<<"Enter name of your state:";
			cin>>state;
			cout<<"Enter the pin code:";
			cin>>pin;
		}
		void showAddress(){
			showData();
			cout<<"The Address of the student is:"<<endl;
			cout<<"City: "<<city<<endl;
			cout<<"State: "<<state<<endl;
			cout<<"Pincode: "<<pin<<endl;
		}
	
};
class mark:public address{
	private:
		int sub1,sub2,sub3,total;
		float per;
		
	public:
		void getMark(){
			getAddress();
			cout<<"Enter Three different subject marks:";
			cin>>sub1>>sub2>>sub3;
			
			total= sub1+sub2+sub3;
			per = float(total)/300*100;	
		}	
		void showMark(){
			showAddress();
			cout<<"The total mark secured by the student is:"<<total<<endl;
			cout<<"Percentage Secured "<<per<<"%"<<endl;
		}
};

int main(){
	
	mark obj;
	obj.getMark();
	obj.showMark();
	return 0;
}
