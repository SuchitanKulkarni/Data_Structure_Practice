// for class distance containing (private) km,mtr , scan 2 distance from user & find the largest distance 

#include<iostream>
using namespace std;

class Distance
{
	int km,mtr;
	
	public:
		
		Distance ()
		{
			cout<<"Enter the distance in km and mtr : "<<endl;
			cin>>km>>mtr;
		}
		int operator > (Distance p)
		{
			int t1,t2;
			
			t1 = km*1000 + mtr;
			t2 = p.km*1000 + p.mtr;
			
			if(t1>t2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		friend ostream & operator <<(ostream & dout,Distance p);
};
ostream & operator <<(ostream & dout,Distance p)
{
	cout<<p.km<<" "<<p.mtr;
	
	return dout;
}

int main()
{
	Distance D1,D2;
	
	if(D1>D2)
	{
		cout<<D1<<" is greater";
	}
	else
	{
		cout<<D2<<" is greater";
	}
	
	return 0;
}
