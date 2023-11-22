#include<iostream>
using namespace std;

class dist
{
	int km,mtr;
	
	public:
		void set(int a,int b)
		{
			km = a;
			mtr = b;
		}
		void convert()
		{
			int total = km*1000 +mtr;
			cout<<"Total = "<<total;
		}
};

int main()
{
	dist d1,d2;
	int k,m;
	cout<<"ENter the distance : "<<endl;
	cin>>k>>m;
	d1.set(k,m);
	cout<<"ENter the distance : "<<endl;
	cin>>k>>m;
	d2.set(k,m);
	d1.convert();
	d2.convert();
	
	return 0;
}
