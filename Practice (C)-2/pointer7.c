#include<stdio.h>
int main()
{
	int x = 10;
	
	int*p;
	p = &x;
	
	int**q;
	q = &p;
	
	int***r;
	r = &q;
	
 //	printf("\n *x = %d",*x);
    printf("\n *p = %d",*p);
    printf("\n *q = %u",*q);
    printf("\n *r = %u",*r);
    
 // printf("\n **p = %d",**p);
    printf("\n **q = %d",**q);
    printf("\n **r = %u",**r);
    
 // printf("\n ***q = %d",***q);
    printf("\n ***r = %d",***r);
    
    return 0;
	
}
