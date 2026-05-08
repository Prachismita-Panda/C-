#include<iostream>
using namespace std;
class student{
	private:
		int roll;
		char name[50];
	public:
		void input(){
			cout<<"Enter roll of the student:";
			cin>>roll;
			cin.get();
			cout<<"Enter name of the student:";
			cin.getline(name,50);
		}
		void output(){
			cout<<"The name of the student: "<<name<<endl;
			cout<<"Roll no = "<<roll<<endl;
		}
};
class mark{
	private:
		int sub1,sub2,sub3,total;
		float per;
		void calculate(){
			total= sub1+sub2+sub3;
			per = float(total)/300*100;
		}
	public:
		void inputMark(){
			cout<<"Enter Three different subject marks:";
			cin>>sub1>>sub2>>sub3;
		}
		void outputFinal(){
			calculate();
			cout<<"The total mark secured by the student is:"<<total<<endl;
			cout<<"Percentage Secured"<<per<<"%"<<endl;
		}
};

int main(){
	student s;
	mark m;
	s.input();
	m.inputMark();
	s.output();
	m.outputFinal();
	return 0;
}
