/* scan array of[3][4] from user .check how many times 15 is present in the array .*/

#include<stdio.h>
int main()
{
	int num[3][4];
	int count = 0;
	int i,j;
	puts("\nEnter the integers :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(num[i][j]==15)
			{
				count++;
			}
		}
	}
	
	printf("\ncount = %d",count);
	
	return 0;
}
