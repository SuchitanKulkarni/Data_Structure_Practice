#include<stdio.h>
int main()
{
	int a = 15;
	
	int *p ,**q,***r;
	
	p = &a;
	q = &p;
	r = &q;
	
	printf("\n%d",a);
	printf("\n%u",p);
	printf("\n%u",q);
	printf("\n%d",*p);
	printf("\n%u",&p);
	printf("\n%u",&q);
	printf("\n%u",*q);
	printf("\n%u",&q);
	printf("\n%d",**q);
	printf("\n%u",**r);
	printf("\n%u",&r);
	printf("\n%d",***r);
	
	return 0;
}
