#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		
		number()
		{
			cout<<"Enter the x and y : "<<endl;
			cin>>x>>y;
		}
		number(int a)
		{
			
		}
		number operator +(number p)
		{
			number ans(0);
			
			ans.x = x + p.x;
			ans.y = y + p.y;
			
			return ans;
		}
		number operator +(int a)
		{
			number ans(0);
			
			ans.x = x +a;
			ans.y = y +a;
			
			return ans;
		}
		number operator *(number p)
		{
			number ans(0);
			
			ans.x = x * p.x;
			ans.y = y * p.y;
			
			return ans;
		}
		number(int a,int b)
		{
			x = a;
			y = b;
		}
		void show()
		{
			cout<<"x  = "<<x<<" y = "<<y<<endl;
		}
};
int main()
{
	number T1(5,6),T2,T3(2,4),T4(0);
	
	T4 = T1 + T2 + T3;
	T4.show();
	
	T4 = T1 + 5;
	T4.show();
	
	T4 = T1*T2+T3;
	T4.show();
	
	return 0; 
}
