#include<iostream>
using namespace std;

class number
{
	public:
		int x;
		static int y;
};

int number :: y = 5;

int main()
{
	number t1,t2,t3;
	
	cout<<number::y<<endl;
	
	t1.y = 15;
	cout<<"t2.y = "<<t2.y;
	t3.y = 50;
	cout<<" t1.y = "<<t1.y;
	
	return 0;
	
}
