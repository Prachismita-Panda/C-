#include<iostream>
using namespace std;
class Complex{
	private:
		int real,img;
	public:
		void input(){
			cout<<"Enter real part:";
			cin>>real;
			cout<<"Enter imaginary part:";
			cin>>img;
		}
		void output(){
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		Complex operator + (Complex p){
			Complex  temp;
			temp.real = real + p.real;
			temp.img = img + p.img;
			
			return temp;
		}
};

int main(){
	Complex c1,c2,res;
	
	cout<<"Enter first complex number:"<<endl;
	c1.input();
	
	cout<<"Enter Second complex number:"<<endl;
	c2.input();
	
	cout<<"The first complex number is:";
	c1.output();
	
	cout<<"The second complex number is:";
	c2.output();
	
	res=c1+c2;
	
	cout<<"The addition of complex numbers is:";
	res.output();
	
	return 0;
}
