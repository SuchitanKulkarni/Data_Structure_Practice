#include<stdio.h>
int main()
{
	int a,b;
	
	a = 5;
	b = 7;
	
	int *ptr;
	ptr = &a;
	
	printf("\n *ptr = %d",*ptr);
	
	ptr = &b;
	
	printf("\n *ptr = %d",*ptr);
	
	return 0;
}
