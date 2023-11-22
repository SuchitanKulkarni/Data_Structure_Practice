#include<iostream>
using namespace std;

class power;

class base
{
	int b;
	
	friend void scandata(base &base,power &power);
	friend void calc(base base, power power);
};

class power
{
	int p;
	
	friend void scandata(base &base,power &power);
	friend void calc(base base,power power);
};

void scandata(base &base,power &power)
{
	cout<<"Enter the base and power : "<<endl;
	cin>>base.b>>power.p;
}

void calc(base base,power power)
{
	int i,ans=1;
	
	for(i=1;i<=power.p;i++)
	{
		ans = ans * base.b;
	}
	
	cout<<"Ans = "<<ans;
}

int main()
{
	base base;
	power power;
	
	scandata(base,power);
	calc(base,power);
	
	return 0;
}
