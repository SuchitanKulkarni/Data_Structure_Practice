#include<iostream>
using namespace std;

class number
{
	public:
		
		int x ,y;
		
		number(int a)
		{
			
		}
		number()
		{
			cout<<"Enter the value of x nad y :  "<<endl;
			cin>>x>>y;
		}
		void show()
		{
		   cout<<" x = "<<x<<" y = "<<y<<endl;
			
		}
		
		number mul(number p)
		{
			number ans(0);
			
			ans.x = x * p.x;
			ans.y = y * p.y;
			
			return ans;
		}
		number add(number p)
		{
			number ans(0);
			
			ans.x = x + p.x;
			ans.y = y + p.y;
			
			return ans;
		}
		
};
int main()
{
	number T1,T2,T3,T4,T5(0);
	
	T5 = ((T1.add(T2)).add(T3));
	
	T5.show();
	
	T5 = (((T1.add(T2)).add(T3)).add(T4));
	T5.show();
	
	T5 = (((T1.mul(T2)).mul(T3)).mul(T4));
	T5.show();
	
	return 0;
}
