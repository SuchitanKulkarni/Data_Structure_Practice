#include<stdio.h>
int main()
{
	int num[2][3];
	int i,j;
	
	puts("\nEnter integers :");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",num[i][j]);
		}
	}
	
	return 0;
}
