#include<iostream>
using namespace std;

class exponent
{
	int base,power;
	
	public :
		void set(int a,int b)
		{
			base = a;
			power = b;
		}
		void calcu()
		{
			int i,ans=1;
			for(i=1;i<=power;i++)
			{
				ans = ans*base;
			}
			
			cout<<"Ans = "<<ans<<endl;
		}
		
};

int main()
{
	exponent e1;
	
	int a,b;
	cout<<"Enter the base and power : "<<endl;
	cin>>a>>b;
	
	e1.set(a,b);
	e1.calcu();
	
	return 0;
}
