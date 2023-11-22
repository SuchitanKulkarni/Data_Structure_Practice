/* scan array of n integers from user. check how many times user entered 10. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	puts("\nEnter the integer :");
	scanf("%d",&n);
	
	p = (int*)malloc(n*sizeof(int));
	puts("\nEnter the integers :");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}
	
	int count=0;
	
	for(i=0;i<n;i++)
	{
		if(*(p+i)==10)
        {
		
		   count++;
     	}
	}
	
	printf("\n Count = %d",count);
	
 
	return 0;
	
}
