#include<iostream>
using namespace std;

class Time
{
	int min,hr;
	
	friend ostream & operator <<(ostream & dout,Time p);
	friend istream & operator>>(istream & din,Time & p);
};

ostream & operator <<(ostream & dout,Time p)
{
	cout<<" Min = "<<p.min<<" Hr = "<<p.hr<<endl;
	
	return dout;
}

istream & operator>>(istream & din,Time & p)
{
	cout<<"Enter the min and hour : "<<endl;
	
	cin>>p.min>>p.hr;
	
	return din;
}
int main()
{
	Time T[6];
	
	int i;
	
	for(i=0;i<6;i++)
	{
		cin>>T[i];
	}
	for(i=0;i<6;i++)
	{
		cout<<T[i];
	}
	
	return 0;
	
	return 0;
}
