#include<stdio.h>
int main()
{
	int a = 10;
	
	int *p, **q;
	
	p = &a;
	q= &p;
	
	**q = 50;
	
	printf("\n a = %d",a);
	
	return 0;
}
