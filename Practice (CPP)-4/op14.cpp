#include<iostream>
using namespace std;

class number
{
	public :
		
		int x,y;
		
		void show()
		{
			cout<<" x = "<<x<<" y = "<<y<<endl;
		}
		
};

number operator +(number p,number q)
{
	number ans;
	
	ans.x = p.x + q.x;
	ans.y = p.y + q.y;
	
	return ans;
}
int main()
{
	number T1 = {2,3};
	number T2 = {6,9};
	
	number T3;
	
	T3 = T1 + T2;
	
	T1.show();
	T2.show();
	T3.show();
	
	return 0;
}
