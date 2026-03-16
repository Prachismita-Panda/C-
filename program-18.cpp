#include<iostream>
using namespace std;  
class complex{
	private:
		int real;
		int img;
	public:
		void input(){
			cout<<"Enter the real part :";
			cin>>real;
			cout<<"Enter the imaginary part:";
			cin>>img;
		}   
		void output(){
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		complex calculate(complex c1,complex c2){
			complex temp;
			temp.real = c1.real + c2.real;
			temp.img = c1.img + c2.img;
			return temp;
		}
};
int main(){
	complex c1,c2,c3;
	int real,img;
	cout<<"Enter the value of first complex number"<<endl;
	c1.input();   
	cout<<"Enter the value of second complex number"<<endl;
	c2.input();
	cout<<"First complex number= ";
	c1.output();
	cout<<"Second complex number= ";
	c2.output();
	
	c3 = c3.calculate(c1,c2);
	cout<<"The sum of two complex numbers are:";
	c3.output();
	return 0;
}
