#include<stdio.h>
int main()
{
	int a = 5;
	int b = 10;
	
	int *p;
	p = &b;
	
	*p =6;
	
	p = &a;
	
	printf("\n %d",*p+b);
	
	return 0;
}
