#include<iostream>
using namespace std;
class  student{
	private:
		int roll,sub1,sub2,sub3,total;
		float per;
		char name[50];
		void calculate(){
			total=sub1+sub2+sub3;
			per=float(total)/300*100;
		}
	public:
		void input(){
			cout<<"Enter your roll:";
			cin>>roll;
			cin.get();
			cout<<"Enter your name:";
			cin.getline(name,50);
			cout<<"Enter three different sub marks:";
			cin>>sub1>>sub2>>sub3;
		}
		void output(){
			calculate();
			cout<<"Name = "<<name<<endl;
			cout<<"Roll no= "<<roll<<endl;
			cout<<"Total = "<<total<<endl;
			cout<<"Percentage = "<<per<<"%"<<endl;
		}
		int getRoll(){
			return roll;
		}
};

int main(){
	student s[5];
	int i,roll,temp=0;
	for(i=0;i<5;i++){
		cout<<"\nStudent"<<i+1<<endl;
		s[i].input();
	}
	cout<<"Enter a roll number which you want to view:";
	cin>>roll;
	for(i=0;i<5;i++){
		if(s[i].getRoll() == roll){
			
			temp=1;
			s[i].output();
			break;
		}
	}
	if(temp == 0){
		cout<<"Roll number not found";
	}
	
	return 0 ;
}
