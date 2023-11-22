#include<stdio.h>
void count(int *p,int n);
int main()
{
	int num[6]={5,6,7,8,9,10};
	count(&num[0],6);
	
	return 0;
}
void count(int *p,int n)
{
	int count =0;
	int i;
	for(i=0;i<n;i++)
	{
		if(*(p+i)==10)
		{
			count++;
		}
	}
	printf("\nCount = %d",count);
}
