#include<iostream>
using namespace std;

class number
{
	public:
		int num[5];
};

int main()
{
	number t1,t2,t3;
	
	int i;
	cout<<"enter the 5 integers : "<<endl;
	for(i=0;i<5;i++)
	{
		cin>>t1.num[i];
	}
	cout<<"enter the 5 integers : "<<endl;
	
	for(i=0;i<5;i++)
	{
		cin>>t2.num[i];
	}
	
	cout<<"enter the 5 integer : "<<endl;
	
	for(i=0;i<5;i++)
	{
		cin>>t3.num[i];
	}
	
	int max1,max2,max3,Max;
	
	max1 = t1.num[0];
	max2 = t2.num[0];
	max3 = t3.num[0];
	
	for(i=0;i<5;i++)
	{
		if(max1<t1.num[i])
		{
			max1=t1.num[i];
		}
		if(max2<t2.num[i])
		{
			max2 = t2.num[i];
		}
		if(max3<t3.num[i])
		{
			max3 = t3.num[i];
		}
	}
	
	if(max1>max2)
	{
		Max = max1;
	}
	else
	{
		Max = max2;
	}
	
	Max = Max>max3 ? Max : max3;
	
	cout<<"largest value = "<<Max;
	
	return 0;
}
