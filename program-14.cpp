 #include <iostream>
using namespace std;

class student
{
private:
    int roll, total, mark[3];
    char name[50];
    float per;
	void calculate();

public:
	void input();
	void output();
   
};

 void student::input()
    {
        int i;

        cout << "Enter roll of student: ";
        cin >> roll;

        cin.get();  

        cout << "Enter name of the student: ";
        cin.getline(name, 50);

        cout << "Enter three different subjects marks: ";
        for (i = 0; i < 3; i++)
        {
            cin >> mark[i];
        }
    }

void student::output()
    {
        calculate();
        cout << "Name: " << name << endl;
        cout << "Roll no.: " << roll << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << per << "%" << endl;
    }
void student::calculate()
    {
        int i;
        total = 0;
        for (i = 0; i<3; i++)
        {
            total = total + mark[i];
        }
        per = (float(total) / 300) * 100;
    }
int main()
{
    student s;
   	s.input();
    s.output();

    return 0;
}
