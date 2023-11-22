#include<iostream>
using namespace std;

class Distance
{
	public:
		int km,mtr;
};

int main()
{
	Distance d1;
	Distance d2;
	Distance d3;
	
	cout<<"Enter the distance(km,mtr) 1 : "<<endl;
	cin>>d1.km>>d1.mtr;
	
	cout<<"Enter the distance(km,mtr) 2 : "<<endl;
	cin>>d2.km>>d2.mtr;
	
	int t1,t2,t3;
	
	t1 = (d1.km*1000)+d1.mtr;
	t2 = (d2.km*1000)+d2.mtr;
	
	if(t1>t2)
	{
		cout<<t1<<"Is greater ";
	}
	else
	{
		cout<<t2<<"Is greater ";
	}
	
	return 0;
}
