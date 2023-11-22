#include<stdio.h>
int main()
{
	int a,b;
	
	a = 5;
	b = 7;
	
	int *ptr;
	ptr = &a;
	
	*ptr = 10;
	
	printf("\n a= %d",a);
	
	ptr = &b;
	
	*ptr = 70;
	
	printf("\n b = %d",b);
	
	return 0;
}
