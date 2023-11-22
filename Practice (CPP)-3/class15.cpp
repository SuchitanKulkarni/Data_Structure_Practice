#include<iostream>
using namespace std;

class Time
{
	private :
		int min,hr;
		
	public:
		void set(int a,int b);
		int convert();
		
};

void Time :: set(int a,int b)
{
	min = b;
	hr = a;
}

int Time :: convert()
{
	int total = hr*60 +min;
	
	return total;
}
int main()
{
	Time t1, t2;
	int a,b;
	cout<<"Enter the hour and min :"<<endl;
	cin>>a>>b;
	t1.set(a,b);
	cout<<"Enter the hour and min :"<<endl;
	cin>>a>>b;
	t2.set(a,b);
	
	int d1,d2;
	
	d1 = t1.convert();
	d2 = t2.convert();
	
	if(d1>d2)
	{
		cout<<"Time 1 is greater";
	}
	else
	{
		cout<<"Time 2 is greater";
	}
	return 0;
	
	t1.set(a,b);
}
