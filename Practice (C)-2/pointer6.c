#include<stdio.h>
int main()
{
	int x=10;
	
	int *p;
	p = &x;
	
	int**q;
	q = &p;
	
	int ***r;
	r = &q;
	
	printf("\n x = %d",x);
	printf("\n p = %u",p);
	printf("\n q = %u",q);
	printf("\n r = %u",r);
	
	return 0;
}
