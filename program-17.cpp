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
		void calculate(complex obj1,complex obj2){
			real = obj1.real + obj2.real;
			img = obj1.img + obj2.img;
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
	c3.calculate(c1,c2);
	cout<<"The sum of two complex numbers are:";
	c3.output();
	return 0;
}
