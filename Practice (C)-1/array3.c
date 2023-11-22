#include<stdio.h>
int main()
{
	int num[6];
	int i,*p,count = 0;
	p = &num[0];
	puts("\nEnter the 6 integers for array:");
	
	for(i=0;i<=5;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<=5;i++)
	{
		if(*(p+i)==20)
		{
			count++;
			break;
		}
		
	}
	if(count!=0)
	{
		puts("\nPresent");
	}
	else
	{
		puts("\nNot present");
	}
	
	return 0;
}
