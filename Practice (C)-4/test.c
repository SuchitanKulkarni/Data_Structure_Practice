#include<stdio.h>

int main()
{
	int i,j,s,k;
	
	for(i=1;i<=5;i++)
	{
		for(s=i;s<=4;s++)
		{
			printf("-");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		for(k=2;k<=i;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}
