#include<iostream>
using namespace std;

class number
{
	public:
		
		int x,y;
		
		void operator++()
		{
			++x;
			++y;
		}
		void operator++(int a)
		{
			x++;
			y++;
		}
		void show()
		{
			cout<<"x  = "<<x<<" y = "<<y<<endl;
		}
};

int main()
{
	number T1 = {2,3};
	number T2 = {4,5};
	T1.show();
	++T1;
	T1.show();
	
	T2.show();
	T2++;
	T2.show();
	
	return 0;
}
