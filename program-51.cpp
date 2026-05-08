#include<iostream>
using namespace std;
class Unary{
	private:
		int u;
	public:
		void input(){
			cout<<"Enter a number:";
			cin>>u;
			
		}
		void output(){
			cout<<u;
		}
		Unary operator -(){
			
			Unary t;
			t.u = -u;
						
			return t;
		}
};

int main(){
	Unary obj,res;

	obj.input();
	
	cout<<"The unary number is: "<<endl;
	obj.output();
	
	res= -obj ;
	
	cout<<"The unary number after conversion is: ";
	res.output();
	
	return 0;
}
