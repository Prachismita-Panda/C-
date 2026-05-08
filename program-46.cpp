#include<iostream>
using namespace std;
class Date {
	private:
		int dd,mm,yy;
	public:
		void get_date(){
			cout<<"Input Date:";
			cin>>dd>>mm>>yy;
		}
		int operator == (Date p){
			if(dd==p.dd && mm==p.mm && yy==p.yy){
				return 1;
			}
			else{
				return 0;
			}
		}
};
int main(){
	Date d1,d2;
	d1.get_date();
	d2.get_date();
	if(d1==d2)  
		cout<<"Dates are equal";
	else
		cout<<"Dates are not equal";
	return 0;
}
