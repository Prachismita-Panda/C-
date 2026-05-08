#include<iostream>
using namespace std;
class Demo{
	public:
		virtual void function1(){
			cout<<"Inside Function1() of class Demo"<<endl;
		}
};
class Derived:public Demo{
	public:
		void function1(){
			cout<<"Inside function1() of Derived class"<<endl;
		}
		void function2(){
			cout<<"Inside function2() of Derived class"<<endl;
		}
};
int main(){

	Demo *p;
	p =new Demo;
	(*p).function1();
	delete p;
	p=new Derived;
	(*p).function1();
	(*p).function2();
	
	return 0;
}
