#include<iostream>
using namespace std;
int addition(int a,int b)
{
	return (a+b);
}
int substraction(int a,int b)
{
	return (a-b);
}
int multiplication(int a,int b)
{
	return(a*b);
}
int division(int a,int b)
{
	if(b != 0)
	{
		return(a/b);
	}

}
int mod(int a,int b)
{
	if(b != 0)
	{
		return(a%b);
	}
	
}
void display(int result)
{
	cout<<"The result is  "<<result;
}
int main()
{
	int a,b,result,choice;
	cout<<"Arithmatic operation"<<endl;
	cout<<"1.Addition"<<endl;
	cout<<"2.Substraction"<<endl;
	cout<<"3.Multiplication"<<endl;
	cout<<"4.Division"<<endl;
	cout<<"5.Modulus"<<endl;
	cout<<"Enter your choice:";
	cin>>choice;
	if(choice>=1 && choice<=5 )
	{
		cout<<"Enter two nubers:";
		cin>>a>>b;
		if(choice == 1){
			result=addition(a,b);
		}
		else if(choice == 2){
			result=substraction(a,b);
		}
		else if(choice == 3){
			result=multiplication(a,b);
		}
		else if(choice == 4)
		{
			result= division(a,b);
		}
		else{
			result= mod(a,b);
		}
		display(result);
		
	}
	else
	{
		cout<<"Enter a valid choice.";
	}
	return 0;
}

