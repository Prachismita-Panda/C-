#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"Inside Constructor"<<endl;
		}
		~A(){
			cout<<"Inside Destructor"<<endl;
		}
};
int main(){
	A obj1;
	return 0;
}
