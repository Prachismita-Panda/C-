#include<iostream>
using namespace std;
class Calculate{
	private:
		float r,l,br,bs,h,area;
	public:
		
		void circleData(){
			cout<<"Enter radius of the circle";
			cin>>r;
		}
		void rectangleData(){
			cout<<"Enter length and breath of rectangle:";
			cin>>l>>br;
		}
		void tringleData(){
			cout<<"Enter base and height of triangle:";
			cin>>bs>>h;
		}
		void area(float r){
			area = 3.14*r*r;
			cout<<"The area of the circle is:"<<area<<endl;
		}
		void area(float l, float br){
			
			area = l*br;
			cout<<"The area of the rectangle is:"<<area<<endl;
		}
//		void area(float bs,float h){
//			area = 0.5*bs*h;
//			cout<<"The area of the triangle is:"<<area<<endl;
//		}
};
int main(){

	Calculate t;
	
	t.circleData();
	t.rectangleData();
	t.tringleData();
	t.area()
	
	
	
}
