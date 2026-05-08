#include<iostream>
using namespace std;
class Matrix{
	private:
		int a[3][3];
	public:
		void readMatrix();
		void printMatrix();
		Matrix operator +(Matrix p)
		{
			Matrix t;
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					t.a[i][j] = a[i][j] + p.a[i][j];
				}
			}
			return t;
		}
};
void Matrix :: readMatrix(){
	cout<<"Enter Matrix:";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
}
void Matrix :: printMatrix(){
	cout<<"Matrix is"<<endl<<"\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<"  ";
		}
		cout<<"\n\n";
	}
}


int main(){
	Matrix m1,m2,res;
	m1.readMatrix();
	m2.readMatrix();
	res = m1+m2;
	res.printMatrix();
	
	return 0;
	
}
