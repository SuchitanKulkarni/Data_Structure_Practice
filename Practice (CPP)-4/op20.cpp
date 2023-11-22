#include<iostream>
using namespace std;

class Distance
{
	int feet,inch;
	
	public:
		
		Distance()
		{
			cout<<"Enter the feet and inch : "<<endl;
			cin>>feet>>inch;
		}
		
		int operator < (Distance t)
		{
			int t1,t2;
			
			t1 = feet*12 + inch;
			t2 = t.feet*12 + t.inch;
			
			if(t1<t2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		friend ostream& operator << (ostream & dout,Distance t);
};
ostream& operator << (ostream & dout,Distance t)
{
	cout<<"feet = "<<t.feet<<" "<<"inch = "<<t.inch;
	
	return dout;
}
int main()
{
	Distance d[6];
	
	Distance max = d[0];
	
	int i;
	
	for(i=0;i<6;i++)
	{
		if(max < d[i])
		{
			max = d[i];
		}
	}
	
	cout<<max;
	
	return 0;
}
