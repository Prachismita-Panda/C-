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
class mark:public student{
	private:
		int sub1,sub2,sub3,total;
		float per;
		
	public:
		void getMark(){
			getData();
			cout<<"Enter Three different subject marks:";
			cin>>sub1>>sub2>>sub3;
			
			total= sub1+sub2+sub3;
			per = float(total)/300*100;	
		}	
		void showMark(){
			showData();
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
