#include<iostream>
using namespace std;


class number
{
	
	public:
		int x,y;
		
	number(int a)
	{
		x = a;
		cout<<"int parameterized "<<x;
	}
	~number()
	{
		cout<<"\ndescturctor "<<x;
	}
	
};

int main()
{

    {
    	number T1(1),T2(2);
	}
	cout<<"\nafter main()";
	
	return 0;
}
