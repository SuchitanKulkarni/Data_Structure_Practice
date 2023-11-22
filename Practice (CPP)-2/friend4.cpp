#include<iostream>
using namespace std;

class power;

class base
{
	int b;
	
	public:
		
		void getdata(power &);
		void calc(power);
};

class power
{
	int p;
	
	friend class base;
};

void base :: getdata(power &power)
{
	cout<<"enter the base and power : "<<endl;
	cin>>b>>power.p;
}

void base :: calc(power power)
{
	int i,ans =1;
	
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
	
	base.getdata(power);
	base.calc(power);
	
	return 0;
}
