#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter a num:";
	cin>>n;
	if(n%2==0 && n%3==0)
	{	
		cout<<"The num is divisible by both 2 and 3.";	
	}
	else
	{
		cout<<"The num is not divisible by both 2 and 3.";
	} 
	return 0;
}
