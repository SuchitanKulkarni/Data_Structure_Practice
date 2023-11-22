#include<iostream>
using namespace std;

int main()
{
	int num[8];
	
	int i;
	
	cout<<"enter the 8 integers : "<<endl;
	
	for(i=0;i<8;i++)
	{
		cin>>num[i];
	}
	
	int max;
	max = num[0];
	
	for(i=0;i<8;i++)
	{
		if(max <num[i])
		{
			max = num[i];
		}
	}
	
	cout<<"largest value = "<<max;
	
	return 0;
}
