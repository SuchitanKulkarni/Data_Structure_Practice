/* create runtime memory for 3 integers. scan 3 integers & print it. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int i;
	p = (int *)malloc(3);
	
	puts("\nEnter the 3 integers :");
	for(i=0;i<3;i++)
	{
		scanf("%d",p+i);
	}
	
	for(i=0;i<3;i++)
	{
		printf("\n %d",*(p+i));
	}
	
	return 0;
	
}
