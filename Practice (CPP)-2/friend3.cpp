#include<iostream>
using namespace std;

class power;

class base
{
	int b;
	public:
		void scandata(power &power);
		void calc(power power);
};

class power
{
	int p;
	
	friend void base :: scandata(power &);
	friend void base :: calc(power);
};

void base :: scandata(power &power)
{
	cout<<"enter the base and power : "<<endl;
	cin>>b>>power.p;
}

void base :: calc(power power)
{
	int i,ans = 1;
	
	for(i=1;i<=power.p;i++)
	{
		ans = ans *b;
	}
	
	cout<<"Ans = "<<ans;
}

int main()
{
	base base;
	power power;
	
	base.scandata(power);
	base.calc(power);
	
	return 0;
}
