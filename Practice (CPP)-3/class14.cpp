#include<iostream>
using namespace std;

class dist
{
	int km,mtr;
	
	public:
		void set(int a,int b);
		int convert();
};

void dist::set(int a,int b)
{
	km = a;
	mtr = b;
}

int dist::convert()
{
	int total = km*1000 +mtr;
	
	return total;
}

int main()
{
	dist d1;
	int a,b;
	cout<<"ENter the distance : "<<endl;
	cin>>a>>b;
	int t1;
	d1.set(a,b);
	t1 = d1.convert();
	cout<<"total = "<<t1;
	return 0;
}
