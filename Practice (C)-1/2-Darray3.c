/* scan an array of [3][5] from user. check if your array contain 50 or not. */

#include<stdio.h>
int main()
{
	int num[3][5];
	int i,j;
	puts("\nEnter the integers :");
	int count=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
    for(i=0;i<3;i++)
    {
    	for(j=0;j<5;j++)
    	{
    		if(num[i][j]==50)
    		{
    			printf("present");
    			count++;
    			break;
			}
		}
		if(count!=0)
		{
			break;
		}
	
	}
	if(count==0)
	{
		printf("not found");
	}
	return 0;
}
