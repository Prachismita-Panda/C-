#include<iostream>
using namespace std;
class student{
	private:
		int roll,total,sub1,sub2,sub3;
		float per;
		char name[50];
			void calculate(){
			total=sub1+sub2+sub3;
			per=float(total)/300*100;
		}
		
	public:
		void input(){
			cout<<"Enter roll number:";
			cin>>roll;
			cin.get();
			cout<<"Enter name:";
			cin.getline(name,50);
			cout<<"Enter mark of three subs:";
			cin>>sub1>>sub2>>sub3;
		}
	
		void output(){
			calculate();
			cout<<"Name= "<<name<<endl;
			cout<<"Roll= "<<roll<<endl;
			cout<<"Total= "<<total<<endl;
			cout<<"Percebntage = "<<per<<endl;
			
		}
};

int main(){
	student s;
	s.input();
	s.output();
	
	return 0;
}
