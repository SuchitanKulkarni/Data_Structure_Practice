#include<iostream>
using namespace std;

class number
{
	public:
		int x;
		int *px;
		
	number()
	{
		px = NULL;
	}
};

int main()
{
	number T1;
	
	T1.px = &T1.x;
	
	cout<<"&T1.x = "<<(long long)&T1.x;
	
	*(T1.px) = 45;
	
	cout<<" x = "<<*(T1.px);
	
	return 0;
}
