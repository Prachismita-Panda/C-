#include<iostream>
using namespace std;
class Test{
	private:
		float area;
	public:
		void fun1(float side){
			area = 6*side*side;
			cout<<"Area of the cube:"<<area<<endl;
		}
		void fun1(float l,float b,float h){
			area = 2*(l*b+b*h+l*h);
			cout<<"Area of cuboid:"<<area<<endl;
		}
		void fun1(float r,float h){
			area = 2*3.14*r*(r+h);
			cout<<"Area of cylinder:   "<<area<<endl;
		}
};
int main(){
	Test t;
	t.fun1(3);
	t.fun1(4,5,6);
	t.fun1(2,5);
	
	return 0;
}
