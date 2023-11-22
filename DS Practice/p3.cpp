#include<iostream>
using namespace std;

class number
{
	public:
		int * pint;
		float *pfloat;
		
	number()
	{
		pint = NULL;
		pfloat = NULL;
	}
};

int main()
{
	int a;
	float b;
	
	number obj;
	
	obj.pint = &a;
	obj.pfloat = &b;
	
	*(obj.pint) = 39;
	*(obj.pfloat) = 56.90;
	
	cout<<"a = "<<*(obj.pint)<<" b = "<<*(obj.pfloat);
	
	return 0;
}
