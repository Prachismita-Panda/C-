#include <iostream>
using namespace std;

class student{
	private:
	    int roll, total = 0, mark[3];
	    char name[50];
	    float per;
	
	    void calculate()
	    {
	        int i;
	        for (i = 0; i < 3; i++)
	        {
	            total = total + mark[i];
	        }
	        per = (float(total) / 300) * 100;
	    }
	
	public:
		
	 void input()
	    {
	        int i;
	
	        cout << "Enter roll of student: ";
	        cin >> roll;
	
	        cin.get();   // To clear newline from buffer
	
	        cout << "Enter name of the student: ";
	        cin.getline(name, 50);
	
	        cout << "Enter three different subjects marks: ";
	        for (i = 0; i < 3; i++)
	        {
	            cin >> mark[i];
	        }
	    }
	
	void output()
	    {
	        calculate();
	
	        cout << "Name: " << name << endl;
	        cout << "Roll no.: " << roll << endl;
	        cout << "Total: " << total << endl;
	        cout << "Percentage: " << per << "%" << endl;
	    }
	   
};

int main()
{
    student S;
    S.input();
    S.output();

    return 0;
}
