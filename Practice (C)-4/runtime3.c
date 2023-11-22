/* scan n integers from user. printf the addition of them. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*p;
	puts("\nEnter the integer :");
	scanf("%d",&n);
	int i,sum =0;
	p = (int*)malloc(n);
	
	puts("\nEnter the integers :");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<n;i++)
	{
		sum = sum +*(p+i);
	}
	
	printf("\n Addition = %d",sum);
	
	return 0;
	
}
