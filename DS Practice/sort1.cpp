#include<iostream>
#define MAX 250000
using namespace std;

int main()
{
	int num[MAX];
	int i,j,temp;
	
	for(i=0;i<MAX;i++)
	{
		num[i] = MAX-i;
	}
	for(i = 0;i<8;i++)
	{
		for(j = i+1;j<8;j++)
		{
			if(num[i]>num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	
	for(i = 0;i<MAX;i++)
	{
		cout<<num[i]<<" ";
		
	}
}
