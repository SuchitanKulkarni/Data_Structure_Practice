#include<iostream>
#define MAX 10000
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
	int num[MAX];
	int i,j,temp;
	
	
	
	for(i=0;i<MAX;i++)
	{
		num[i] = i;
	}
	
	int flag = 0;
	
	for(i=1;i<MAX;i++)
	{
		flag = 0;
		
		for(j=0;j<MAX-i;j++)
		{
			if(num[j]>num[j+1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
				
				flag = 1;
			}
			
		}
		
		if(flag == 0)
		{
			break;
		}
	}
}
