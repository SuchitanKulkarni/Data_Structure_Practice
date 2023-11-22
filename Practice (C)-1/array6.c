#include<stdio.h>
int main()
{
	int source[5]={4,5,6,7,8};
	int target[5];
	int *p;
	int *q;
	p = &source[0];
	q= &target[0];
	int i;
	for(i=0;i<=4;i++)
	{
		*(q+i) = *(p+i);
	}
	for(i=0;i<=4;i++)
	{
		printf("%d",*(q+i));
	}
	
	return 0;
}
