#include<stdio.h>
int main()
{
	int a,b;
	
	a = 5;
	b = 7;
	
	int*pa;
	int*pb;
	
	pa = &a;
	pb = &b;
	
	printf("\n Addition = %d",*pa+*pb);
	
	return 0;
}
