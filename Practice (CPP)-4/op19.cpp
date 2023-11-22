#include<iostream>
using namespace std;

class Distance 
{
	int km,mtr;
	
	public:
		
		int operator < (Distance p)
		{
			int t1,t2;
			
			t1 = km*1000 + mtr;
			t2 = p.km*1000 + p.mtr;
			
			if(t1<t2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		friend void operator ~(Distance & p);
		friend int operator >(Distance p, Distance q);
};

void operator ~(Distance &p)
{
	cout<<"Enter the km and mtr : "<<endl;
	cin>>p.km>>p.mtr;
}

int operator >(Distance p,Distance q)
{
	int t1,t2 ;
	
	t1 = p.km*1000 + p.mtr;
	t2 = q.km*1000 + q.mtr;
	
	if(t1>t2)
	{
		return 1;
	 } 
	 else
	 {
	 	return 0;
	 }
}
int main()
{
	Distance d1,d2;
	
	~d1;
	~d2;
	
	if(d1>d2)
	{
		cout<<"d1>d2";
	}
	else if(d1<d2)
	{
		cout<<"d1<d2";
	}
	else
	{
		cout<<"d1==d2";
	}
	
	return 0;
}


