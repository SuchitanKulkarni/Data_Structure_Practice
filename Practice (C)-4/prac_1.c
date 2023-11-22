#include<stdio.h>
int main()
{
	int i,j,s,h,k,a;
	
	
	for(i=1;i<=5;i++)
	{
		for(s=i;s<=4;s++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			if(j==i)
			{
				printf("%d",j);
			}
			else
			{
				printf(" ");
			}
		}
		for(k=2;k<=i;k++)
		{  
		    if(k==i)
			{
				printf("%d",k);
			}
			else
			{
				printf(" ");
		
		    }
		}
		printf("\n");
    }
		
		
	for(i=4;i>=1;i--)
	{
		for(s=i;s<=4;s++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			if(j==i)
			{
				printf("%d",j);
			}
			else
			{
				printf(" ");
			}
		}
		for(k=2;k<=i;k++)
		{  
		    if(k==i)
			{
				printf("%d",k);
			}
			else
			{
				printf(" ");
		
		    }
		}
		printf("\n");
    }
    return 0;
}
		
	
		
		
