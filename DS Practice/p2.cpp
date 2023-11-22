#include<iostream>
using namespace std;

class number
{
	public:
		float *pf;
		
	number()
	{
		pf = NULL;
	}
		
};

int main()
{
	number T1,T2;
	
	float a = 5.6;
	float b = 9.3;
	
	T1.pf = &a;
	T2.pf = &b;
	
	cout<<"a = "<<*(T1.pf)<<" b = "<<*(T2.pf);
	
	return 0;
}
