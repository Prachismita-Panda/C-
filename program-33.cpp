#include<iostream>
using namespace std;
class complex{
	private:
		int real,img;
	public:
		void input(){
			cout<<"Enter the real part:";
			cin>>real;
			cout<<"Enter imaginary part: ";
			cin>>img;
		
		}
		void output(){
			cout<<"The number is: "<<endl;
			cout<<" "<<real<<"+"<<" "<<img<<"i"<<endl;
		}
		friend complex add(complex c1,complex c2){
			complex t;
			t.real = c1.real + c2.real;
			t.img = c1.img+c2.img;
			return (t);
		}
};

int main(){
	complex  c1,c2,res;
	c1.input();
	c2.input();
	cout<<"Inside T1"<<endl;
	c1.output();
	cout<<"Inside T2"<<endl;
	c2.output();
	res= add(c1,c2);
	cout<<"After Addition:"<<endl;
	res.output();
	return 0;
}
