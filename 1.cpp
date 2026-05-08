#include<iostream>
using namespace std;

class Calculate{
    private:
        float r,l,br,bs,h;

    public:
        void circleData(){
            cout<<"Enter radius of the circle: ";
            cin>>r;
        }

        void rectangleData(){
            cout<<"Enter length and breadth of rectangle: ";
            cin>>l>>br;
        }

        void triangleData(){
            cout<<"Enter base and height of triangle: ";
            cin>>bs>>h;
        }

        float areaCircle(){
            return 3.14 * r * r;
        }

        float areaRectangle(){
            return l * br;
        }

        float areaTriangle(){
            return 0.5 * bs * h;
        }
};

int main(){
    Calculate t;

    t.circleData();
    t.rectangleData();
    t.triangleData();

    cout<<"\nThe area of the circle is: "<<t.areaCircle()<<endl;
    cout<<"The area of the rectangle is: "<<t.areaRectangle()<<endl;
    cout<<"The area of the triangle is: "<<t.areaTriangle()<<endl;

    return 0;
}
