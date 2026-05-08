#include<iostream>
using namespace std;
class time{
	private:
		int h,m,s;
	public:
		void input(){
			cout<<"Enter hour= ";
			cin>>h;
			cout<<"Enter minute= ";
			cin>>m;
			cout<<"Enter Second = ";
			cin>>s;
		}
		void output(){
			cout<<"Hour = "<<h<<endl;
			cout<<"Minute = "<<m<<endl;
			cout<<"Second = "<<s<<endl;
		}
		friend time add(time a,time b){
			time t;
			t.s = (a.s+b.s)%60;
			t.m = (a.m+b.m)%60+(a.s+b.s)/60;
			t.h = (a.h+b.h) + (a.m+b.m)/60;
			return (t);
		}
};

int main(){
	time t1,t2,res;
	t1.input();
	t2.input();
	cout<<"Inside T1"<<endl;
	t1.out put();
	cout<<"Inside T2"<<endl;
	t2.output();
	res= add(t1,t2);
	cout<<"After Addition:"<<endl;
	res.output();
	return 0;
}
