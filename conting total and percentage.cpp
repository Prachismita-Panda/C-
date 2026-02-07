#include<iostream>
using namespace std;
int main()
{
	float s1,s2,s3,total,per;
	cout<<"Enter three subs marks:";
	cin>>s1>>s2>>s3;
	total=s1+s2+s3;
	per=total/300*100;
	cout<<"Total is:"<<total;
	cout<<"\nPercantage is:" <<per;
	return 0;
}
