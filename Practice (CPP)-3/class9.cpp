#include<iostream>
using namespace std;

class number
{
	public :
		int x,y;
		void set(int a,int b)
		{
			x = a;
			y = b;
		}
		void print()
		{
			cout<<"x = "<<x<<" y = "<<y<<endl;
		}
};

int main()
{
	number T1;
	int a,b;
	cout<<"ENter the values :"<<endl;
	cin>>a>>b;
	
	T1.set(a,b);
	T1.print();
	return 0;
}
