#include<iostream>
using namespace std;
class student{
	protected:
		int roll;
		char name[50];
	public:
		void getData(){
			cout<<"Enter roll:";
			cin>>roll;
			cin.get();
			cout<<"Enter name:";
			cin.getline(name,50);
		}
		void showData(){
			cout<<"Name= "<<name<<endl;
			cout<<"Roll= "<<roll<<endl;
		}
};
class mark{
	protected:
		int m1,m2,m3,total;
		float per;
	public:
		void getMark(){
			cout<<"Enter three different subjects marks: ";
			cin>>m1>>m2>>m3;
		}
		void calculate(){
			total = m1+m2+m3;
			per = float(total)/300*100;
		}
		void showMark(){
			cout<<"Total= "<<total<<endl;
			cout<<"Percentage= "<<per<<endl;
		}
};
class address:public student,public mark{
	private:
		int pin;
		char city[30],state[20];
	public:
		void getAddresss(){
			getData();
			getMark();
			cout<<"Enter name of the city: ";
			cin>>city;
			cout<<"Enter name of state:";
			cin>>state;
			cout<<"Enter pincode:";
			cin>>pin;
		}
		void showAddress(){
			showData();
			calculate();
			showMark();
			cout<<"City= "<<city<<endl;
			cout<<"State= "<<state<<endl;
			cout<<"Pincode= "<<pin<<endl;
		}
};

int main(){
	address obj;
	obj.getAddresss();
	obj.showAddress();
}
