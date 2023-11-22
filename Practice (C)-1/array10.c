#include<stdio.h>
void add(int *p);
int main()
{
	int num[]={6,2,8,10,4};
	
	add(&num[0]);
	
	return 0;
}
void add(int *p)
{
	int i;
	int sum =0;
	for(i=0;i<5;i++)
	{
		sum =sum + *(p+i);
	}
	printf("\nAddition = %d",sum);
}
