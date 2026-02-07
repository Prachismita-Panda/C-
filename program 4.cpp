#include<iostream>
using namespace std;
class student{
	private:
		int roll;
		char name[50];
	public:
		void input(){
			
			cout<<"Enter roll number:";
			cin>>roll;
			cin.get();
			cout<<"Enter your name:";
			gets(name);
			
		}
		void output(){
			cout<<"Roll number="<<roll<<endl;
			cout<<"Name = "<<name<<endl;
		}
		
};

int main(){
	student s;
	s.input();
	s.output();
	return 0;
}

