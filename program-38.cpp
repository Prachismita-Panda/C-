#include<iostream>
using namespace std;
class address{
	protected:
		int pin;
		char city[30],state[20];
	public:
		void getAddress(){
		
			cout<<"Enter name of the city: ";
			cin>>city;
			cout<<"Enter name of state:";
			cin>>state;
			cout<<"Enter pincode:";
			cin>>pin;
		}
		void showAddress(){
			
			cout<<"City= "<<city<<endl;
			cout<<"State= "<<state<<endl;
			cout<<"Pincode= "<<pin<<endl;
		}
};

class student:public address{
	private:
		int roll;
		char name[50];
	public:
		void getData(){
			cout<<"Enter roll:";
			cin>>roll;
			cin.get();
			cout<<"Enter name:";
			cin.getline(name,50);
			getAddress();
		}
		void showData(){
			cout<<"Name= "<<name<<endl;
			cout<<"Roll= "<<roll<<endl;
			showAddress();
		}
};
class teacher:public address{
	private:
		char name[50],sub[10];
	public:
		void getValue(){
			cout<<"Enter name:";
			cin>>name;
			cin.get();
			cout<<"Enter sub name:";
			cin.getline(sub,10) ;
			getAddress();
		}
		void  showValue(){
			cout<<"Name= "<<name<<endl;
			cout<<"Subject= "<<sub<<endl;
			showAddress();
		}
};
int main(){
	student obj1;
	teacher obj2;
	obj1.getData();
	obj2.getValue();
	obj1.showData();
	obj2.showValue();
}
