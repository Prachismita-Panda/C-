#include<iostream>
#include<math.h>
using namespace std;
class Area{
	private:
		float r,l,b,s1,s2,s3,sp,area;
	public:
		void calculate(float rad){
			r=rad;
			area = 3.14*r*r;
			cout<<"Area of the circle:"<<area<<endl;
		}
		void calculate(float l1, float b1){
			l=l1;
			b= b1;
			area = l*b;
			cout<<"Area of the rectangle:"<<area<<endl;
		}
		void calculate(float a1,float a2,float a3){
			s1=a1;
			s2=a2;
			s3=a3;
			sp=(s1+s2+s3)/2;
			area = sqrt(sp*(sp-s1)*(sp-s2)*(sp-s3));
			cout<<"Area of the triangle:"<<area<<endl;
		}
};

int main(){
	Area a;
	a.calculate(2);
	a.calculate(8,6);
	a.calculate(3,4,5);
	return 0;
}
