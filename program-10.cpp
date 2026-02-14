#include<iostream>
using namespace std;
class  student{
	private:
		int sub1,sub2,sub3,total;
		float per;
		char name[50];
		void calculate(){
			total=sub1+sub2+sub3;
			per=float(total)/300*100;
		}
	public:
		int roll;
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
			cout<<"Percentage = "<<total<<endl;
		}
};

int main(){
	student s[5];
	int i,roll,temp=0;
	for(i=0;i<5;i++){
		s[i].input();
	}
	cout<<"Enter a roll number which you want to view:";
	cin>>roll;
	for(i=0;i<5;i++){
		if(s[i].roll == roll){
			s[i].output();
			temp=1;
			break;
		}
	}
	if(temp == 0){
		cout<<"Roll number not found";
	}
	
	return 0 ;
}
