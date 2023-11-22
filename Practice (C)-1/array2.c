#include<stdio.h>
int main()
{
	int num[5]={7,5,8,9,3};
	
	int *p;
	
	p = &num[0];
	int count = 0;
	int i;
	for(i=0;i<5;i++)
	{
		if(*(p+i)==5)
		{
			count++;
		}
	}
	printf("%d",count);
	
	return 0;
}
