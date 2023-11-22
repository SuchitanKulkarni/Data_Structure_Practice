#include<stdio.h>
int main()
{
	int x = 10;
	printf("\n x = %d",&x);
	printf("\n & x = %u",&x);
	
	int * p;
	p = &x;
	printf("\n & P = %u",&p);
	
	return 0;
}
