#include<stdio.h>
int add(int *p,int n);
int main()
{
	int num[10];
	int i,sum;
	
	puts("\nENter the 10 integers for array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
		
	}
	
	sum = add(num,10);
	
	printf("\nAddition = %d",sum);
	
	return 0;
}
int add(int *p,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		if(*(p+i)%2==1)
		{
			sum = sum +*(p+i);
		}
	}
	return sum;
}
