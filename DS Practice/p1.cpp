#include<iostream>
using namespace std;

class number
{
	public:
		int x;
		int *p;
		
		number()
		{
			x = 34;
			p = NULL;
		}
		number(int a)
		{
			x = 35;
			p = NULL;
		}
};

int main()
{
	number T1;
	number T2(5);
	
	T1.x = 80;
	T2.x = 35;
	
	int a = 89;
	
	T1.p = &a;
	
	*(T1.p) = 45;
	
	cout<<*(T1.p);
	
	return 0;
}
