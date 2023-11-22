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
	{
		number T2(2);
		{
			number T3(3);
		}
		number T4(4);
	}
	number T5(5);
	cout<<"\nafter main()";
	
	return 0;
}
