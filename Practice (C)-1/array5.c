#include<stdio.h>
int main()
{
	int num[6] = {4,6,3,7,9,7};
	int i,sum =0,*p;
	
	p = &num[0];
	
	for(i =0;i<=5;i++)
	{
		sum = sum+*(p+i);
	}
	printf("Addition = %d",sum);
	
	return 0;
}
