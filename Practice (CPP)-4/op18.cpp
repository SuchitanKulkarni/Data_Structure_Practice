#include<iostream>
using namespace std;

class Distance
{
	public:
		
		int km,mtr;
		
		void operator ~()
		{
			cout<<"Enter the km and mtr : "<<endl;
			cin>>km>>mtr;
		}
		int operator ==(Distance p)
		{
			int t1,t2;
			
			t1 = km*1000 + mtr;
			t2 = p.km*1000 + p.mtr;
			
			if(t1==t2)
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
	Distance d1,d2;
	
	~d1;
	~d2;
	
	if(d1==d2)
	{
		cout<<"d1 = d2";
	}
	else
	{
		cout<<"d1 is not equal to d2 "<<endl;
		
	}
	
	return 0;
}
