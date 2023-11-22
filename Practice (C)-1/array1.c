#include<stdio.h>
int main()
{
	int num[5] = {5,6,7,8,9};
	int *p,*q,i;
	
	p = &num[0];
	q = &num[3];
	
	for(i=0;i<5;i++)
	{
		printf("\n%d",*(p+i));
	}
	
	return 0;
}
