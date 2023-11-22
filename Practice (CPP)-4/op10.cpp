#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		number()
		{
			cout<<"ENter the x and y : "<<endl;
			cin>>x>>y;
		}
		
		number(int a)
		{
			
		}
		void show()
		{
			cout<<"x  = "<<x<<" y = "<<y<<endl;
		}
		
		number operator * (number p)
		{
			number ans(0);
			
			ans.x = x * p.x;
			ans.y = y * p.y;
			
			return ans; 
		}
		number operator -(number p)
		{
			number ans(0);
			
			ans.x = x - p.x;
			ans.y = y - p.y;
			
			return ans;
		}
};
int main()
{
	number T1,T2,T3,T4(0);
	
	T4 = T1-T2-T3;
	T4.show();
	
	T4 = T1*T2-T3;
	T4.show();
	
	return 0;
	
}
