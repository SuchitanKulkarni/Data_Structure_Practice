#include<iostream>
using namespace std;

int scan(int c)
{
	int x;
	
	cout<<"enter ";
	cin>>x;
	
	if(x>0)
	{
		c++;
	}
	if(c==6)
	{
		return 0;
	}
	else
	{
		int res = scan(c);
		
		if(x>0)
		{
			return res+x;
		}
		else
		{
			return res;
		}
	}
}

int main()
{
	int c = 0;
	int ans = scan(c);
	
	cout<<ans;
}
