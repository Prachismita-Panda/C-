#include <iostream>
using namespace std;
class circle{
	private:
		float pi,radius,area;
		void calculate(){
			area = pi*radius*radius;
		}
	public:
		circle(){
 			pi=3.141;
		}
		void input(){
			cout<<"Enter the radius of the circle:";
			cin>>radius;
		}
		void output(){
			calculate();
			cout<<"Area of the circle:"<<area;
		}
		
};
int main(){
	circle obj;
	obj.input();
	obj.output();
	
	return 0; 
}
