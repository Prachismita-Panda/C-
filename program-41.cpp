#include<iostream>
using namespace std;
class one{
	public:
		void function1(){
			cout<<"Inside Function1() of class one"<<endl;
		}
};
class two:public one{
	public:
		
		-
		void function1(){
			cout<<"Inside function1() of class two"<<endl;
		}
		void function2(){
			cout<<"Inside function2() of class two"<<endl;
		}
};
int main(){

	two obj2;

	obj2.function1();
	obj2.function2();
	return 0;
}
