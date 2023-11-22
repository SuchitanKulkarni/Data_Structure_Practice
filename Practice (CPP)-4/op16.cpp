#include<iostream>
using namespace std;

class number
{
	int x,y;
	
	public:
		
		void show()
		{
			cout<<" x  =  "<<x<<" y = "<<y<<endl;
		}
		number()
		{
			cout<<"Enter the x and y : "<<endl;
			cin>>x>>y;
		}
		number(int a)
		{
			
		}
		friend void operator ++(number & p);
		
		friend number operator+(number p,number q);
};

void operator ++(number & p)
{
	++p.x;
	++p.y;
}
number operator +(number p,number q)
{
	number ans(0);
	
	ans.x = p.x + q.x;
	ans.y = p.y + q.y;
	
	return ans;  
}
int main()
{
	number T1,T2,T3(0);
	
	++T1;
	
	T1.show();
	
	T3 = T1+T2;
	T3.show();
	
	return 0;
}

