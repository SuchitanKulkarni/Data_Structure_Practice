#include<stdio.h>
int main()
{
	int x =10;
	printf("\n x = %u",&x);
	
	int *p;
	p=&x;
	printf("\n P = %u",p);
	
	int**q;
	q=&p;
	printf("\n q = %u",q);
	
	int***r;
	r=&q;
	printf("\n r = %u",r);
	
	return 0;

}
