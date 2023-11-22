#include<iostream>
using namespace std;


class number
{
	
	public:
		int x,y;
		
	number(int a)
	{
		x = a;
		cout<<"\nint parameterized "<<x;
	}
	~number()
	{
		cout<<"\ndescturctor "<<x;
	}
	
};

int main()
{
	number T1(1);
	
	number*p;
	p = new number(11);
	
	delete p ;
	
	return 0;
}
