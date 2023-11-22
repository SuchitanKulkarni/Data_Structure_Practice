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
		int operator ==(number p)
		{
			if(p.x == x && p.y == y)
			{
				return 1;
			 } 
			 else
			 {
			 	return 0;
			 }
		}
};
int main()
{
	number T1,T2;
	
	if(T1==T2)
	{
		cout<<"Equal";
	}
	else
	{
		cout<<"Not equal";
	}
	
	return 0;
}
