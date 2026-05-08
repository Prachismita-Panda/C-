#include<iostream>
using namespace std;
class Increment{
	private:
		int num;
	public:
		void input(){
			cout<<"Enter a num:";
			cin>>num;
		}
		void output(){
			cout<<num<<endl;
		}
		Increment operator ++(){
			Increment t;
			t.num= num + 1;
			return t;
		}
};
int main(){
	Increment obj,res;
	obj.input();
	
	cout<<"The number is:";
	obj.output();
	
	res = ++obj;
	
	cout<<"The incremented number is:";
	res.output();
	
	return 0;
}
