#include<stdio.h>
int main()
{
	int num,i;
	puts("\nEnter the Number : ");
	scanf("%d",&num);
	
	for(i=2;i<=num-1;i++)
	{
		if(num%i==0)
		{
			printf("\nNot prime");
			break;
		}
	}
	
	if(num==i)
	{
		printf("Prime");
	}
	return 0;
}
