#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		
	void operator -()
	{
		cout<<" x = "<<x<<" y = "<<y<<endl;
	}
};
int main()
{
	number T1 = {2,3};
	number T2 = {4,6};
	
	-T1;
	-T2;
	
	return 0;
}
