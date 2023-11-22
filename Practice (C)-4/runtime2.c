/* scan n integers from user. print them. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n;
	
	puts("\nEnter the number :");
	scanf("%d",&n);
	p = (int*)malloc(n);
	int i;
	puts("\nEnter the n integers :");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
	
	return 0;
}
