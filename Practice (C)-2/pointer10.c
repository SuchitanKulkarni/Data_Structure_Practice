#include<stdio.h>
int main()
{
	int a,b;
	a = 5;
	b = 7;
	
	int *ptr;
	ptr = &a;
	
	printf("\n before a = %d",a);
	
	*ptr = 10;
	printf("\n After a = %d",a);
	
//8	ptr = 10; //it is invalid
	
	printf("\n after *ptr = %d",*ptr);
	
	return 0;
}
