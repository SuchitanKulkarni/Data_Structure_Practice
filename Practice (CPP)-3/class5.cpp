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
	
	cout<<"Enter the distance(km,mtr) 3 : "<<endl;
	cin>>d3.km>>d3.mtr;
	
	int t1,t2,t3;
	
	t1 = (d1.km*1000)+d1.mtr;
	t2 = (d2.km*1000)+d2.mtr;
	t3 = (d3.km*1000)+d3.mtr;
	
	cout<<"Total distance 1 = "<<t1<<endl;
	cout<<"total distance 2 = "<<t2<<endl;
	cout<<"total distance 3 = "<<t3<<endl;
	
	return 0;
}
