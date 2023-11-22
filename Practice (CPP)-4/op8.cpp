#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		
		void scan()
		{
			cout<<"Enter the value x and y : "<<endl;
			cin>>x>>y;
		}
		void show()
		{
			cout<<" x = "<<x<<" y = "<<y<<endl;
		}
		
		number operator * (number p )
		{
			number ans ;
			ans.x = x * p.x;
			ans.y = y * p.y;
			
			return ans;
		}
		
		number operator -(number p)
		{
			number ans ;
			
			ans.x = x - p.x;
			ans.y = y - p.y;
			
			return ans;
		}
};
int main()
{
	number T1,T2,T3;
	
	T1.scan();
	T2.scan();
	
	T3 = T1*T2;
	
	T3.show();
	
	T3 = T1-T2;
	T3.show();
	
	return 0;
}
