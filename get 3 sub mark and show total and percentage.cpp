#include<iostream>
using namespace std;
class student{
	private:
		int roll;
		char name[50];
	public:
		int sub1,sub2,sub3;
		int total;
		float per;
		void input(){
			cout<<"Enter roll number:";
			cin>>roll;
			cin.get();
			cout<<"Enter your name:";
			cin.getline(name,50);
		}
		void getSubMark(){
			cout<<"Enter mark of three sub:";
			cin>>sub1>>sub2>>sub3;
			total=sub1+sub2+sub3;
			per=float(total)/300*100;
		}
		void output(){
			cout<<"Roll number="<<roll<<endl;
			cout<<"Name = "<<name<<endl;
			cout<<"Total= "<<total<<endl;
			cout<<"Percentage = "<<per<<endl;	
		}
		
};

int main(){
	student s;
	s.input();
	s.getSubMark();
	s.output();
	return 0;
}

