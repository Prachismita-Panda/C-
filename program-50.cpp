#include<iostream>
using namespace std;
class Time{
	private:
		int h,m,s;
	public:
		void getTime(){
			cout<<"Enter the time:";
			cin>>h>>m>>s;
			
		}
		void showTime(){
			cout<<h<<"h"<<m<<"m"<<s<<"s"<<endl;
		}
		Time operator + (Time p){
			Time t;
			t.s = (s + p.s)%60;
			t.m = (m+p.m)%60 + (s+p.s)/60;
			t.h = (h+p.h) + (m+p.m)/60;
			
			return t;
		}
};

int main(){
	Time t1,t2,res;
	
	cout<<"Enter first time object:"<<endl;
	t1.getTime();
	
	cout<<"Enter Second time object:"<<endl;
	t2.getTime();
	
	
	res=t1+t2;
	
	cout<<"The addition of time objects is:";
	res.showTime();
	
	return 0;
}
