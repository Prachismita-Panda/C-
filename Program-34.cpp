#include<iostream>
using namespace std;
class Height{
	private:
		int feet,inch;
	public:
		void input(){
			cout<<"Enter feet:";
			cin>>feet;
			cout<<"Enter inch: ";
			cin>>inch;
		
		}
		void output(){
			cout<<"The height of the object is: "<<endl;
			cout<<" "<<feet<<"feet"<<" "<<inch<<"inch"<<endl;
		}
		friend Height add(Height h1,Height h2){
			Height t;
			t.inch=(h1.inch+h2.inch)%12;
			t.feet = (h1.feet+h2.feet) + (h1.inch+h2.inch)/12;
		
			return (t);
		}
};

int main(){
	Height h1,h2,res;
	h1.input();
	h2.input();
	cout<<"Inside H1"<<endl;
	h1.output();
	cout<<"Inside H2"<<endl;
	h2.output();
	res= add(h1,h2);
	cout<<"After Addition:"<<endl;
	res.output();  
	return 0;
}
