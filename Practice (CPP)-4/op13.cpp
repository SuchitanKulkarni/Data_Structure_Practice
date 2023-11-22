#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		
		void show()
		{
			cout<<"x  = "<<x<<" y = "<<y<<endl;
		}
		
};

number operator - (number p)
{
	number ans;
	
	ans.x = - p.x;
	ans.y = - p.y;
	
	return ans;
}
int main()
{
	number T1 = {2,3};
	number T2 = {6,9};
	
	T2 = -T1;
	
	T1.show();
	T2.show();
	
	return 0;
	
}
