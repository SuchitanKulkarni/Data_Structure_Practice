#include<stdio.h>
int main()
{
	int num[5] = {6,7,8,9,3};
	
	int i,*p;
	
	p = num;
	
	printf("\n%u",num);
	
	for(i=0;i<=4;i++)
	{
		printf("\n%d-%u",*(num+i),(num+i));
	}
	
	return 0;
}
